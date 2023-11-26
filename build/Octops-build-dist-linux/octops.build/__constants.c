
#include "nuitka/prelude.h"
#include "structseq.h"

#include "build_definitions.h"

// Global constants storage
PyObject *global_constants[93];

// Sentinel PyObject to be used for all our call iterator endings. It will
// become a PyCObject pointing to NULL. It's address is unique, and that's
// enough for us to use it as sentinel value.
PyObject *_sentinel_value = NULL;

PyObject *Nuitka_dunder_compiled_value = NULL;


#ifdef _NUITKA_STANDALONE
extern PyObject *getStandaloneSysExecutablePath(PyObject *basename);
#endif

extern void setDistributionsMetadata(PyObject *metadata_values);

// We provide the sys.version info shortcut as a global value here for ease of use.
PyObject *Py_SysVersionInfo = NULL;

static void _createGlobalConstants(PyThreadState *tstate) {
    // We provide the sys.version info shortcut as a global value here for ease of use.
    Py_SysVersionInfo = Nuitka_SysGetObject("version_info");

    // The empty name means global.
    loadConstantsBlob(tstate, &global_constants[0], "");

#if _NUITKA_EXE
    /* Set the "sys.executable" path to the original CPython executable or point to inside the
       distribution for standalone. */
    Nuitka_SysSetObject(
        "executable",
#ifndef _NUITKA_STANDALONE
        global_constants[92]
#else
        getStandaloneSysExecutablePath(global_constants[92])
#endif
    );

#ifndef _NUITKA_STANDALONE
    /* Set the "sys.prefix" path to the original one. */
    Nuitka_SysSetObject(
        "prefix",
        None
    );

    /* Set the "sys.prefix" path to the original one. */
    Nuitka_SysSetObject(
        "exec_prefix",
        None
    );


#if PYTHON_VERSION >= 0x300
    /* Set the "sys.base_prefix" path to the original one. */
    Nuitka_SysSetObject(
        "base_prefix",
        None
    );

    /* Set the "sys.exec_base_prefix" path to the original one. */
    Nuitka_SysSetObject(
        "base_exec_prefix",
        None
    );

#endif
#endif
#endif

    static PyTypeObject Nuitka_VersionInfoType;

    // Same fields as "sys.version_info" except no serial number.
    static PyStructSequence_Field Nuitka_VersionInfoFields[] = {
        {(char *)"major", (char *)"Major release number"},
        {(char *)"minor", (char *)"Minor release number"},
        {(char *)"micro", (char *)"Micro release number"},
        {(char *)"releaselevel", (char *)"'alpha', 'beta', 'candidate', or 'release'"},
        {(char *)"standalone", (char *)"boolean indicating standalone mode usage"},
        {(char *)"onefile", (char *)"boolean indicating standalone mode usage"},
        {(char *)"no_asserts", (char *)"boolean indicating --python-flag=no_asserts usage"},
        {(char *)"no_docstrings", (char *)"boolean indicating --python-flag=no_docstrings usage"},
        {(char *)"no_annotations", (char *)"boolean indicating --python-flag=no_annotations usage"},
        {0}
    };

    static PyStructSequence_Desc Nuitka_VersionInfoDesc = {
        (char *)"__nuitka_version__",                                    /* name */
        (char *)"__compiled__\\n\\nVersion information as a named tuple.", /* doc */
        Nuitka_VersionInfoFields,                                        /* fields */
        9
    };

    PyStructSequence_InitType(&Nuitka_VersionInfoType, &Nuitka_VersionInfoDesc);

    Nuitka_dunder_compiled_value = PyStructSequence_New(&Nuitka_VersionInfoType);
    assert(Nuitka_dunder_compiled_value != NULL);

    PyStructSequence_SET_ITEM(Nuitka_dunder_compiled_value, 0, PyInt_FromLong(1));
    PyStructSequence_SET_ITEM(Nuitka_dunder_compiled_value, 1, PyInt_FromLong(9));
    PyStructSequence_SET_ITEM(Nuitka_dunder_compiled_value, 2, PyInt_FromLong(1));

    PyStructSequence_SET_ITEM(Nuitka_dunder_compiled_value, 3, Nuitka_String_FromString("release"));

#ifdef _NUITKA_STANDALONE
    PyObject *is_standalone_mode = Py_True;
#else
    PyObject *is_standalone_mode = Py_False;
#endif
    PyStructSequence_SET_ITEM(Nuitka_dunder_compiled_value, 4, is_standalone_mode);
#ifdef _NUITKA_ONEFILE_MODE
    PyObject *is_onefile_mode = Py_True;
#else
    PyObject *is_onefile_mode = Py_False;
#endif
    PyStructSequence_SET_ITEM(Nuitka_dunder_compiled_value, 5, is_onefile_mode);

#if _NUITKA_NO_ASSERTS == 1
    PyObject *is_no_asserts = Py_True;
#else
    PyObject *is_no_asserts = Py_False;
#endif
    PyStructSequence_SET_ITEM(Nuitka_dunder_compiled_value, 6, is_no_asserts);

#if _NUITKA_NO_DOCSTRINGS == 1
    PyObject *is_no_docstrings = Py_True;
#else
    PyObject *is_no_docstrings = Py_False;
#endif
    PyStructSequence_SET_ITEM(Nuitka_dunder_compiled_value, 7, is_no_docstrings);


#if _NUITKA_NO_ANNOTATIONS == 1
    PyObject *is_no_annotations = Py_True;
#else
    PyObject *is_no_annotations = Py_False;
#endif
    PyStructSequence_SET_ITEM(Nuitka_dunder_compiled_value, 8, is_no_annotations);

    // Prevent users from creating the Nuitka version type object.
    Nuitka_VersionInfoType.tp_init = NULL;
    Nuitka_VersionInfoType.tp_new = NULL;

    setDistributionsMetadata(global_constants[1]);
}

// In debug mode we can check that the constants were not tampered with in any
// given moment. We typically do it at program exit, but we can add extra calls
// for sanity.
#ifndef __NUITKA_NO_ASSERT__
void checkGlobalConstants(void) {
// TODO: Ask constant code to check values.

}
#endif

void createGlobalConstants(PyThreadState *tstate) {
    if (_sentinel_value == NULL) {
#if PYTHON_VERSION < 0x300
        _sentinel_value = PyCObject_FromVoidPtr(NULL, NULL);
#else
        // The NULL value is not allowed for a capsule, so use something else.
        _sentinel_value = PyCapsule_New((void *)27, "sentinel", NULL);
#endif
        assert(_sentinel_value);

        _createGlobalConstants(tstate);
    }
}
