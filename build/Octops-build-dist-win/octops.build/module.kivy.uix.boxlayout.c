/* Generated code for Python module 'kivy$uix$boxlayout'
 * created by Nuitka version 1.9.1
 *
 * This code is in part copyright 2023 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_kivy$uix$boxlayout" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_kivy$uix$boxlayout;
PyDictObject *moduledict_kivy$uix$boxlayout;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[118];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[118];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("kivy.uix.boxlayout"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 118; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_kivy$uix$boxlayout(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 118; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_9e50192a74ea78de62ed659ca997a47e;
static PyCodeObject *codeobj_01888ecffc00645e59d81d7086d294f6;
static PyCodeObject *codeobj_75ee53c31635c2b9a3feb8243d8c1a5a;
static PyCodeObject *codeobj_27d5bb2831a84feee59685b482050b7b;
static PyCodeObject *codeobj_50ec750e38e4d0336960f4a59dd32888;
static PyCodeObject *codeobj_8e7498020f5d4aa03d09122d263837af;
static PyCodeObject *codeobj_093c9c0811b561f4b52a5a5104bb513a;
static PyCodeObject *codeobj_671f9b4ba8259ed434c8620e038f71a0;
static PyCodeObject *codeobj_d26fefc4c2768dbf44442eec6b00c956;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[108]); CHECK_OBJECT(module_filename_obj);
    codeobj_9e50192a74ea78de62ed659ca997a47e = MAKE_CODE_OBJECT(module_filename_obj, 253, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[60], mod_consts[60], mod_consts[109], NULL, 1, 0, 0);
    codeobj_01888ecffc00645e59d81d7086d294f6 = MAKE_CODE_OBJECT(module_filename_obj, 252, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[60], mod_consts[60], mod_consts[110], NULL, 1, 0, 0);
    codeobj_75ee53c31635c2b9a3feb8243d8c1a5a = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[111], mod_consts[111], NULL, NULL, 0, 0, 0);
    codeobj_27d5bb2831a84feee59685b482050b7b = MAKE_CODE_OBJECT(module_filename_obj, 82, 0, mod_consts[0], mod_consts[0], mod_consts[112], NULL, 0, 0, 0);
    codeobj_50ec750e38e4d0336960f4a59dd32888 = MAKE_CODE_OBJECT(module_filename_obj, 144, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[1], mod_consts[1], mod_consts[113], NULL, 1, 0, 0);
    codeobj_8e7498020f5d4aa03d09122d263837af = MAKE_CODE_OBJECT(module_filename_obj, 156, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[58], mod_consts[58], mod_consts[114], NULL, 2, 0, 0);
    codeobj_093c9c0811b561f4b52a5a5104bb513a = MAKE_CODE_OBJECT(module_filename_obj, 325, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, mod_consts[67], mod_consts[67], mod_consts[115], NULL, 2, 0, 0);
    codeobj_671f9b4ba8259ed434c8620e038f71a0 = MAKE_CODE_OBJECT(module_filename_obj, 303, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS, mod_consts[103], mod_consts[103], mod_consts[116], NULL, 1, 0, 0);
    codeobj_d26fefc4c2768dbf44442eec6b00c956 = MAKE_CODE_OBJECT(module_filename_obj, 329, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, mod_consts[69], mod_consts[69], mod_consts[115], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_kivy$uix$boxlayout$$$function__2__iterate_layout$$$genobj__1__iterate_layout(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_kivy$uix$boxlayout$$$function__2__iterate_layout$$$genobj__1__iterate_layout$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_kivy$uix$boxlayout$$$function__2__iterate_layout$$$genobj__1__iterate_layout$$$genexpr__2_genexpr(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__4_complex_call_helper_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__10_complex_call_helper_pos_star_list_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_kivy$uix$boxlayout$$$function__1___init__();


static PyObject *MAKE_FUNCTION_kivy$uix$boxlayout$$$function__2__iterate_layout();


static PyObject *MAKE_FUNCTION_kivy$uix$boxlayout$$$function__3_do_layout();


static PyObject *MAKE_FUNCTION_kivy$uix$boxlayout$$$function__4_add_widget();


static PyObject *MAKE_FUNCTION_kivy$uix$boxlayout$$$function__5_remove_widget();


// The module function definitions.
static PyObject *impl_kivy$uix$boxlayout$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_kwargs = python_pars[1];
    PyObject *var_update = NULL;
    PyObject *var_fbind = NULL;
    struct Nuitka_FrameObject *frame_50ec750e38e4d0336960f4a59dd32888;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_50ec750e38e4d0336960f4a59dd32888 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_50ec750e38e4d0336960f4a59dd32888)) {
        Py_XDECREF(cache_frame_50ec750e38e4d0336960f4a59dd32888);

#if _DEBUG_REFCOUNTS
        if (cache_frame_50ec750e38e4d0336960f4a59dd32888 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_50ec750e38e4d0336960f4a59dd32888 = MAKE_FUNCTION_FRAME(tstate, codeobj_50ec750e38e4d0336960f4a59dd32888, module_kivy$uix$boxlayout, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_50ec750e38e4d0336960f4a59dd32888->m_type_description == NULL);
    frame_50ec750e38e4d0336960f4a59dd32888 = cache_frame_50ec750e38e4d0336960f4a59dd32888;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_50ec750e38e4d0336960f4a59dd32888);
    assert(Py_REFCNT(frame_50ec750e38e4d0336960f4a59dd32888) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_call_result_1;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_kivy$uix$boxlayout, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER2(tstate, moduledict_kivy$uix$boxlayout, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg2_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_call_result_1 = impl___main__$$$function__4_complex_call_helper_star_dict(tstate, dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[2]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        assert(var_update == NULL);
        var_update = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[3]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        assert(var_fbind == NULL);
        var_fbind = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_fbind);
        tmp_called_value_1 = var_fbind;
        tmp_args_element_value_1 = mod_consts[4];
        CHECK_OBJECT(var_update);
        tmp_args_element_value_2 = var_update;
        frame_50ec750e38e4d0336960f4a59dd32888->m_frame.f_lineno = 148;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(var_fbind);
        tmp_called_value_2 = var_fbind;
        tmp_args_element_value_3 = mod_consts[5];
        CHECK_OBJECT(var_update);
        tmp_args_element_value_4 = var_update;
        frame_50ec750e38e4d0336960f4a59dd32888->m_frame.f_lineno = 149;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(var_fbind);
        tmp_called_value_3 = var_fbind;
        tmp_args_element_value_5 = mod_consts[6];
        CHECK_OBJECT(var_update);
        tmp_args_element_value_6 = var_update;
        frame_50ec750e38e4d0336960f4a59dd32888->m_frame.f_lineno = 150;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
        }

        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        CHECK_OBJECT(var_fbind);
        tmp_called_value_4 = var_fbind;
        tmp_args_element_value_7 = mod_consts[7];
        CHECK_OBJECT(var_update);
        tmp_args_element_value_8 = var_update;
        frame_50ec750e38e4d0336960f4a59dd32888->m_frame.f_lineno = 151;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
        }

        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        CHECK_OBJECT(var_fbind);
        tmp_called_value_5 = var_fbind;
        tmp_args_element_value_9 = mod_consts[8];
        CHECK_OBJECT(var_update);
        tmp_args_element_value_10 = var_update;
        frame_50ec750e38e4d0336960f4a59dd32888->m_frame.f_lineno = 152;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
        }

        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        CHECK_OBJECT(var_fbind);
        tmp_called_value_6 = var_fbind;
        tmp_args_element_value_11 = mod_consts[9];
        CHECK_OBJECT(var_update);
        tmp_args_element_value_12 = var_update;
        frame_50ec750e38e4d0336960f4a59dd32888->m_frame.f_lineno = 153;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
        }

        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        CHECK_OBJECT(var_fbind);
        tmp_called_value_7 = var_fbind;
        tmp_args_element_value_13 = mod_consts[10];
        CHECK_OBJECT(var_update);
        tmp_args_element_value_14 = var_update;
        frame_50ec750e38e4d0336960f4a59dd32888->m_frame.f_lineno = 154;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
        }

        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_50ec750e38e4d0336960f4a59dd32888, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_50ec750e38e4d0336960f4a59dd32888->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_50ec750e38e4d0336960f4a59dd32888, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_50ec750e38e4d0336960f4a59dd32888,
        type_description_1,
        par_self,
        par_kwargs,
        var_update,
        var_fbind,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_50ec750e38e4d0336960f4a59dd32888 == cache_frame_50ec750e38e4d0336960f4a59dd32888) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_50ec750e38e4d0336960f4a59dd32888);
        cache_frame_50ec750e38e4d0336960f4a59dd32888 = NULL;
    }

    assertFrameObject(frame_50ec750e38e4d0336960f4a59dd32888);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_update);
    Py_DECREF(var_update);
    var_update = NULL;
    CHECK_OBJECT(var_fbind);
    Py_DECREF(var_fbind);
    var_fbind = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_update);
    var_update = NULL;
    Py_XDECREF(var_fbind);
    var_fbind = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_kivy$uix$boxlayout$$$function__2__iterate_layout(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_sizes = Nuitka_Cell_New1(python_pars[1]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = par_self;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_sizes;
        Py_INCREF(tmp_closure_1[1]);

        tmp_return_value = MAKE_GENERATOR_kivy$uix$boxlayout$$$function__2__iterate_layout$$$genobj__1__iterate_layout(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_sizes);
    Py_DECREF(par_sizes);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct kivy$uix$boxlayout$$$function__2__iterate_layout$$$genobj__1__iterate_layout_locals {
    PyObject *var_len_children;
    PyObject *var_padding_left;
    PyObject *var_padding_top;
    PyObject *var_padding_right;
    PyObject *var_padding_bottom;
    PyObject *var_spacing;
    PyObject *var_orientation;
    PyObject *var_padding_x;
    PyObject *var_padding_y;
    PyObject *var_stretch_sum;
    PyObject *var_has_bound;
    PyObject *var_hint;
    PyObject *var_minimum_size_bounded;
    PyObject *var_minimum_size_y;
    PyObject *var_minimum_size_none;
    PyObject *var_i;
    PyObject *var_w;
    PyObject *var_h;
    PyObject *var_shw;
    PyObject *var_shh;
    PyObject *var__;
    PyObject *var_shw_min;
    PyObject *var_shh_min;
    PyObject *var_shw_max;
    PyObject *var_minimum_size_x;
    PyObject *var_shh_max;
    PyObject *var_selfx;
    PyObject *var_selfy;
    PyObject *var_stretch_space;
    struct Nuitka_CellObject *var_dim;
    PyObject *var_val;
    PyObject *var_sh;
    PyObject *var_sh_min;
    PyObject *var_x;
    PyObject *var_size_y;
    PyObject *var_pos_hint;
    PyObject *var_cy;
    PyObject *var_key;
    PyObject *var_value;
    PyObject *var_posy;
    PyObject *var_y;
    PyObject *var_size_x;
    PyObject *var_cx;
    PyObject *var_posx;
    PyObject *tmp_for_loop_1__for_iterator;
    PyObject *tmp_for_loop_1__iter_value;
    PyObject *tmp_for_loop_2__for_iterator;
    PyObject *tmp_for_loop_2__iter_value;
    PyObject *tmp_for_loop_3__for_iterator;
    PyObject *tmp_for_loop_3__iter_value;
    PyObject *tmp_for_loop_4__for_iterator;
    PyObject *tmp_for_loop_4__iter_value;
    PyObject *tmp_for_loop_5__for_iterator;
    PyObject *tmp_for_loop_5__iter_value;
    PyObject *tmp_for_loop_6__for_iterator;
    PyObject *tmp_for_loop_6__iter_value;
    PyObject *tmp_for_loop_7__for_iterator;
    PyObject *tmp_for_loop_7__iter_value;
    PyObject *tmp_genexpr_1__$0;
    PyObject *tmp_genexpr_2__$0;
    PyObject *tmp_tuple_unpack_10__element_1;
    PyObject *tmp_tuple_unpack_10__element_2;
    PyObject *tmp_tuple_unpack_10__source_iter;
    PyObject *tmp_tuple_unpack_11__element_1;
    PyObject *tmp_tuple_unpack_11__element_2;
    PyObject *tmp_tuple_unpack_11__source_iter;
    PyObject *tmp_tuple_unpack_12__element_1;
    PyObject *tmp_tuple_unpack_12__element_2;
    PyObject *tmp_tuple_unpack_12__source_iter;
    PyObject *tmp_tuple_unpack_13__element_1;
    PyObject *tmp_tuple_unpack_13__element_2;
    PyObject *tmp_tuple_unpack_13__source_iter;
    PyObject *tmp_tuple_unpack_14__element_1;
    PyObject *tmp_tuple_unpack_14__element_2;
    PyObject *tmp_tuple_unpack_14__source_iter;
    PyObject *tmp_tuple_unpack_15__element_1;
    PyObject *tmp_tuple_unpack_15__element_2;
    PyObject *tmp_tuple_unpack_15__source_iter;
    PyObject *tmp_tuple_unpack_16__element_1;
    PyObject *tmp_tuple_unpack_16__element_2;
    PyObject *tmp_tuple_unpack_16__source_iter;
    PyObject *tmp_tuple_unpack_17__element_1;
    PyObject *tmp_tuple_unpack_17__element_2;
    PyObject *tmp_tuple_unpack_17__element_3;
    PyObject *tmp_tuple_unpack_17__element_4;
    PyObject *tmp_tuple_unpack_17__element_5;
    PyObject *tmp_tuple_unpack_17__source_iter;
    PyObject *tmp_tuple_unpack_18__element_1;
    PyObject *tmp_tuple_unpack_18__element_2;
    PyObject *tmp_tuple_unpack_18__source_iter;
    PyObject *tmp_tuple_unpack_19__element_1;
    PyObject *tmp_tuple_unpack_19__element_2;
    PyObject *tmp_tuple_unpack_19__source_iter;
    PyObject *tmp_tuple_unpack_1__element_1;
    PyObject *tmp_tuple_unpack_1__element_2;
    PyObject *tmp_tuple_unpack_1__element_3;
    PyObject *tmp_tuple_unpack_1__element_4;
    PyObject *tmp_tuple_unpack_1__source_iter;
    PyObject *tmp_tuple_unpack_20__element_1;
    PyObject *tmp_tuple_unpack_20__element_2;
    PyObject *tmp_tuple_unpack_20__source_iter;
    PyObject *tmp_tuple_unpack_21__element_1;
    PyObject *tmp_tuple_unpack_21__element_2;
    PyObject *tmp_tuple_unpack_21__source_iter;
    PyObject *tmp_tuple_unpack_22__element_1;
    PyObject *tmp_tuple_unpack_22__element_2;
    PyObject *tmp_tuple_unpack_22__source_iter;
    PyObject *tmp_tuple_unpack_23__element_1;
    PyObject *tmp_tuple_unpack_23__element_2;
    PyObject *tmp_tuple_unpack_23__element_3;
    PyObject *tmp_tuple_unpack_23__element_4;
    PyObject *tmp_tuple_unpack_23__element_5;
    PyObject *tmp_tuple_unpack_23__source_iter;
    PyObject *tmp_tuple_unpack_24__element_1;
    PyObject *tmp_tuple_unpack_24__element_2;
    PyObject *tmp_tuple_unpack_24__source_iter;
    PyObject *tmp_tuple_unpack_25__element_1;
    PyObject *tmp_tuple_unpack_25__element_2;
    PyObject *tmp_tuple_unpack_25__source_iter;
    PyObject *tmp_tuple_unpack_26__element_1;
    PyObject *tmp_tuple_unpack_26__element_2;
    PyObject *tmp_tuple_unpack_26__source_iter;
    PyObject *tmp_tuple_unpack_2__element_1;
    PyObject *tmp_tuple_unpack_2__element_2;
    PyObject *tmp_tuple_unpack_2__source_iter;
    PyObject *tmp_tuple_unpack_3__element_1;
    PyObject *tmp_tuple_unpack_3__element_2;
    PyObject *tmp_tuple_unpack_3__element_3;
    PyObject *tmp_tuple_unpack_3__element_4;
    PyObject *tmp_tuple_unpack_3__element_5;
    PyObject *tmp_tuple_unpack_3__source_iter;
    PyObject *tmp_tuple_unpack_4__element_1;
    PyObject *tmp_tuple_unpack_4__element_2;
    PyObject *tmp_tuple_unpack_4__source_iter;
    PyObject *tmp_tuple_unpack_5__element_1;
    PyObject *tmp_tuple_unpack_5__element_2;
    PyObject *tmp_tuple_unpack_5__source_iter;
    PyObject *tmp_tuple_unpack_6__element_1;
    PyObject *tmp_tuple_unpack_6__element_2;
    PyObject *tmp_tuple_unpack_6__source_iter;
    PyObject *tmp_tuple_unpack_7__element_1;
    PyObject *tmp_tuple_unpack_7__element_2;
    PyObject *tmp_tuple_unpack_7__source_iter;
    PyObject *tmp_tuple_unpack_8__element_1;
    PyObject *tmp_tuple_unpack_8__element_2;
    PyObject *tmp_tuple_unpack_8__source_iter;
    PyObject *tmp_tuple_unpack_9__element_1;
    PyObject *tmp_tuple_unpack_9__element_2;
    PyObject *tmp_tuple_unpack_9__element_3;
    PyObject *tmp_tuple_unpack_9__element_4;
    PyObject *tmp_tuple_unpack_9__element_5;
    PyObject *tmp_tuple_unpack_9__source_iter;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    int exception_keeper_lineno_14;
    bool tmp_result;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    int exception_keeper_lineno_28;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    int exception_keeper_lineno_29;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    int exception_keeper_lineno_30;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    int exception_keeper_lineno_31;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    int exception_keeper_lineno_32;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    int exception_keeper_lineno_33;
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    int exception_keeper_lineno_34;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    int exception_keeper_lineno_35;
    PyObject *exception_keeper_type_36;
    PyObject *exception_keeper_value_36;
    PyTracebackObject *exception_keeper_tb_36;
    int exception_keeper_lineno_36;
    PyObject *exception_keeper_type_37;
    PyObject *exception_keeper_value_37;
    PyTracebackObject *exception_keeper_tb_37;
    int exception_keeper_lineno_37;
    PyObject *exception_keeper_type_38;
    PyObject *exception_keeper_value_38;
    PyTracebackObject *exception_keeper_tb_38;
    int exception_keeper_lineno_38;
    PyObject *exception_keeper_type_39;
    PyObject *exception_keeper_value_39;
    PyTracebackObject *exception_keeper_tb_39;
    int exception_keeper_lineno_39;
    PyObject *exception_keeper_type_40;
    PyObject *exception_keeper_value_40;
    PyTracebackObject *exception_keeper_tb_40;
    int exception_keeper_lineno_40;
    PyObject *exception_keeper_type_41;
    PyObject *exception_keeper_value_41;
    PyTracebackObject *exception_keeper_tb_41;
    int exception_keeper_lineno_41;
    PyObject *exception_keeper_type_42;
    PyObject *exception_keeper_value_42;
    PyTracebackObject *exception_keeper_tb_42;
    int exception_keeper_lineno_42;
    PyObject *exception_keeper_type_43;
    PyObject *exception_keeper_value_43;
    PyTracebackObject *exception_keeper_tb_43;
    int exception_keeper_lineno_43;
    PyObject *exception_keeper_type_44;
    PyObject *exception_keeper_value_44;
    PyTracebackObject *exception_keeper_tb_44;
    int exception_keeper_lineno_44;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_45;
    PyObject *exception_keeper_value_45;
    PyTracebackObject *exception_keeper_tb_45;
    int exception_keeper_lineno_45;
    PyObject *exception_keeper_type_46;
    PyObject *exception_keeper_value_46;
    PyTracebackObject *exception_keeper_tb_46;
    int exception_keeper_lineno_46;
    PyObject *exception_keeper_type_47;
    PyObject *exception_keeper_value_47;
    PyTracebackObject *exception_keeper_tb_47;
    int exception_keeper_lineno_47;
    PyObject *exception_keeper_type_48;
    PyObject *exception_keeper_value_48;
    PyTracebackObject *exception_keeper_tb_48;
    int exception_keeper_lineno_48;
    PyObject *exception_keeper_type_49;
    PyObject *exception_keeper_value_49;
    PyTracebackObject *exception_keeper_tb_49;
    int exception_keeper_lineno_49;
    PyObject *exception_keeper_type_50;
    PyObject *exception_keeper_value_50;
    PyTracebackObject *exception_keeper_tb_50;
    int exception_keeper_lineno_50;
    PyObject *exception_keeper_type_51;
    PyObject *exception_keeper_value_51;
    PyTracebackObject *exception_keeper_tb_51;
    int exception_keeper_lineno_51;
    PyObject *exception_keeper_type_52;
    PyObject *exception_keeper_value_52;
    PyTracebackObject *exception_keeper_tb_52;
    int exception_keeper_lineno_52;
    PyObject *exception_keeper_type_53;
    PyObject *exception_keeper_value_53;
    PyTracebackObject *exception_keeper_tb_53;
    int exception_keeper_lineno_53;
    PyObject *exception_keeper_type_54;
    PyObject *exception_keeper_value_54;
    PyTracebackObject *exception_keeper_tb_54;
    int exception_keeper_lineno_54;
    PyObject *exception_keeper_type_55;
    PyObject *exception_keeper_value_55;
    PyTracebackObject *exception_keeper_tb_55;
    int exception_keeper_lineno_55;
    PyObject *exception_keeper_type_56;
    PyObject *exception_keeper_value_56;
    PyTracebackObject *exception_keeper_tb_56;
    int exception_keeper_lineno_56;
    PyObject *exception_keeper_type_57;
    PyObject *exception_keeper_value_57;
    PyTracebackObject *exception_keeper_tb_57;
    int exception_keeper_lineno_57;
    PyObject *exception_keeper_type_58;
    PyObject *exception_keeper_value_58;
    PyTracebackObject *exception_keeper_tb_58;
    int exception_keeper_lineno_58;
    PyObject *exception_keeper_type_59;
    PyObject *exception_keeper_value_59;
    PyTracebackObject *exception_keeper_tb_59;
    int exception_keeper_lineno_59;
    PyObject *exception_keeper_type_60;
    PyObject *exception_keeper_value_60;
    PyTracebackObject *exception_keeper_tb_60;
    int exception_keeper_lineno_60;
};
#endif

static PyObject *kivy$uix$boxlayout$$$function__2__iterate_layout$$$genobj__1__iterate_layout_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct kivy$uix$boxlayout$$$function__2__iterate_layout$$$genobj__1__iterate_layout_locals *generator_heap = (struct kivy$uix$boxlayout$$$function__2__iterate_layout$$$genobj__1__iterate_layout_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 2: goto yield_return_2;
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_len_children = NULL;
    generator_heap->var_padding_left = NULL;
    generator_heap->var_padding_top = NULL;
    generator_heap->var_padding_right = NULL;
    generator_heap->var_padding_bottom = NULL;
    generator_heap->var_spacing = NULL;
    generator_heap->var_orientation = NULL;
    generator_heap->var_padding_x = NULL;
    generator_heap->var_padding_y = NULL;
    generator_heap->var_stretch_sum = NULL;
    generator_heap->var_has_bound = NULL;
    generator_heap->var_hint = NULL;
    generator_heap->var_minimum_size_bounded = NULL;
    generator_heap->var_minimum_size_y = NULL;
    generator_heap->var_minimum_size_none = NULL;
    generator_heap->var_i = NULL;
    generator_heap->var_w = NULL;
    generator_heap->var_h = NULL;
    generator_heap->var_shw = NULL;
    generator_heap->var_shh = NULL;
    generator_heap->var__ = NULL;
    generator_heap->var_shw_min = NULL;
    generator_heap->var_shh_min = NULL;
    generator_heap->var_shw_max = NULL;
    generator_heap->var_minimum_size_x = NULL;
    generator_heap->var_shh_max = NULL;
    generator_heap->var_selfx = NULL;
    generator_heap->var_selfy = NULL;
    generator_heap->var_stretch_space = NULL;
    generator_heap->var_dim = Nuitka_Cell_Empty();
    generator_heap->var_val = NULL;
    generator_heap->var_sh = NULL;
    generator_heap->var_sh_min = NULL;
    generator_heap->var_x = NULL;
    generator_heap->var_size_y = NULL;
    generator_heap->var_pos_hint = NULL;
    generator_heap->var_cy = NULL;
    generator_heap->var_key = NULL;
    generator_heap->var_value = NULL;
    generator_heap->var_posy = NULL;
    generator_heap->var_y = NULL;
    generator_heap->var_size_x = NULL;
    generator_heap->var_cx = NULL;
    generator_heap->var_posx = NULL;
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    generator_heap->tmp_for_loop_2__for_iterator = NULL;
    generator_heap->tmp_for_loop_2__iter_value = NULL;
    generator_heap->tmp_for_loop_3__for_iterator = NULL;
    generator_heap->tmp_for_loop_3__iter_value = NULL;
    generator_heap->tmp_for_loop_4__for_iterator = NULL;
    generator_heap->tmp_for_loop_4__iter_value = NULL;
    generator_heap->tmp_for_loop_5__for_iterator = NULL;
    generator_heap->tmp_for_loop_5__iter_value = NULL;
    generator_heap->tmp_for_loop_6__for_iterator = NULL;
    generator_heap->tmp_for_loop_6__iter_value = NULL;
    generator_heap->tmp_for_loop_7__for_iterator = NULL;
    generator_heap->tmp_for_loop_7__iter_value = NULL;
    generator_heap->tmp_genexpr_1__$0 = NULL;
    generator_heap->tmp_genexpr_2__$0 = NULL;
    generator_heap->tmp_tuple_unpack_10__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_10__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_10__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_11__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_11__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_11__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_12__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_12__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_12__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_13__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_13__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_13__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_14__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_14__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_14__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_15__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_15__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_15__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_16__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_16__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_16__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_17__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_17__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_17__element_3 = NULL;
    generator_heap->tmp_tuple_unpack_17__element_4 = NULL;
    generator_heap->tmp_tuple_unpack_17__element_5 = NULL;
    generator_heap->tmp_tuple_unpack_17__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_18__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_18__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_18__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_19__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_19__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_19__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_3 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_4 = NULL;
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_20__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_20__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_20__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_21__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_21__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_21__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_22__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_22__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_22__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_23__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_23__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_23__element_3 = NULL;
    generator_heap->tmp_tuple_unpack_23__element_4 = NULL;
    generator_heap->tmp_tuple_unpack_23__element_5 = NULL;
    generator_heap->tmp_tuple_unpack_23__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_24__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_24__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_24__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_25__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_25__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_25__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_26__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_26__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_26__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_2__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_2__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_2__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_3__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_3__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_3__element_3 = NULL;
    generator_heap->tmp_tuple_unpack_3__element_4 = NULL;
    generator_heap->tmp_tuple_unpack_3__element_5 = NULL;
    generator_heap->tmp_tuple_unpack_3__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_4__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_4__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_4__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_5__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_5__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_5__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_6__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_6__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_6__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_7__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_7__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_7__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_8__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_8__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_8__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_9__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_9__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_9__element_3 = NULL;
    generator_heap->tmp_tuple_unpack_9__element_4 = NULL;
    generator_heap->tmp_tuple_unpack_9__element_5 = NULL;
    generator_heap->tmp_tuple_unpack_9__source_iter = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_8e7498020f5d4aa03d09122d263837af, module_kivy$uix$boxlayout, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(tstate, generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(tstate, generator);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_len_arg_1;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[11]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 158;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_assign_source_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 158;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_len_children == NULL);
        generator_heap->var_len_children = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[12]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 159;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[5]);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 159;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 159;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_2;
        }
        assert(generator_heap->tmp_tuple_unpack_1__source_iter == NULL);
        generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 4);
        if (tmp_assign_source_3 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 159;
            goto try_except_handler_3;
        }
        assert(generator_heap->tmp_tuple_unpack_1__element_1 == NULL);
        generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 4);
        if (tmp_assign_source_4 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 159;
            goto try_except_handler_3;
        }
        assert(generator_heap->tmp_tuple_unpack_1__element_2 == NULL);
        generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tstate, tmp_unpack_3, 2, 4);
        if (tmp_assign_source_5 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 159;
            goto try_except_handler_3;
        }
        assert(generator_heap->tmp_tuple_unpack_1__element_3 == NULL);
        generator_heap->tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tstate, tmp_unpack_4, 3, 4);
        if (tmp_assign_source_6 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 159;
            goto try_except_handler_3;
        }
        assert(generator_heap->tmp_tuple_unpack_1__element_4 == NULL);
        generator_heap->tmp_tuple_unpack_1__element_4 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
                    generator_heap->exception_lineno = 159;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[13];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 159;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_3);
    generator_heap->tmp_tuple_unpack_1__element_3 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_4);
    generator_heap->tmp_tuple_unpack_1__element_4 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
        tmp_assign_source_7 = generator_heap->tmp_tuple_unpack_1__element_1;
        assert(generator_heap->var_padding_left == NULL);
        Py_INCREF(tmp_assign_source_7);
        generator_heap->var_padding_left = tmp_assign_source_7;
    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
        tmp_assign_source_8 = generator_heap->tmp_tuple_unpack_1__element_2;
        assert(generator_heap->var_padding_top == NULL);
        Py_INCREF(tmp_assign_source_8);
        generator_heap->var_padding_top = tmp_assign_source_8;
    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_3);
        tmp_assign_source_9 = generator_heap->tmp_tuple_unpack_1__element_3;
        assert(generator_heap->var_padding_right == NULL);
        Py_INCREF(tmp_assign_source_9);
        generator_heap->var_padding_right = tmp_assign_source_9;
    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_3);
    generator_heap->tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_4);
        tmp_assign_source_10 = generator_heap->tmp_tuple_unpack_1__element_4;
        assert(generator_heap->var_padding_bottom == NULL);
        Py_INCREF(tmp_assign_source_10);
        generator_heap->var_padding_bottom = tmp_assign_source_10;
    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_4);
    generator_heap->tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_expression_value_2;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[12]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 160;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[4]);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 160;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_spacing == NULL);
        generator_heap->var_spacing = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_expression_value_3;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[12]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 161;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[7]);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 161;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_orientation == NULL);
        generator_heap->var_orientation = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        CHECK_OBJECT(generator_heap->var_padding_left);
        tmp_add_expr_left_1 = generator_heap->var_padding_left;
        CHECK_OBJECT(generator_heap->var_padding_right);
        tmp_add_expr_right_1 = generator_heap->var_padding_right;
        tmp_assign_source_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 162;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_padding_x == NULL);
        generator_heap->var_padding_x = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        CHECK_OBJECT(generator_heap->var_padding_top);
        tmp_add_expr_left_2 = generator_heap->var_padding_top;
        CHECK_OBJECT(generator_heap->var_padding_bottom);
        tmp_add_expr_right_2 = generator_heap->var_padding_bottom;
        tmp_assign_source_14 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 163;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_padding_y == NULL);
        generator_heap->var_padding_y = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[14];
        assert(generator_heap->var_stretch_sum == NULL);
        Py_INCREF(tmp_assign_source_15);
        generator_heap->var_stretch_sum = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = Py_False;
        assert(generator_heap->var_has_bound == NULL);
        Py_INCREF(tmp_assign_source_16);
        generator_heap->var_has_bound = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        tmp_mult_expr_left_1 = MAKE_LIST1(Py_None);
        CHECK_OBJECT(generator_heap->var_len_children);
        tmp_mult_expr_right_1 = generator_heap->var_len_children;
        tmp_assign_source_17 = BINARY_OPERATION_MULT_OBJECT_LIST_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        assert(!(tmp_assign_source_17 == NULL));
        assert(generator_heap->var_hint == NULL);
        generator_heap->var_hint = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[15];
        assert(generator_heap->var_minimum_size_bounded == NULL);
        Py_INCREF(tmp_assign_source_18);
        generator_heap->var_minimum_size_bounded = tmp_assign_source_18;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(generator_heap->var_orientation);
        tmp_cmp_expr_left_1 = generator_heap->var_orientation;
        tmp_cmp_expr_right_1 = mod_consts[16];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 171;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[15];
        assert(generator_heap->var_minimum_size_y == NULL);
        Py_INCREF(tmp_assign_source_19);
        generator_heap->var_minimum_size_y = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_sub_expr_left_1;
        nuitka_digit tmp_sub_expr_right_1;
        CHECK_OBJECT(generator_heap->var_padding_x);
        tmp_add_expr_left_3 = generator_heap->var_padding_x;
        CHECK_OBJECT(generator_heap->var_spacing);
        tmp_mult_expr_left_2 = generator_heap->var_spacing;
        CHECK_OBJECT(generator_heap->var_len_children);
        tmp_sub_expr_left_1 = generator_heap->var_len_children;
        tmp_sub_expr_right_1 = 1;
        tmp_mult_expr_right_2 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        assert(!(tmp_mult_expr_right_2 == NULL));
        tmp_add_expr_right_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_right_2);
        if (tmp_add_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 173;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_20 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_right_3);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 173;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_minimum_size_none == NULL);
        generator_heap->var_minimum_size_none = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = (PyObject *)&PyEnum_Type;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[11]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 176;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        generator->m_frame->m_frame.f_lineno = 176;
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_iter_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 176;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_21 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 176;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
        generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_21;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
        tmp_assign_source_22 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_22 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
                generator_heap->exception_lineno = 175;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
            generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_22;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
        tmp_iter_arg_3 = generator_heap->tmp_for_loop_1__iter_value;
        tmp_assign_source_23 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 175;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_2__source_iter;
            generator_heap->tmp_tuple_unpack_2__source_iter = tmp_assign_source_23;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
        tmp_unpack_5 = generator_heap->tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_24 = UNPACK_NEXT(tstate, tmp_unpack_5, 0, 2);
        if (tmp_assign_source_24 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 175;
            goto try_except_handler_6;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_2__element_1;
            generator_heap->tmp_tuple_unpack_2__element_1 = tmp_assign_source_24;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
        tmp_unpack_6 = generator_heap->tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_25 = UNPACK_NEXT(tstate, tmp_unpack_6, 1, 2);
        if (tmp_assign_source_25 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 175;
            goto try_except_handler_6;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_2__element_2;
            generator_heap->tmp_tuple_unpack_2__element_2 = tmp_assign_source_25;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = generator_heap->tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
                    generator_heap->exception_lineno = 175;
                    goto try_except_handler_6;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[17];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 175;
            goto try_except_handler_6;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_2__source_iter);
    generator_heap->tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto try_except_handler_5;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_2__source_iter);
    generator_heap->tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__element_1);
        tmp_assign_source_26 = generator_heap->tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = generator_heap->var_i;
            generator_heap->var_i = tmp_assign_source_26;
            Py_INCREF(generator_heap->var_i);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_1);
    generator_heap->tmp_tuple_unpack_2__element_1 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_iter_arg_4;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__element_2);
        tmp_iter_arg_4 = generator_heap->tmp_tuple_unpack_2__element_2;
        tmp_assign_source_27 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 175;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_3__source_iter;
            generator_heap->tmp_tuple_unpack_3__source_iter = tmp_assign_source_27;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__source_iter);
        tmp_unpack_7 = generator_heap->tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_28 = UNPACK_NEXT(tstate, tmp_unpack_7, 0, 5);
        if (tmp_assign_source_28 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 175;
            goto try_except_handler_8;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_3__element_1;
            generator_heap->tmp_tuple_unpack_3__element_1 = tmp_assign_source_28;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__source_iter);
        tmp_unpack_8 = generator_heap->tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_29 = UNPACK_NEXT(tstate, tmp_unpack_8, 1, 5);
        if (tmp_assign_source_29 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 175;
            goto try_except_handler_8;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_3__element_2;
            generator_heap->tmp_tuple_unpack_3__element_2 = tmp_assign_source_29;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__source_iter);
        tmp_unpack_9 = generator_heap->tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_30 = UNPACK_NEXT(tstate, tmp_unpack_9, 2, 5);
        if (tmp_assign_source_30 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 175;
            goto try_except_handler_8;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_3__element_3;
            generator_heap->tmp_tuple_unpack_3__element_3 = tmp_assign_source_30;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__source_iter);
        tmp_unpack_10 = generator_heap->tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_31 = UNPACK_NEXT(tstate, tmp_unpack_10, 3, 5);
        if (tmp_assign_source_31 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 175;
            goto try_except_handler_8;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_3__element_4;
            generator_heap->tmp_tuple_unpack_3__element_4 = tmp_assign_source_31;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_unpack_11;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__source_iter);
        tmp_unpack_11 = generator_heap->tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_32 = UNPACK_NEXT(tstate, tmp_unpack_11, 4, 5);
        if (tmp_assign_source_32 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 175;
            goto try_except_handler_8;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_3__element_5;
            generator_heap->tmp_tuple_unpack_3__element_5 = tmp_assign_source_32;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_3;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__source_iter);
        tmp_iterator_name_3 = generator_heap->tmp_tuple_unpack_3__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_3); assert(HAS_ITERNEXT(tmp_iterator_name_3));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_3)->tp_iternext)(tmp_iterator_name_3);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
                    generator_heap->exception_lineno = 175;
                    goto try_except_handler_8;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[18];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 175;
            goto try_except_handler_8;
        }
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_8:;
    generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_3__source_iter);
    generator_heap->tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_4;
    generator_heap->exception_value = generator_heap->exception_keeper_value_4;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

    goto try_except_handler_7;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_3__source_iter);
    generator_heap->tmp_tuple_unpack_3__source_iter = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_iter_arg_5;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__element_1);
        tmp_iter_arg_5 = generator_heap->tmp_tuple_unpack_3__element_1;
        tmp_assign_source_33 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 175;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_4__source_iter;
            generator_heap->tmp_tuple_unpack_4__source_iter = tmp_assign_source_33;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_unpack_12;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_4__source_iter);
        tmp_unpack_12 = generator_heap->tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_34 = UNPACK_NEXT(tstate, tmp_unpack_12, 0, 2);
        if (tmp_assign_source_34 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 175;
            goto try_except_handler_10;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_4__element_1;
            generator_heap->tmp_tuple_unpack_4__element_1 = tmp_assign_source_34;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_unpack_13;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_4__source_iter);
        tmp_unpack_13 = generator_heap->tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_35 = UNPACK_NEXT(tstate, tmp_unpack_13, 1, 2);
        if (tmp_assign_source_35 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 175;
            goto try_except_handler_10;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_4__element_2;
            generator_heap->tmp_tuple_unpack_4__element_2 = tmp_assign_source_35;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_4;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_4__source_iter);
        tmp_iterator_name_4 = generator_heap->tmp_tuple_unpack_4__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_4); assert(HAS_ITERNEXT(tmp_iterator_name_4));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_4)->tp_iternext)(tmp_iterator_name_4);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
                    generator_heap->exception_lineno = 175;
                    goto try_except_handler_10;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[17];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 175;
            goto try_except_handler_10;
        }
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_10:;
    generator_heap->exception_keeper_type_5 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_5 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_5 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_4__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_4__source_iter);
    generator_heap->tmp_tuple_unpack_4__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_5;
    generator_heap->exception_value = generator_heap->exception_keeper_value_5;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_5;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

    goto try_except_handler_9;
    // End of try:
    try_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_9:;
    generator_heap->exception_keeper_type_6 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_6 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_6 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_6 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_4__element_1);
    generator_heap->tmp_tuple_unpack_4__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_4__element_2);
    generator_heap->tmp_tuple_unpack_4__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_6;
    generator_heap->exception_value = generator_heap->exception_keeper_value_6;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_6;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_6;

    goto try_except_handler_7;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_4__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_4__source_iter);
    generator_heap->tmp_tuple_unpack_4__source_iter = NULL;
    {
        PyObject *tmp_assign_source_36;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_4__element_1);
        tmp_assign_source_36 = generator_heap->tmp_tuple_unpack_4__element_1;
        {
            PyObject *old = generator_heap->var_w;
            generator_heap->var_w = tmp_assign_source_36;
            Py_INCREF(generator_heap->var_w);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_4__element_1);
    generator_heap->tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_37;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_4__element_2);
        tmp_assign_source_37 = generator_heap->tmp_tuple_unpack_4__element_2;
        {
            PyObject *old = generator_heap->var_h;
            generator_heap->var_h = tmp_assign_source_37;
            Py_INCREF(generator_heap->var_h);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_4__element_2);
    generator_heap->tmp_tuple_unpack_4__element_2 = NULL;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_3__element_1);
    generator_heap->tmp_tuple_unpack_3__element_1 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_iter_arg_6;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__element_2);
        tmp_iter_arg_6 = generator_heap->tmp_tuple_unpack_3__element_2;
        tmp_assign_source_38 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_6);
        if (tmp_assign_source_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 175;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_11;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_5__source_iter;
            generator_heap->tmp_tuple_unpack_5__source_iter = tmp_assign_source_38;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_unpack_14;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_5__source_iter);
        tmp_unpack_14 = generator_heap->tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_39 = UNPACK_NEXT(tstate, tmp_unpack_14, 0, 2);
        if (tmp_assign_source_39 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 175;
            goto try_except_handler_12;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_5__element_1;
            generator_heap->tmp_tuple_unpack_5__element_1 = tmp_assign_source_39;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_unpack_15;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_5__source_iter);
        tmp_unpack_15 = generator_heap->tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_40 = UNPACK_NEXT(tstate, tmp_unpack_15, 1, 2);
        if (tmp_assign_source_40 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 175;
            goto try_except_handler_12;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_5__element_2;
            generator_heap->tmp_tuple_unpack_5__element_2 = tmp_assign_source_40;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_5;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_5__source_iter);
        tmp_iterator_name_5 = generator_heap->tmp_tuple_unpack_5__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_5); assert(HAS_ITERNEXT(tmp_iterator_name_5));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_5)->tp_iternext)(tmp_iterator_name_5);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
                    generator_heap->exception_lineno = 175;
                    goto try_except_handler_12;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[17];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 175;
            goto try_except_handler_12;
        }
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_12:;
    generator_heap->exception_keeper_type_7 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_7 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_7 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_7 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_5__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_5__source_iter);
    generator_heap->tmp_tuple_unpack_5__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_7;
    generator_heap->exception_value = generator_heap->exception_keeper_value_7;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_7;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_7;

    goto try_except_handler_11;
    // End of try:
    try_end_7:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_11:;
    generator_heap->exception_keeper_type_8 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_8 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_8 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_8 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_5__element_1);
    generator_heap->tmp_tuple_unpack_5__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_5__element_2);
    generator_heap->tmp_tuple_unpack_5__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_8;
    generator_heap->exception_value = generator_heap->exception_keeper_value_8;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_8;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_8;

    goto try_except_handler_7;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_5__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_5__source_iter);
    generator_heap->tmp_tuple_unpack_5__source_iter = NULL;
    {
        PyObject *tmp_assign_source_41;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_5__element_1);
        tmp_assign_source_41 = generator_heap->tmp_tuple_unpack_5__element_1;
        {
            PyObject *old = generator_heap->var_shw;
            generator_heap->var_shw = tmp_assign_source_41;
            Py_INCREF(generator_heap->var_shw);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_5__element_1);
    generator_heap->tmp_tuple_unpack_5__element_1 = NULL;

    {
        PyObject *tmp_assign_source_42;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_5__element_2);
        tmp_assign_source_42 = generator_heap->tmp_tuple_unpack_5__element_2;
        {
            PyObject *old = generator_heap->var_shh;
            generator_heap->var_shh = tmp_assign_source_42;
            Py_INCREF(generator_heap->var_shh);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_5__element_2);
    generator_heap->tmp_tuple_unpack_5__element_2 = NULL;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_3__element_2);
    generator_heap->tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_43;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__element_3);
        tmp_assign_source_43 = generator_heap->tmp_tuple_unpack_3__element_3;
        {
            PyObject *old = generator_heap->var__;
            generator_heap->var__ = tmp_assign_source_43;
            Py_INCREF(generator_heap->var__);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_3__element_3);
    generator_heap->tmp_tuple_unpack_3__element_3 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_iter_arg_7;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__element_4);
        tmp_iter_arg_7 = generator_heap->tmp_tuple_unpack_3__element_4;
        tmp_assign_source_44 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_7);
        if (tmp_assign_source_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 175;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_13;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_6__source_iter;
            generator_heap->tmp_tuple_unpack_6__source_iter = tmp_assign_source_44;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_unpack_16;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_6__source_iter);
        tmp_unpack_16 = generator_heap->tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_45 = UNPACK_NEXT(tstate, tmp_unpack_16, 0, 2);
        if (tmp_assign_source_45 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 175;
            goto try_except_handler_14;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_6__element_1;
            generator_heap->tmp_tuple_unpack_6__element_1 = tmp_assign_source_45;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_unpack_17;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_6__source_iter);
        tmp_unpack_17 = generator_heap->tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_46 = UNPACK_NEXT(tstate, tmp_unpack_17, 1, 2);
        if (tmp_assign_source_46 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 175;
            goto try_except_handler_14;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_6__element_2;
            generator_heap->tmp_tuple_unpack_6__element_2 = tmp_assign_source_46;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_6;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_6__source_iter);
        tmp_iterator_name_6 = generator_heap->tmp_tuple_unpack_6__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_6); assert(HAS_ITERNEXT(tmp_iterator_name_6));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_6)->tp_iternext)(tmp_iterator_name_6);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
                    generator_heap->exception_lineno = 175;
                    goto try_except_handler_14;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[17];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 175;
            goto try_except_handler_14;
        }
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_14:;
    generator_heap->exception_keeper_type_9 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_9 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_9 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_9 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_6__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_6__source_iter);
    generator_heap->tmp_tuple_unpack_6__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_9;
    generator_heap->exception_value = generator_heap->exception_keeper_value_9;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_9;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_9;

    goto try_except_handler_13;
    // End of try:
    try_end_9:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_13:;
    generator_heap->exception_keeper_type_10 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_10 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_10 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_10 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_6__element_1);
    generator_heap->tmp_tuple_unpack_6__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_6__element_2);
    generator_heap->tmp_tuple_unpack_6__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_10;
    generator_heap->exception_value = generator_heap->exception_keeper_value_10;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_10;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_10;

    goto try_except_handler_7;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_6__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_6__source_iter);
    generator_heap->tmp_tuple_unpack_6__source_iter = NULL;
    {
        PyObject *tmp_assign_source_47;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_6__element_1);
        tmp_assign_source_47 = generator_heap->tmp_tuple_unpack_6__element_1;
        {
            PyObject *old = generator_heap->var_shw_min;
            generator_heap->var_shw_min = tmp_assign_source_47;
            Py_INCREF(generator_heap->var_shw_min);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_6__element_1);
    generator_heap->tmp_tuple_unpack_6__element_1 = NULL;

    {
        PyObject *tmp_assign_source_48;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_6__element_2);
        tmp_assign_source_48 = generator_heap->tmp_tuple_unpack_6__element_2;
        {
            PyObject *old = generator_heap->var_shh_min;
            generator_heap->var_shh_min = tmp_assign_source_48;
            Py_INCREF(generator_heap->var_shh_min);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_6__element_2);
    generator_heap->tmp_tuple_unpack_6__element_2 = NULL;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_3__element_4);
    generator_heap->tmp_tuple_unpack_3__element_4 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_iter_arg_8;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__element_5);
        tmp_iter_arg_8 = generator_heap->tmp_tuple_unpack_3__element_5;
        tmp_assign_source_49 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_8);
        if (tmp_assign_source_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 175;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_15;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_7__source_iter;
            generator_heap->tmp_tuple_unpack_7__source_iter = tmp_assign_source_49;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_unpack_18;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_7__source_iter);
        tmp_unpack_18 = generator_heap->tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_50 = UNPACK_NEXT(tstate, tmp_unpack_18, 0, 2);
        if (tmp_assign_source_50 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 175;
            goto try_except_handler_16;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_7__element_1;
            generator_heap->tmp_tuple_unpack_7__element_1 = tmp_assign_source_50;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_unpack_19;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_7__source_iter);
        tmp_unpack_19 = generator_heap->tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_51 = UNPACK_NEXT(tstate, tmp_unpack_19, 1, 2);
        if (tmp_assign_source_51 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 175;
            goto try_except_handler_16;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_7__element_2;
            generator_heap->tmp_tuple_unpack_7__element_2 = tmp_assign_source_51;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_7;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_7__source_iter);
        tmp_iterator_name_7 = generator_heap->tmp_tuple_unpack_7__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_7); assert(HAS_ITERNEXT(tmp_iterator_name_7));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_7)->tp_iternext)(tmp_iterator_name_7);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
                    generator_heap->exception_lineno = 175;
                    goto try_except_handler_16;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[17];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 175;
            goto try_except_handler_16;
        }
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_16:;
    generator_heap->exception_keeper_type_11 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_11 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_11 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_11 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_7__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_7__source_iter);
    generator_heap->tmp_tuple_unpack_7__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_11;
    generator_heap->exception_value = generator_heap->exception_keeper_value_11;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_11;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_11;

    goto try_except_handler_15;
    // End of try:
    try_end_11:;
    goto try_end_12;
    // Exception handler code:
    try_except_handler_15:;
    generator_heap->exception_keeper_type_12 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_12 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_12 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_12 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_7__element_1);
    generator_heap->tmp_tuple_unpack_7__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_7__element_2);
    generator_heap->tmp_tuple_unpack_7__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_12;
    generator_heap->exception_value = generator_heap->exception_keeper_value_12;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_12;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_12;

    goto try_except_handler_7;
    // End of try:
    try_end_12:;
    goto try_end_13;
    // Exception handler code:
    try_except_handler_7:;
    generator_heap->exception_keeper_type_13 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_13 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_13 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_13 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_3__element_1);
    generator_heap->tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_3__element_2);
    generator_heap->tmp_tuple_unpack_3__element_2 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_3__element_3);
    generator_heap->tmp_tuple_unpack_3__element_3 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_3__element_4);
    generator_heap->tmp_tuple_unpack_3__element_4 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_3__element_5);
    generator_heap->tmp_tuple_unpack_3__element_5 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_13;
    generator_heap->exception_value = generator_heap->exception_keeper_value_13;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_13;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_13;

    goto try_except_handler_5;
    // End of try:
    try_end_13:;
    goto try_end_14;
    // Exception handler code:
    try_except_handler_5:;
    generator_heap->exception_keeper_type_14 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_14 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_14 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_14 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_1);
    generator_heap->tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_2);
    generator_heap->tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_14;
    generator_heap->exception_value = generator_heap->exception_keeper_value_14;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_14;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_14;

    goto try_except_handler_4;
    // End of try:
    try_end_14:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_7__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_7__source_iter);
    generator_heap->tmp_tuple_unpack_7__source_iter = NULL;
    {
        PyObject *tmp_assign_source_52;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_7__element_1);
        tmp_assign_source_52 = generator_heap->tmp_tuple_unpack_7__element_1;
        {
            PyObject *old = generator_heap->var_shw_max;
            generator_heap->var_shw_max = tmp_assign_source_52;
            Py_INCREF(generator_heap->var_shw_max);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_7__element_1);
    generator_heap->tmp_tuple_unpack_7__element_1 = NULL;

    {
        PyObject *tmp_assign_source_53;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_7__element_2);
        tmp_assign_source_53 = generator_heap->tmp_tuple_unpack_7__element_2;
        {
            PyObject *old = generator_heap->var__;
            assert(old != NULL);
            generator_heap->var__ = tmp_assign_source_53;
            Py_INCREF(generator_heap->var__);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_7__element_2);
    generator_heap->tmp_tuple_unpack_7__element_2 = NULL;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_3__element_5);
    generator_heap->tmp_tuple_unpack_3__element_5 = NULL;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_2);
    generator_heap->tmp_tuple_unpack_2__element_2 = NULL;

    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(generator_heap->var_shw);
        tmp_cmp_expr_left_2 = generator_heap->var_shw;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        if (generator_heap->var_minimum_size_none == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[19]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 178;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_iadd_expr_left_1 = generator_heap->var_minimum_size_none;
        CHECK_OBJECT(generator_heap->var_w);
        tmp_iadd_expr_right_1 = generator_heap->var_w;
        generator_heap->tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (generator_heap->tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 178;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_54 = tmp_iadd_expr_left_1;
        generator_heap->var_minimum_size_none = tmp_assign_source_54;

    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(generator_heap->var_shw);
        tmp_ass_subvalue_1 = generator_heap->var_shw;
        if (generator_heap->var_hint == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[20]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 180;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_ass_subscribed_1 = generator_heap->var_hint;
        CHECK_OBJECT(generator_heap->var_i);
        tmp_ass_subscript_1 = generator_heap->var_i;
        generator_heap->tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (generator_heap->tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 180;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_4;
        }
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_1;
        CHECK_OBJECT(generator_heap->var_shw_min);
        tmp_truth_name_1 = CHECK_IF_TRUE(generator_heap->var_shw_min);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 181;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = Py_True;
        {
            PyObject *old = generator_heap->var_has_bound;
            generator_heap->var_has_bound = tmp_assign_source_55;
            Py_INCREF(generator_heap->var_has_bound);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        if (generator_heap->var_minimum_size_bounded == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[21]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 183;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_iadd_expr_left_2 = generator_heap->var_minimum_size_bounded;
        CHECK_OBJECT(generator_heap->var_shw_min);
        tmp_iadd_expr_right_2 = generator_heap->var_shw_min;
        generator_heap->tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        if (generator_heap->tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 183;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_56 = tmp_iadd_expr_left_2;
        generator_heap->var_minimum_size_bounded = tmp_assign_source_56;

    }
    goto branch_end_3;
    branch_no_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(generator_heap->var_shw_max);
        tmp_cmp_expr_left_3 = generator_heap->var_shw_max;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_4 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = Py_True;
        {
            PyObject *old = generator_heap->var_has_bound;
            generator_heap->var_has_bound = tmp_assign_source_57;
            Py_INCREF(generator_heap->var_has_bound);
            Py_XDECREF(old);
        }

    }
    branch_no_4:;
    branch_end_3:;
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_iadd_expr_left_3;
        PyObject *tmp_iadd_expr_right_3;
        if (generator_heap->var_stretch_sum == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[22]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 186;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_iadd_expr_left_3 = generator_heap->var_stretch_sum;
        CHECK_OBJECT(generator_heap->var_shw);
        tmp_iadd_expr_right_3 = generator_heap->var_shw;
        generator_heap->tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
        if (generator_heap->tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 186;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_58 = tmp_iadd_expr_left_3;
        generator_heap->var_stretch_sum = tmp_assign_source_58;

    }
    branch_end_2:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(generator_heap->var_shh);
        tmp_cmp_expr_left_4 = generator_heap->var_shh;
        tmp_cmp_expr_right_4 = Py_None;
        tmp_condition_result_5 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[23]);
        assert(tmp_called_value_2 != NULL);
        if (generator_heap->var_minimum_size_y == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[24]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 189;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_args_element_value_2 = generator_heap->var_minimum_size_y;
        CHECK_OBJECT(generator_heap->var_h);
        tmp_args_element_value_3 = generator_heap->var_h;
        generator->m_frame->m_frame.f_lineno = 189;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_59 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        if (tmp_assign_source_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 189;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->var_minimum_size_y;
            generator_heap->var_minimum_size_y = tmp_assign_source_59;
            Py_XDECREF(old);
        }

    }
    goto branch_end_5;
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_2;
        CHECK_OBJECT(generator_heap->var_shh_min);
        tmp_truth_name_2 = CHECK_IF_TRUE(generator_heap->var_shh_min);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 190;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts[23]);
        assert(tmp_called_value_3 != NULL);
        if (generator_heap->var_minimum_size_y == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[24]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 191;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_args_element_value_4 = generator_heap->var_minimum_size_y;
        CHECK_OBJECT(generator_heap->var_shh_min);
        tmp_args_element_value_5 = generator_heap->var_shh_min;
        generator->m_frame->m_frame.f_lineno = 191;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assign_source_60 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
        }

        if (tmp_assign_source_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 191;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->var_minimum_size_y;
            generator_heap->var_minimum_size_y = tmp_assign_source_60;
            Py_XDECREF(old);
        }

    }
    branch_no_6:;
    branch_end_5:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 175;
        generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_15;
    // Exception handler code:
    try_except_handler_4:;
    generator_heap->exception_keeper_type_15 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_15 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_15 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_15 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_15;
    generator_heap->exception_value = generator_heap->exception_keeper_value_15;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_15;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        if (generator_heap->var_minimum_size_bounded == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[21]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 193;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_left_4 = generator_heap->var_minimum_size_bounded;
        if (generator_heap->var_minimum_size_none == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[19]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 193;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_right_4 = generator_heap->var_minimum_size_none;
        tmp_assign_source_61 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        if (tmp_assign_source_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 193;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_minimum_size_x == NULL);
        generator_heap->var_minimum_size_x = tmp_assign_source_61;
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_iadd_expr_left_4;
        PyObject *tmp_iadd_expr_right_4;
        if (generator_heap->var_minimum_size_y == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[24]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 194;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_4 = generator_heap->var_minimum_size_y;
        CHECK_OBJECT(generator_heap->var_padding_y);
        tmp_iadd_expr_right_4 = generator_heap->var_padding_y;
        generator_heap->tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_4, tmp_iadd_expr_right_4);
        if (generator_heap->tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 194;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_62 = tmp_iadd_expr_left_4;
        generator_heap->var_minimum_size_y = tmp_assign_source_62;

    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = mod_consts[15];
        assert(generator_heap->var_minimum_size_x == NULL);
        Py_INCREF(tmp_assign_source_63);
        generator_heap->var_minimum_size_x = tmp_assign_source_63;
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        PyObject *tmp_sub_expr_left_2;
        nuitka_digit tmp_sub_expr_right_2;
        CHECK_OBJECT(generator_heap->var_padding_y);
        tmp_add_expr_left_5 = generator_heap->var_padding_y;
        CHECK_OBJECT(generator_heap->var_spacing);
        tmp_mult_expr_left_3 = generator_heap->var_spacing;
        CHECK_OBJECT(generator_heap->var_len_children);
        tmp_sub_expr_left_2 = generator_heap->var_len_children;
        tmp_sub_expr_right_2 = 1;
        tmp_mult_expr_right_3 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        assert(!(tmp_mult_expr_right_3 == NULL));
        tmp_add_expr_right_5 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        Py_DECREF(tmp_mult_expr_right_3);
        if (tmp_add_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 197;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_64 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
        Py_DECREF(tmp_add_expr_right_5);
        if (tmp_assign_source_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 197;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_minimum_size_none == NULL);
        generator_heap->var_minimum_size_none = tmp_assign_source_64;
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_iter_arg_9;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_4 = (PyObject *)&PyEnum_Type;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[11]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 200;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_6 = Nuitka_Cell_GET(generator->m_closure[1]);
        generator->m_frame->m_frame.f_lineno = 200;
        tmp_iter_arg_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_6);
        if (tmp_iter_arg_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 200;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_65 = MAKE_ITERATOR(tstate, tmp_iter_arg_9);
        Py_DECREF(tmp_iter_arg_9);
        if (tmp_assign_source_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 200;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->tmp_for_loop_2__for_iterator == NULL);
        generator_heap->tmp_for_loop_2__for_iterator = tmp_assign_source_65;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_66;
        CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = generator_heap->tmp_for_loop_2__for_iterator;
        tmp_assign_source_66 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_66 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
                generator_heap->exception_lineno = 199;
                goto try_except_handler_17;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_2__iter_value;
            generator_heap->tmp_for_loop_2__iter_value = tmp_assign_source_66;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_iter_arg_10;
        CHECK_OBJECT(generator_heap->tmp_for_loop_2__iter_value);
        tmp_iter_arg_10 = generator_heap->tmp_for_loop_2__iter_value;
        tmp_assign_source_67 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_10);
        if (tmp_assign_source_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 199;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_18;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_8__source_iter;
            generator_heap->tmp_tuple_unpack_8__source_iter = tmp_assign_source_67;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_unpack_20;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_8__source_iter);
        tmp_unpack_20 = generator_heap->tmp_tuple_unpack_8__source_iter;
        tmp_assign_source_68 = UNPACK_NEXT(tstate, tmp_unpack_20, 0, 2);
        if (tmp_assign_source_68 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 199;
            goto try_except_handler_19;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_8__element_1;
            generator_heap->tmp_tuple_unpack_8__element_1 = tmp_assign_source_68;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_unpack_21;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_8__source_iter);
        tmp_unpack_21 = generator_heap->tmp_tuple_unpack_8__source_iter;
        tmp_assign_source_69 = UNPACK_NEXT(tstate, tmp_unpack_21, 1, 2);
        if (tmp_assign_source_69 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 199;
            goto try_except_handler_19;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_8__element_2;
            generator_heap->tmp_tuple_unpack_8__element_2 = tmp_assign_source_69;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_8;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_8__source_iter);
        tmp_iterator_name_8 = generator_heap->tmp_tuple_unpack_8__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_8); assert(HAS_ITERNEXT(tmp_iterator_name_8));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_8)->tp_iternext)(tmp_iterator_name_8);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
                    generator_heap->exception_lineno = 199;
                    goto try_except_handler_19;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[17];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 199;
            goto try_except_handler_19;
        }
    }
    goto try_end_16;
    // Exception handler code:
    try_except_handler_19:;
    generator_heap->exception_keeper_type_16 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_16 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_16 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_16 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_8__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_8__source_iter);
    generator_heap->tmp_tuple_unpack_8__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_16;
    generator_heap->exception_value = generator_heap->exception_keeper_value_16;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_16;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_16;

    goto try_except_handler_18;
    // End of try:
    try_end_16:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_8__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_8__source_iter);
    generator_heap->tmp_tuple_unpack_8__source_iter = NULL;
    {
        PyObject *tmp_assign_source_70;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_8__element_1);
        tmp_assign_source_70 = generator_heap->tmp_tuple_unpack_8__element_1;
        {
            PyObject *old = generator_heap->var_i;
            generator_heap->var_i = tmp_assign_source_70;
            Py_INCREF(generator_heap->var_i);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_8__element_1);
    generator_heap->tmp_tuple_unpack_8__element_1 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_iter_arg_11;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_8__element_2);
        tmp_iter_arg_11 = generator_heap->tmp_tuple_unpack_8__element_2;
        tmp_assign_source_71 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_11);
        if (tmp_assign_source_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 199;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_20;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_9__source_iter;
            generator_heap->tmp_tuple_unpack_9__source_iter = tmp_assign_source_71;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_unpack_22;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_9__source_iter);
        tmp_unpack_22 = generator_heap->tmp_tuple_unpack_9__source_iter;
        tmp_assign_source_72 = UNPACK_NEXT(tstate, tmp_unpack_22, 0, 5);
        if (tmp_assign_source_72 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 199;
            goto try_except_handler_21;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_9__element_1;
            generator_heap->tmp_tuple_unpack_9__element_1 = tmp_assign_source_72;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_unpack_23;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_9__source_iter);
        tmp_unpack_23 = generator_heap->tmp_tuple_unpack_9__source_iter;
        tmp_assign_source_73 = UNPACK_NEXT(tstate, tmp_unpack_23, 1, 5);
        if (tmp_assign_source_73 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 199;
            goto try_except_handler_21;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_9__element_2;
            generator_heap->tmp_tuple_unpack_9__element_2 = tmp_assign_source_73;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_unpack_24;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_9__source_iter);
        tmp_unpack_24 = generator_heap->tmp_tuple_unpack_9__source_iter;
        tmp_assign_source_74 = UNPACK_NEXT(tstate, tmp_unpack_24, 2, 5);
        if (tmp_assign_source_74 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 199;
            goto try_except_handler_21;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_9__element_3;
            generator_heap->tmp_tuple_unpack_9__element_3 = tmp_assign_source_74;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_unpack_25;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_9__source_iter);
        tmp_unpack_25 = generator_heap->tmp_tuple_unpack_9__source_iter;
        tmp_assign_source_75 = UNPACK_NEXT(tstate, tmp_unpack_25, 3, 5);
        if (tmp_assign_source_75 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 199;
            goto try_except_handler_21;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_9__element_4;
            generator_heap->tmp_tuple_unpack_9__element_4 = tmp_assign_source_75;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_unpack_26;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_9__source_iter);
        tmp_unpack_26 = generator_heap->tmp_tuple_unpack_9__source_iter;
        tmp_assign_source_76 = UNPACK_NEXT(tstate, tmp_unpack_26, 4, 5);
        if (tmp_assign_source_76 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 199;
            goto try_except_handler_21;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_9__element_5;
            generator_heap->tmp_tuple_unpack_9__element_5 = tmp_assign_source_76;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_9;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_9__source_iter);
        tmp_iterator_name_9 = generator_heap->tmp_tuple_unpack_9__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_9); assert(HAS_ITERNEXT(tmp_iterator_name_9));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_9)->tp_iternext)(tmp_iterator_name_9);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
                    generator_heap->exception_lineno = 199;
                    goto try_except_handler_21;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[18];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 199;
            goto try_except_handler_21;
        }
    }
    goto try_end_17;
    // Exception handler code:
    try_except_handler_21:;
    generator_heap->exception_keeper_type_17 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_17 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_17 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_17 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_9__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_9__source_iter);
    generator_heap->tmp_tuple_unpack_9__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_17;
    generator_heap->exception_value = generator_heap->exception_keeper_value_17;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_17;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_17;

    goto try_except_handler_20;
    // End of try:
    try_end_17:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_9__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_9__source_iter);
    generator_heap->tmp_tuple_unpack_9__source_iter = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_iter_arg_12;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_9__element_1);
        tmp_iter_arg_12 = generator_heap->tmp_tuple_unpack_9__element_1;
        tmp_assign_source_77 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_12);
        if (tmp_assign_source_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 199;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_22;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_10__source_iter;
            generator_heap->tmp_tuple_unpack_10__source_iter = tmp_assign_source_77;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_unpack_27;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_10__source_iter);
        tmp_unpack_27 = generator_heap->tmp_tuple_unpack_10__source_iter;
        tmp_assign_source_78 = UNPACK_NEXT(tstate, tmp_unpack_27, 0, 2);
        if (tmp_assign_source_78 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 199;
            goto try_except_handler_23;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_10__element_1;
            generator_heap->tmp_tuple_unpack_10__element_1 = tmp_assign_source_78;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_unpack_28;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_10__source_iter);
        tmp_unpack_28 = generator_heap->tmp_tuple_unpack_10__source_iter;
        tmp_assign_source_79 = UNPACK_NEXT(tstate, tmp_unpack_28, 1, 2);
        if (tmp_assign_source_79 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 199;
            goto try_except_handler_23;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_10__element_2;
            generator_heap->tmp_tuple_unpack_10__element_2 = tmp_assign_source_79;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_10;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_10__source_iter);
        tmp_iterator_name_10 = generator_heap->tmp_tuple_unpack_10__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_10); assert(HAS_ITERNEXT(tmp_iterator_name_10));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_10)->tp_iternext)(tmp_iterator_name_10);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
                    generator_heap->exception_lineno = 199;
                    goto try_except_handler_23;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[17];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 199;
            goto try_except_handler_23;
        }
    }
    goto try_end_18;
    // Exception handler code:
    try_except_handler_23:;
    generator_heap->exception_keeper_type_18 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_18 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_18 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_18 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_10__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_10__source_iter);
    generator_heap->tmp_tuple_unpack_10__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_18;
    generator_heap->exception_value = generator_heap->exception_keeper_value_18;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_18;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_18;

    goto try_except_handler_22;
    // End of try:
    try_end_18:;
    goto try_end_19;
    // Exception handler code:
    try_except_handler_22:;
    generator_heap->exception_keeper_type_19 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_19 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_19 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_19 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_10__element_1);
    generator_heap->tmp_tuple_unpack_10__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_10__element_2);
    generator_heap->tmp_tuple_unpack_10__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_19;
    generator_heap->exception_value = generator_heap->exception_keeper_value_19;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_19;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_19;

    goto try_except_handler_20;
    // End of try:
    try_end_19:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_10__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_10__source_iter);
    generator_heap->tmp_tuple_unpack_10__source_iter = NULL;
    {
        PyObject *tmp_assign_source_80;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_10__element_1);
        tmp_assign_source_80 = generator_heap->tmp_tuple_unpack_10__element_1;
        {
            PyObject *old = generator_heap->var_w;
            generator_heap->var_w = tmp_assign_source_80;
            Py_INCREF(generator_heap->var_w);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_10__element_1);
    generator_heap->tmp_tuple_unpack_10__element_1 = NULL;

    {
        PyObject *tmp_assign_source_81;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_10__element_2);
        tmp_assign_source_81 = generator_heap->tmp_tuple_unpack_10__element_2;
        {
            PyObject *old = generator_heap->var_h;
            generator_heap->var_h = tmp_assign_source_81;
            Py_INCREF(generator_heap->var_h);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_10__element_2);
    generator_heap->tmp_tuple_unpack_10__element_2 = NULL;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_9__element_1);
    generator_heap->tmp_tuple_unpack_9__element_1 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_iter_arg_13;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_9__element_2);
        tmp_iter_arg_13 = generator_heap->tmp_tuple_unpack_9__element_2;
        tmp_assign_source_82 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_13);
        if (tmp_assign_source_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 199;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_24;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_11__source_iter;
            generator_heap->tmp_tuple_unpack_11__source_iter = tmp_assign_source_82;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_unpack_29;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_11__source_iter);
        tmp_unpack_29 = generator_heap->tmp_tuple_unpack_11__source_iter;
        tmp_assign_source_83 = UNPACK_NEXT(tstate, tmp_unpack_29, 0, 2);
        if (tmp_assign_source_83 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 199;
            goto try_except_handler_25;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_11__element_1;
            generator_heap->tmp_tuple_unpack_11__element_1 = tmp_assign_source_83;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_unpack_30;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_11__source_iter);
        tmp_unpack_30 = generator_heap->tmp_tuple_unpack_11__source_iter;
        tmp_assign_source_84 = UNPACK_NEXT(tstate, tmp_unpack_30, 1, 2);
        if (tmp_assign_source_84 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 199;
            goto try_except_handler_25;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_11__element_2;
            generator_heap->tmp_tuple_unpack_11__element_2 = tmp_assign_source_84;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_11;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_11__source_iter);
        tmp_iterator_name_11 = generator_heap->tmp_tuple_unpack_11__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_11); assert(HAS_ITERNEXT(tmp_iterator_name_11));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_11)->tp_iternext)(tmp_iterator_name_11);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
                    generator_heap->exception_lineno = 199;
                    goto try_except_handler_25;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[17];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 199;
            goto try_except_handler_25;
        }
    }
    goto try_end_20;
    // Exception handler code:
    try_except_handler_25:;
    generator_heap->exception_keeper_type_20 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_20 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_20 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_20 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_11__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_11__source_iter);
    generator_heap->tmp_tuple_unpack_11__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_20;
    generator_heap->exception_value = generator_heap->exception_keeper_value_20;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_20;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_20;

    goto try_except_handler_24;
    // End of try:
    try_end_20:;
    goto try_end_21;
    // Exception handler code:
    try_except_handler_24:;
    generator_heap->exception_keeper_type_21 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_21 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_21 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_21 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_11__element_1);
    generator_heap->tmp_tuple_unpack_11__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_11__element_2);
    generator_heap->tmp_tuple_unpack_11__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_21;
    generator_heap->exception_value = generator_heap->exception_keeper_value_21;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_21;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_21;

    goto try_except_handler_20;
    // End of try:
    try_end_21:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_11__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_11__source_iter);
    generator_heap->tmp_tuple_unpack_11__source_iter = NULL;
    {
        PyObject *tmp_assign_source_85;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_11__element_1);
        tmp_assign_source_85 = generator_heap->tmp_tuple_unpack_11__element_1;
        {
            PyObject *old = generator_heap->var_shw;
            generator_heap->var_shw = tmp_assign_source_85;
            Py_INCREF(generator_heap->var_shw);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_11__element_1);
    generator_heap->tmp_tuple_unpack_11__element_1 = NULL;

    {
        PyObject *tmp_assign_source_86;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_11__element_2);
        tmp_assign_source_86 = generator_heap->tmp_tuple_unpack_11__element_2;
        {
            PyObject *old = generator_heap->var_shh;
            generator_heap->var_shh = tmp_assign_source_86;
            Py_INCREF(generator_heap->var_shh);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_11__element_2);
    generator_heap->tmp_tuple_unpack_11__element_2 = NULL;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_9__element_2);
    generator_heap->tmp_tuple_unpack_9__element_2 = NULL;

    {
        PyObject *tmp_assign_source_87;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_9__element_3);
        tmp_assign_source_87 = generator_heap->tmp_tuple_unpack_9__element_3;
        {
            PyObject *old = generator_heap->var__;
            generator_heap->var__ = tmp_assign_source_87;
            Py_INCREF(generator_heap->var__);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_9__element_3);
    generator_heap->tmp_tuple_unpack_9__element_3 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_iter_arg_14;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_9__element_4);
        tmp_iter_arg_14 = generator_heap->tmp_tuple_unpack_9__element_4;
        tmp_assign_source_88 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_14);
        if (tmp_assign_source_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 199;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_26;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_12__source_iter;
            generator_heap->tmp_tuple_unpack_12__source_iter = tmp_assign_source_88;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_unpack_31;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_12__source_iter);
        tmp_unpack_31 = generator_heap->tmp_tuple_unpack_12__source_iter;
        tmp_assign_source_89 = UNPACK_NEXT(tstate, tmp_unpack_31, 0, 2);
        if (tmp_assign_source_89 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 199;
            goto try_except_handler_27;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_12__element_1;
            generator_heap->tmp_tuple_unpack_12__element_1 = tmp_assign_source_89;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_unpack_32;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_12__source_iter);
        tmp_unpack_32 = generator_heap->tmp_tuple_unpack_12__source_iter;
        tmp_assign_source_90 = UNPACK_NEXT(tstate, tmp_unpack_32, 1, 2);
        if (tmp_assign_source_90 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 199;
            goto try_except_handler_27;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_12__element_2;
            generator_heap->tmp_tuple_unpack_12__element_2 = tmp_assign_source_90;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_12;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_12__source_iter);
        tmp_iterator_name_12 = generator_heap->tmp_tuple_unpack_12__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_12); assert(HAS_ITERNEXT(tmp_iterator_name_12));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_12)->tp_iternext)(tmp_iterator_name_12);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
                    generator_heap->exception_lineno = 199;
                    goto try_except_handler_27;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[17];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 199;
            goto try_except_handler_27;
        }
    }
    goto try_end_22;
    // Exception handler code:
    try_except_handler_27:;
    generator_heap->exception_keeper_type_22 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_22 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_22 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_22 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_12__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_12__source_iter);
    generator_heap->tmp_tuple_unpack_12__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_22;
    generator_heap->exception_value = generator_heap->exception_keeper_value_22;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_22;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_22;

    goto try_except_handler_26;
    // End of try:
    try_end_22:;
    goto try_end_23;
    // Exception handler code:
    try_except_handler_26:;
    generator_heap->exception_keeper_type_23 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_23 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_23 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_23 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_12__element_1);
    generator_heap->tmp_tuple_unpack_12__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_12__element_2);
    generator_heap->tmp_tuple_unpack_12__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_23;
    generator_heap->exception_value = generator_heap->exception_keeper_value_23;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_23;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_23;

    goto try_except_handler_20;
    // End of try:
    try_end_23:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_12__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_12__source_iter);
    generator_heap->tmp_tuple_unpack_12__source_iter = NULL;
    {
        PyObject *tmp_assign_source_91;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_12__element_1);
        tmp_assign_source_91 = generator_heap->tmp_tuple_unpack_12__element_1;
        {
            PyObject *old = generator_heap->var_shw_min;
            generator_heap->var_shw_min = tmp_assign_source_91;
            Py_INCREF(generator_heap->var_shw_min);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_12__element_1);
    generator_heap->tmp_tuple_unpack_12__element_1 = NULL;

    {
        PyObject *tmp_assign_source_92;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_12__element_2);
        tmp_assign_source_92 = generator_heap->tmp_tuple_unpack_12__element_2;
        {
            PyObject *old = generator_heap->var_shh_min;
            generator_heap->var_shh_min = tmp_assign_source_92;
            Py_INCREF(generator_heap->var_shh_min);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_12__element_2);
    generator_heap->tmp_tuple_unpack_12__element_2 = NULL;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_9__element_4);
    generator_heap->tmp_tuple_unpack_9__element_4 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_iter_arg_15;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_9__element_5);
        tmp_iter_arg_15 = generator_heap->tmp_tuple_unpack_9__element_5;
        tmp_assign_source_93 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_15);
        if (tmp_assign_source_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 199;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_28;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_13__source_iter;
            generator_heap->tmp_tuple_unpack_13__source_iter = tmp_assign_source_93;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_unpack_33;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_13__source_iter);
        tmp_unpack_33 = generator_heap->tmp_tuple_unpack_13__source_iter;
        tmp_assign_source_94 = UNPACK_NEXT(tstate, tmp_unpack_33, 0, 2);
        if (tmp_assign_source_94 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 199;
            goto try_except_handler_29;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_13__element_1;
            generator_heap->tmp_tuple_unpack_13__element_1 = tmp_assign_source_94;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_unpack_34;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_13__source_iter);
        tmp_unpack_34 = generator_heap->tmp_tuple_unpack_13__source_iter;
        tmp_assign_source_95 = UNPACK_NEXT(tstate, tmp_unpack_34, 1, 2);
        if (tmp_assign_source_95 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 199;
            goto try_except_handler_29;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_13__element_2;
            generator_heap->tmp_tuple_unpack_13__element_2 = tmp_assign_source_95;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_13;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_13__source_iter);
        tmp_iterator_name_13 = generator_heap->tmp_tuple_unpack_13__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_13); assert(HAS_ITERNEXT(tmp_iterator_name_13));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_13)->tp_iternext)(tmp_iterator_name_13);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
                    generator_heap->exception_lineno = 199;
                    goto try_except_handler_29;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[17];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 199;
            goto try_except_handler_29;
        }
    }
    goto try_end_24;
    // Exception handler code:
    try_except_handler_29:;
    generator_heap->exception_keeper_type_24 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_24 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_24 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_24 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_13__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_13__source_iter);
    generator_heap->tmp_tuple_unpack_13__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_24;
    generator_heap->exception_value = generator_heap->exception_keeper_value_24;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_24;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_24;

    goto try_except_handler_28;
    // End of try:
    try_end_24:;
    goto try_end_25;
    // Exception handler code:
    try_except_handler_28:;
    generator_heap->exception_keeper_type_25 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_25 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_25 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_25 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_13__element_1);
    generator_heap->tmp_tuple_unpack_13__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_13__element_2);
    generator_heap->tmp_tuple_unpack_13__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_25;
    generator_heap->exception_value = generator_heap->exception_keeper_value_25;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_25;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_25;

    goto try_except_handler_20;
    // End of try:
    try_end_25:;
    goto try_end_26;
    // Exception handler code:
    try_except_handler_20:;
    generator_heap->exception_keeper_type_26 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_26 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_26 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_26 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_9__element_1);
    generator_heap->tmp_tuple_unpack_9__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_9__element_2);
    generator_heap->tmp_tuple_unpack_9__element_2 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_9__element_3);
    generator_heap->tmp_tuple_unpack_9__element_3 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_9__element_4);
    generator_heap->tmp_tuple_unpack_9__element_4 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_9__element_5);
    generator_heap->tmp_tuple_unpack_9__element_5 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_26;
    generator_heap->exception_value = generator_heap->exception_keeper_value_26;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_26;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_26;

    goto try_except_handler_18;
    // End of try:
    try_end_26:;
    goto try_end_27;
    // Exception handler code:
    try_except_handler_18:;
    generator_heap->exception_keeper_type_27 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_27 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_27 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_27 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_8__element_1);
    generator_heap->tmp_tuple_unpack_8__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_8__element_2);
    generator_heap->tmp_tuple_unpack_8__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_27;
    generator_heap->exception_value = generator_heap->exception_keeper_value_27;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_27;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_27;

    goto try_except_handler_17;
    // End of try:
    try_end_27:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_13__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_13__source_iter);
    generator_heap->tmp_tuple_unpack_13__source_iter = NULL;
    {
        PyObject *tmp_assign_source_96;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_13__element_1);
        tmp_assign_source_96 = generator_heap->tmp_tuple_unpack_13__element_1;
        {
            PyObject *old = generator_heap->var__;
            assert(old != NULL);
            generator_heap->var__ = tmp_assign_source_96;
            Py_INCREF(generator_heap->var__);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_13__element_1);
    generator_heap->tmp_tuple_unpack_13__element_1 = NULL;

    {
        PyObject *tmp_assign_source_97;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_13__element_2);
        tmp_assign_source_97 = generator_heap->tmp_tuple_unpack_13__element_2;
        {
            PyObject *old = generator_heap->var_shh_max;
            generator_heap->var_shh_max = tmp_assign_source_97;
            Py_INCREF(generator_heap->var_shh_max);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_13__element_2);
    generator_heap->tmp_tuple_unpack_13__element_2 = NULL;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_9__element_5);
    generator_heap->tmp_tuple_unpack_9__element_5 = NULL;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_8__element_2);
    generator_heap->tmp_tuple_unpack_8__element_2 = NULL;

    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(generator_heap->var_shh);
        tmp_cmp_expr_left_5 = generator_heap->var_shh;
        tmp_cmp_expr_right_5 = Py_None;
        tmp_condition_result_7 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_iadd_expr_left_5;
        PyObject *tmp_iadd_expr_right_5;
        if (generator_heap->var_minimum_size_none == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[19]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 202;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_iadd_expr_left_5 = generator_heap->var_minimum_size_none;
        CHECK_OBJECT(generator_heap->var_h);
        tmp_iadd_expr_right_5 = generator_heap->var_h;
        generator_heap->tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_5, tmp_iadd_expr_right_5);
        if (generator_heap->tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 202;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_assign_source_98 = tmp_iadd_expr_left_5;
        generator_heap->var_minimum_size_none = tmp_assign_source_98;

    }
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(generator_heap->var_shh);
        tmp_ass_subvalue_2 = generator_heap->var_shh;
        if (generator_heap->var_hint == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[20]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 204;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_ass_subscribed_2 = generator_heap->var_hint;
        CHECK_OBJECT(generator_heap->var_i);
        tmp_ass_subscript_2 = generator_heap->var_i;
        generator_heap->tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (generator_heap->tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 204;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_17;
        }
    }
    {
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_3;
        CHECK_OBJECT(generator_heap->var_shh_min);
        tmp_truth_name_3 = CHECK_IF_TRUE(generator_heap->var_shh_min);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 205;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_condition_result_8 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_99;
        tmp_assign_source_99 = Py_True;
        {
            PyObject *old = generator_heap->var_has_bound;
            generator_heap->var_has_bound = tmp_assign_source_99;
            Py_INCREF(generator_heap->var_has_bound);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_iadd_expr_left_6;
        PyObject *tmp_iadd_expr_right_6;
        if (generator_heap->var_minimum_size_bounded == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[21]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 207;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_iadd_expr_left_6 = generator_heap->var_minimum_size_bounded;
        CHECK_OBJECT(generator_heap->var_shh_min);
        tmp_iadd_expr_right_6 = generator_heap->var_shh_min;
        generator_heap->tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_6, tmp_iadd_expr_right_6);
        if (generator_heap->tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 207;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_assign_source_100 = tmp_iadd_expr_left_6;
        generator_heap->var_minimum_size_bounded = tmp_assign_source_100;

    }
    goto branch_end_8;
    branch_no_8:;
    {
        bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(generator_heap->var_shh_max);
        tmp_cmp_expr_left_6 = generator_heap->var_shh_max;
        tmp_cmp_expr_right_6 = Py_None;
        tmp_condition_result_9 = (tmp_cmp_expr_left_6 != tmp_cmp_expr_right_6) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_101;
        tmp_assign_source_101 = Py_True;
        {
            PyObject *old = generator_heap->var_has_bound;
            generator_heap->var_has_bound = tmp_assign_source_101;
            Py_INCREF(generator_heap->var_has_bound);
            Py_XDECREF(old);
        }

    }
    branch_no_9:;
    branch_end_8:;
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_iadd_expr_left_7;
        PyObject *tmp_iadd_expr_right_7;
        if (generator_heap->var_stretch_sum == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[22]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 210;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_iadd_expr_left_7 = generator_heap->var_stretch_sum;
        CHECK_OBJECT(generator_heap->var_shh);
        tmp_iadd_expr_right_7 = generator_heap->var_shh;
        generator_heap->tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_7, tmp_iadd_expr_right_7);
        if (generator_heap->tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 210;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_assign_source_102 = tmp_iadd_expr_left_7;
        generator_heap->var_stretch_sum = tmp_assign_source_102;

    }
    branch_end_7:;
    {
        bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        CHECK_OBJECT(generator_heap->var_shw);
        tmp_cmp_expr_left_7 = generator_heap->var_shw;
        tmp_cmp_expr_right_7 = Py_None;
        tmp_condition_result_10 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        tmp_called_value_5 = LOOKUP_BUILTIN(mod_consts[23]);
        assert(tmp_called_value_5 != NULL);
        if (generator_heap->var_minimum_size_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[25]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 213;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_args_element_value_7 = generator_heap->var_minimum_size_x;
        CHECK_OBJECT(generator_heap->var_w);
        tmp_args_element_value_8 = generator_heap->var_w;
        generator->m_frame->m_frame.f_lineno = 213;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_103 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
        }

        if (tmp_assign_source_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 213;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_17;
        }
        {
            PyObject *old = generator_heap->var_minimum_size_x;
            generator_heap->var_minimum_size_x = tmp_assign_source_103;
            Py_XDECREF(old);
        }

    }
    goto branch_end_10;
    branch_no_10:;
    {
        nuitka_bool tmp_condition_result_11;
        int tmp_truth_name_4;
        CHECK_OBJECT(generator_heap->var_shw_min);
        tmp_truth_name_4 = CHECK_IF_TRUE(generator_heap->var_shw_min);
        if (tmp_truth_name_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 214;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_condition_result_11 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        tmp_called_value_6 = LOOKUP_BUILTIN(mod_consts[23]);
        assert(tmp_called_value_6 != NULL);
        if (generator_heap->var_minimum_size_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[25]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 215;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_args_element_value_9 = generator_heap->var_minimum_size_x;
        CHECK_OBJECT(generator_heap->var_shw_min);
        tmp_args_element_value_10 = generator_heap->var_shw_min;
        generator->m_frame->m_frame.f_lineno = 215;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_assign_source_104 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
        }

        if (tmp_assign_source_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 215;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_17;
        }
        {
            PyObject *old = generator_heap->var_minimum_size_x;
            generator_heap->var_minimum_size_x = tmp_assign_source_104;
            Py_XDECREF(old);
        }

    }
    branch_no_11:;
    branch_end_10:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 199;
        generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
        goto try_except_handler_17;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_28;
    // Exception handler code:
    try_except_handler_17:;
    generator_heap->exception_keeper_type_28 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_28 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_28 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_28 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
    generator_heap->tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
    generator_heap->tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_28;
    generator_heap->exception_value = generator_heap->exception_keeper_value_28;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_28;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_28;

    goto frame_exception_exit_1;
    // End of try:
    try_end_28:;
    Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
    generator_heap->tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
    generator_heap->tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_add_expr_left_6;
        PyObject *tmp_add_expr_right_6;
        if (generator_heap->var_minimum_size_bounded == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[21]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 217;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_left_6 = generator_heap->var_minimum_size_bounded;
        if (generator_heap->var_minimum_size_none == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[19]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 217;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_right_6 = generator_heap->var_minimum_size_none;
        tmp_assign_source_105 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
        if (tmp_assign_source_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 217;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_minimum_size_y == NULL);
        generator_heap->var_minimum_size_y = tmp_assign_source_105;
    }
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_iadd_expr_left_8;
        PyObject *tmp_iadd_expr_right_8;
        if (generator_heap->var_minimum_size_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[25]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 218;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_8 = generator_heap->var_minimum_size_x;
        CHECK_OBJECT(generator_heap->var_padding_x);
        tmp_iadd_expr_right_8 = generator_heap->var_padding_x;
        generator_heap->tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_8, tmp_iadd_expr_right_8);
        if (generator_heap->tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 218;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_106 = tmp_iadd_expr_left_8;
        generator_heap->var_minimum_size_x = tmp_assign_source_106;

    }
    branch_end_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(generator_heap->var_minimum_size_x);
        tmp_tuple_element_1 = generator_heap->var_minimum_size_x;
        tmp_assattr_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assattr_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(generator_heap->var_minimum_size_y);
        tmp_tuple_element_1 = generator_heap->var_minimum_size_y;
        PyTuple_SET_ITEM0(tmp_assattr_value_1, 1, tmp_tuple_element_1);
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
            Py_DECREF(tmp_assattr_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[12]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 220;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        generator_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[26], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (generator_heap->tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 220;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_expression_value_4;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[12]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 222;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_107 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[27]);
        if (tmp_assign_source_107 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 222;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_selfx == NULL);
        generator_heap->var_selfx = tmp_assign_source_107;
    }
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_expression_value_5;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[12]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 223;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_108 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[28]);
        if (tmp_assign_source_108 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 223;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_selfy == NULL);
        generator_heap->var_selfy = tmp_assign_source_108;
    }
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        CHECK_OBJECT(generator_heap->var_orientation);
        tmp_cmp_expr_left_8 = generator_heap->var_orientation;
        tmp_cmp_expr_right_8 = mod_consts[16];
        tmp_condition_result_12 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 225;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_sub_expr_left_3;
        PyObject *tmp_sub_expr_right_3;
        PyObject *tmp_expression_value_6;
        tmp_called_value_7 = LOOKUP_BUILTIN(mod_consts[23]);
        assert(tmp_called_value_7 != NULL);
        tmp_args_element_value_11 = mod_consts[14];
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[12]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 226;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_sub_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[29]);
        if (tmp_sub_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 226;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (generator_heap->var_minimum_size_none == NULL) {
            Py_DECREF(tmp_sub_expr_left_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[19]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 226;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_sub_expr_right_3 = generator_heap->var_minimum_size_none;
        tmp_args_element_value_12 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        Py_DECREF(tmp_sub_expr_left_3);
        if (tmp_args_element_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 226;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 226;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_assign_source_109 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_args_element_value_12);
        if (tmp_assign_source_109 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 226;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_stretch_space == NULL);
        generator_heap->var_stretch_space = tmp_assign_source_109;
    }
    {
        PyObject *tmp_assign_source_110;
        tmp_assign_source_110 = mod_consts[15];
        assert(Nuitka_Cell_GET(generator_heap->var_dim) == NULL);
        Py_INCREF(tmp_assign_source_110);
        PyCell_SET(generator_heap->var_dim, tmp_assign_source_110);

    }
    goto branch_end_12;
    branch_no_12:;
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_sub_expr_left_4;
        PyObject *tmp_sub_expr_right_4;
        PyObject *tmp_expression_value_7;
        tmp_called_value_8 = LOOKUP_BUILTIN(mod_consts[23]);
        assert(tmp_called_value_8 != NULL);
        tmp_args_element_value_13 = mod_consts[14];
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[12]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 229;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_7 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_sub_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[30]);
        if (tmp_sub_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 229;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (generator_heap->var_minimum_size_none == NULL) {
            Py_DECREF(tmp_sub_expr_left_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[19]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 229;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_sub_expr_right_4 = generator_heap->var_minimum_size_none;
        tmp_args_element_value_14 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
        Py_DECREF(tmp_sub_expr_left_4);
        if (tmp_args_element_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 229;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 229;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_assign_source_111 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_args_element_value_14);
        if (tmp_assign_source_111 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 229;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_stretch_space == NULL);
        generator_heap->var_stretch_space = tmp_assign_source_111;
    }
    {
        PyObject *tmp_assign_source_112;
        tmp_assign_source_112 = mod_consts[31];
        assert(Nuitka_Cell_GET(generator_heap->var_dim) == NULL);
        Py_INCREF(tmp_assign_source_112);
        PyCell_SET(generator_heap->var_dim, tmp_assign_source_112);

    }
    branch_end_12:;
    {
        nuitka_bool tmp_condition_result_13;
        int tmp_truth_name_5;
        if (generator_heap->var_has_bound == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[32]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 232;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_5 = CHECK_IF_TRUE(generator_heap->var_has_bound);
        if (tmp_truth_name_5 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 232;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_13 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        CHECK_OBJECT(generator_heap->var_stretch_space);
        tmp_cmp_expr_left_9 = generator_heap->var_stretch_space;
        tmp_cmp_expr_right_9 = mod_consts[33];
        tmp_condition_result_14 = RICH_COMPARE_LT_NBOOL_OBJECT_FLOAT(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        if (tmp_condition_result_14 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 234;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_assign_source_113;
        tmp_assign_source_113 = mod_consts[34];
        {
            PyObject *old = generator_heap->var_stretch_sum;
            generator_heap->var_stretch_sum = tmp_assign_source_113;
            Py_INCREF(generator_heap->var_stretch_sum);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_114;
        tmp_assign_source_114 = mod_consts[34];
        {
            PyObject *old = generator_heap->var_stretch_space;
            assert(old != NULL);
            generator_heap->var_stretch_space = tmp_assign_source_114;
            Py_INCREF(generator_heap->var_stretch_space);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_115;
        PyObject *tmp_iter_arg_16;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_15;
        tmp_called_value_9 = (PyObject *)&PyEnum_Type;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[11]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 238;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_15 = Nuitka_Cell_GET(generator->m_closure[1]);
        generator->m_frame->m_frame.f_lineno = 238;
        tmp_iter_arg_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_15);
        if (tmp_iter_arg_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 238;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_115 = MAKE_ITERATOR(tstate, tmp_iter_arg_16);
        Py_DECREF(tmp_iter_arg_16);
        if (tmp_assign_source_115 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 238;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->tmp_for_loop_3__for_iterator == NULL);
        generator_heap->tmp_for_loop_3__for_iterator = tmp_assign_source_115;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_116;
        CHECK_OBJECT(generator_heap->tmp_for_loop_3__for_iterator);
        tmp_next_source_3 = generator_heap->tmp_for_loop_3__for_iterator;
        tmp_assign_source_116 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_116 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
                generator_heap->exception_lineno = 238;
                goto try_except_handler_30;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_3__iter_value;
            generator_heap->tmp_for_loop_3__iter_value = tmp_assign_source_116;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_117;
        PyObject *tmp_iter_arg_17;
        CHECK_OBJECT(generator_heap->tmp_for_loop_3__iter_value);
        tmp_iter_arg_17 = generator_heap->tmp_for_loop_3__iter_value;
        tmp_assign_source_117 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_17);
        if (tmp_assign_source_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 238;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_31;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_14__source_iter;
            generator_heap->tmp_tuple_unpack_14__source_iter = tmp_assign_source_117;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_unpack_35;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_14__source_iter);
        tmp_unpack_35 = generator_heap->tmp_tuple_unpack_14__source_iter;
        tmp_assign_source_118 = UNPACK_NEXT(tstate, tmp_unpack_35, 0, 2);
        if (tmp_assign_source_118 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 238;
            goto try_except_handler_32;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_14__element_1;
            generator_heap->tmp_tuple_unpack_14__element_1 = tmp_assign_source_118;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_119;
        PyObject *tmp_unpack_36;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_14__source_iter);
        tmp_unpack_36 = generator_heap->tmp_tuple_unpack_14__source_iter;
        tmp_assign_source_119 = UNPACK_NEXT(tstate, tmp_unpack_36, 1, 2);
        if (tmp_assign_source_119 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 238;
            goto try_except_handler_32;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_14__element_2;
            generator_heap->tmp_tuple_unpack_14__element_2 = tmp_assign_source_119;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_14;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_14__source_iter);
        tmp_iterator_name_14 = generator_heap->tmp_tuple_unpack_14__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_14); assert(HAS_ITERNEXT(tmp_iterator_name_14));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_14)->tp_iternext)(tmp_iterator_name_14);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
                    generator_heap->exception_lineno = 238;
                    goto try_except_handler_32;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[17];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 238;
            goto try_except_handler_32;
        }
    }
    goto try_end_29;
    // Exception handler code:
    try_except_handler_32:;
    generator_heap->exception_keeper_type_29 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_29 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_29 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_29 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_14__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_14__source_iter);
    generator_heap->tmp_tuple_unpack_14__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_29;
    generator_heap->exception_value = generator_heap->exception_keeper_value_29;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_29;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_29;

    goto try_except_handler_31;
    // End of try:
    try_end_29:;
    goto try_end_30;
    // Exception handler code:
    try_except_handler_31:;
    generator_heap->exception_keeper_type_30 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_30 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_30 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_30 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_14__element_1);
    generator_heap->tmp_tuple_unpack_14__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_14__element_2);
    generator_heap->tmp_tuple_unpack_14__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_30;
    generator_heap->exception_value = generator_heap->exception_keeper_value_30;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_30;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_30;

    goto try_except_handler_30;
    // End of try:
    try_end_30:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_14__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_14__source_iter);
    generator_heap->tmp_tuple_unpack_14__source_iter = NULL;
    {
        PyObject *tmp_assign_source_120;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_14__element_1);
        tmp_assign_source_120 = generator_heap->tmp_tuple_unpack_14__element_1;
        {
            PyObject *old = generator_heap->var_i;
            generator_heap->var_i = tmp_assign_source_120;
            Py_INCREF(generator_heap->var_i);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_14__element_1);
    generator_heap->tmp_tuple_unpack_14__element_1 = NULL;

    {
        PyObject *tmp_assign_source_121;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_14__element_2);
        tmp_assign_source_121 = generator_heap->tmp_tuple_unpack_14__element_2;
        {
            PyObject *old = generator_heap->var_val;
            generator_heap->var_val = tmp_assign_source_121;
            Py_INCREF(generator_heap->var_val);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_14__element_2);
    generator_heap->tmp_tuple_unpack_14__element_2 = NULL;

    {
        PyObject *tmp_assign_source_122;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(generator_heap->var_val);
        tmp_expression_value_9 = generator_heap->var_val;
        tmp_subscript_value_1 = mod_consts[31];
        tmp_expression_value_8 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_1, 1);
        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 239;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_30;
        }
        if (Nuitka_Cell_GET(generator_heap->var_dim) == NULL) {
            Py_DECREF(tmp_expression_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[35]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 239;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_30;
        }

        tmp_subscript_value_2 = Nuitka_Cell_GET(generator_heap->var_dim);
        tmp_assign_source_122 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_assign_source_122 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 239;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_30;
        }
        {
            PyObject *old = generator_heap->var_sh;
            generator_heap->var_sh = tmp_assign_source_122;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_15;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        CHECK_OBJECT(generator_heap->var_sh);
        tmp_cmp_expr_left_10 = generator_heap->var_sh;
        tmp_cmp_expr_right_10 = Py_None;
        tmp_condition_result_15 = (tmp_cmp_expr_left_10 == tmp_cmp_expr_right_10) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    goto loop_start_3;
    branch_no_15:;
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(generator_heap->var_val);
        tmp_expression_value_11 = generator_heap->var_val;
        tmp_subscript_value_3 = mod_consts[36];
        tmp_expression_value_10 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_11, tmp_subscript_value_3, 3);
        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 243;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_30;
        }
        if (Nuitka_Cell_GET(generator_heap->var_dim) == NULL) {
            Py_DECREF(tmp_expression_value_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[35]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 243;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_30;
        }

        tmp_subscript_value_4 = Nuitka_Cell_GET(generator_heap->var_dim);
        tmp_assign_source_123 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_4);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_assign_source_123 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 243;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_30;
        }
        {
            PyObject *old = generator_heap->var_sh_min;
            generator_heap->var_sh_min = tmp_assign_source_123;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_16;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        CHECK_OBJECT(generator_heap->var_sh_min);
        tmp_cmp_expr_left_11 = generator_heap->var_sh_min;
        tmp_cmp_expr_right_11 = Py_None;
        tmp_condition_result_16 = (tmp_cmp_expr_left_11 != tmp_cmp_expr_right_11) ? true : false;
        if (tmp_condition_result_16 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT(generator_heap->var_sh_min);
        tmp_ass_subvalue_3 = generator_heap->var_sh_min;
        if (generator_heap->var_hint == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[20]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 245;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_30;
        }

        tmp_ass_subscribed_3 = generator_heap->var_hint;
        CHECK_OBJECT(generator_heap->var_i);
        tmp_ass_subscript_3 = generator_heap->var_i;
        generator_heap->tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        if (generator_heap->tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 245;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_30;
        }
    }
    goto branch_end_16;
    branch_no_16:;
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        tmp_ass_subvalue_4 = mod_consts[14];
        if (generator_heap->var_hint == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[20]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 247;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_30;
        }

        tmp_ass_subscribed_4 = generator_heap->var_hint;
        CHECK_OBJECT(generator_heap->var_i);
        tmp_ass_subscript_4 = generator_heap->var_i;
        generator_heap->tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        if (generator_heap->tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 247;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_30;
        }
    }
    branch_end_16:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 238;
        generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
        goto try_except_handler_30;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_31;
    // Exception handler code:
    try_except_handler_30:;
    generator_heap->exception_keeper_type_31 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_31 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_31 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_31 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_for_loop_3__iter_value);
    generator_heap->tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_3__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_3__for_iterator);
    generator_heap->tmp_for_loop_3__for_iterator = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_31;
    generator_heap->exception_value = generator_heap->exception_keeper_value_31;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_31;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_31;

    goto frame_exception_exit_1;
    // End of try:
    try_end_31:;
    Py_XDECREF(generator_heap->tmp_for_loop_3__iter_value);
    generator_heap->tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_3__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_3__for_iterator);
    generator_heap->tmp_for_loop_3__for_iterator = NULL;
    goto branch_end_14;
    branch_no_14:;
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[12]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 250;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_12 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[37]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 250;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (generator_heap->var_stretch_sum == NULL) {
            Py_DECREF(tmp_called_value_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[22]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 251;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_16 = generator_heap->var_stretch_sum;
        CHECK_OBJECT(generator_heap->var_stretch_space);
        tmp_args_element_value_17 = generator_heap->var_stretch_space;
        if (generator_heap->var_minimum_size_bounded == NULL) {
            Py_DECREF(tmp_called_value_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[21]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 251;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_18 = generator_heap->var_minimum_size_bounded;
        {
            PyObject *tmp_assign_source_124;
            PyObject *tmp_iter_arg_18;
            if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[11]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

                generator_heap->exception_lineno = 252;
                generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_iter_arg_18 = Nuitka_Cell_GET(generator->m_closure[1]);
            tmp_assign_source_124 = MAKE_ITERATOR(tstate, tmp_iter_arg_18);
            if (tmp_assign_source_124 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 252;
                generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert(generator_heap->tmp_genexpr_1__$0 == NULL);
            generator_heap->tmp_genexpr_1__$0 = tmp_assign_source_124;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[2];

            tmp_closure_1[0] = generator_heap->var_dim;
            Py_INCREF(tmp_closure_1[0]);
            tmp_closure_1[1] = Nuitka_Cell_New0(generator_heap->tmp_genexpr_1__$0);

            tmp_args_element_value_19 = MAKE_GENERATOR_kivy$uix$boxlayout$$$function__2__iterate_layout$$$genobj__1__iterate_layout$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_33;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_33:;
        CHECK_OBJECT(generator_heap->tmp_genexpr_1__$0);
        Py_DECREF(generator_heap->tmp_genexpr_1__$0);
        generator_heap->tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        {
            PyObject *tmp_assign_source_125;
            PyObject *tmp_iter_arg_19;
            if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[11]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

                generator_heap->exception_lineno = 253;
                generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_iter_arg_19 = Nuitka_Cell_GET(generator->m_closure[1]);
            tmp_assign_source_125 = MAKE_ITERATOR(tstate, tmp_iter_arg_19);
            if (tmp_assign_source_125 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 253;
                generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert(generator_heap->tmp_genexpr_2__$0 == NULL);
            generator_heap->tmp_genexpr_2__$0 = tmp_assign_source_125;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_2[2];

            tmp_closure_2[0] = generator_heap->var_dim;
            Py_INCREF(tmp_closure_2[0]);
            tmp_closure_2[1] = Nuitka_Cell_New0(generator_heap->tmp_genexpr_2__$0);

            tmp_args_element_value_20 = MAKE_GENERATOR_kivy$uix$boxlayout$$$function__2__iterate_layout$$$genobj__1__iterate_layout$$$genexpr__2_genexpr(tmp_closure_2);

            goto try_return_handler_34;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_34:;
        CHECK_OBJECT(generator_heap->tmp_genexpr_2__$0);
        Py_DECREF(generator_heap->tmp_genexpr_2__$0);
        generator_heap->tmp_genexpr_2__$0 = NULL;
        goto outline_result_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_2:;
        if (generator_heap->var_hint == NULL) {
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_element_value_19);
            Py_DECREF(tmp_args_element_value_20);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[20]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 253;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_21 = generator_heap->var_hint;
        generator->m_frame->m_frame.f_lineno = 250;
        {
            PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_10, call_args);
        }

        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_19);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 250;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_end_14:;
    branch_no_13:;
    {
        nuitka_bool tmp_condition_result_17;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        CHECK_OBJECT(generator_heap->var_orientation);
        tmp_cmp_expr_left_12 = generator_heap->var_orientation;
        tmp_cmp_expr_right_12 = mod_consts[16];
        tmp_condition_result_17 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
        if (tmp_condition_result_17 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 255;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_assign_source_126;
        PyObject *tmp_add_expr_left_7;
        PyObject *tmp_add_expr_right_7;
        CHECK_OBJECT(generator_heap->var_padding_left);
        tmp_add_expr_left_7 = generator_heap->var_padding_left;
        CHECK_OBJECT(generator_heap->var_selfx);
        tmp_add_expr_right_7 = generator_heap->var_selfx;
        tmp_assign_source_126 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_7, tmp_add_expr_right_7);
        if (tmp_assign_source_126 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 256;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_x == NULL);
        generator_heap->var_x = tmp_assign_source_126;
    }
    {
        PyObject *tmp_assign_source_127;
        PyObject *tmp_sub_expr_left_5;
        PyObject *tmp_sub_expr_right_5;
        PyObject *tmp_expression_value_13;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[12]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 257;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_13 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_sub_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[30]);
        if (tmp_sub_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 257;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (generator_heap->var_padding_y == NULL) {
            Py_DECREF(tmp_sub_expr_left_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[38]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 257;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_sub_expr_right_5 = generator_heap->var_padding_y;
        tmp_assign_source_127 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_5, tmp_sub_expr_right_5);
        Py_DECREF(tmp_sub_expr_left_5);
        if (tmp_assign_source_127 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 257;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_size_y == NULL);
        generator_heap->var_size_y = tmp_assign_source_127;
    }
    {
        PyObject *tmp_assign_source_128;
        PyObject *tmp_iter_arg_20;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_called_value_14;
        PyObject *tmp_args_element_value_26;
        tmp_called_value_11 = (PyObject *)&PyEnum_Type;
        tmp_called_value_12 = (PyObject *)&PyZip_Type;
        tmp_called_value_13 = (PyObject *)&PyReversed_Type;
        if (generator_heap->var_hint == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[20]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 259;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_24 = generator_heap->var_hint;
        generator->m_frame->m_frame.f_lineno = 259;
        tmp_args_element_value_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_24);
        if (tmp_args_element_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 259;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_14 = (PyObject *)&PyReversed_Type;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {
            Py_DECREF(tmp_args_element_value_23);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[11]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 259;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_26 = Nuitka_Cell_GET(generator->m_closure[1]);
        generator->m_frame->m_frame.f_lineno = 259;
        tmp_args_element_value_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_26);
        if (tmp_args_element_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_args_element_value_23);

            generator_heap->exception_lineno = 259;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 259;
        {
            PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_25};
            tmp_args_element_value_22 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_12, call_args);
        }

        Py_DECREF(tmp_args_element_value_23);
        Py_DECREF(tmp_args_element_value_25);
        if (tmp_args_element_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 259;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 258;
        tmp_iter_arg_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_22);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_iter_arg_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 258;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_128 = MAKE_ITERATOR(tstate, tmp_iter_arg_20);
        Py_DECREF(tmp_iter_arg_20);
        if (tmp_assign_source_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 258;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->tmp_for_loop_4__for_iterator == NULL);
        generator_heap->tmp_for_loop_4__for_iterator = tmp_assign_source_128;
    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_129;
        CHECK_OBJECT(generator_heap->tmp_for_loop_4__for_iterator);
        tmp_next_source_4 = generator_heap->tmp_for_loop_4__for_iterator;
        tmp_assign_source_129 = ITERATOR_NEXT(tmp_next_source_4);
        if (tmp_assign_source_129 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
                generator_heap->exception_lineno = 258;
                goto try_except_handler_35;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_4__iter_value;
            generator_heap->tmp_for_loop_4__iter_value = tmp_assign_source_129;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_130;
        PyObject *tmp_iter_arg_21;
        CHECK_OBJECT(generator_heap->tmp_for_loop_4__iter_value);
        tmp_iter_arg_21 = generator_heap->tmp_for_loop_4__iter_value;
        tmp_assign_source_130 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_21);
        if (tmp_assign_source_130 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 258;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_36;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_15__source_iter;
            generator_heap->tmp_tuple_unpack_15__source_iter = tmp_assign_source_130;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_131;
        PyObject *tmp_unpack_37;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_15__source_iter);
        tmp_unpack_37 = generator_heap->tmp_tuple_unpack_15__source_iter;
        tmp_assign_source_131 = UNPACK_NEXT(tstate, tmp_unpack_37, 0, 2);
        if (tmp_assign_source_131 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 258;
            goto try_except_handler_37;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_15__element_1;
            generator_heap->tmp_tuple_unpack_15__element_1 = tmp_assign_source_131;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_unpack_38;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_15__source_iter);
        tmp_unpack_38 = generator_heap->tmp_tuple_unpack_15__source_iter;
        tmp_assign_source_132 = UNPACK_NEXT(tstate, tmp_unpack_38, 1, 2);
        if (tmp_assign_source_132 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 258;
            goto try_except_handler_37;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_15__element_2;
            generator_heap->tmp_tuple_unpack_15__element_2 = tmp_assign_source_132;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_15;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_15__source_iter);
        tmp_iterator_name_15 = generator_heap->tmp_tuple_unpack_15__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_15); assert(HAS_ITERNEXT(tmp_iterator_name_15));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_15)->tp_iternext)(tmp_iterator_name_15);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
                    generator_heap->exception_lineno = 258;
                    goto try_except_handler_37;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[17];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 258;
            goto try_except_handler_37;
        }
    }
    goto try_end_32;
    // Exception handler code:
    try_except_handler_37:;
    generator_heap->exception_keeper_type_32 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_32 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_32 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_32 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_15__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_15__source_iter);
    generator_heap->tmp_tuple_unpack_15__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_32;
    generator_heap->exception_value = generator_heap->exception_keeper_value_32;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_32;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_32;

    goto try_except_handler_36;
    // End of try:
    try_end_32:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_15__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_15__source_iter);
    generator_heap->tmp_tuple_unpack_15__source_iter = NULL;
    {
        PyObject *tmp_assign_source_133;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_15__element_1);
        tmp_assign_source_133 = generator_heap->tmp_tuple_unpack_15__element_1;
        {
            PyObject *old = generator_heap->var_i;
            generator_heap->var_i = tmp_assign_source_133;
            Py_INCREF(generator_heap->var_i);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_15__element_1);
    generator_heap->tmp_tuple_unpack_15__element_1 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_134;
        PyObject *tmp_iter_arg_22;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_15__element_2);
        tmp_iter_arg_22 = generator_heap->tmp_tuple_unpack_15__element_2;
        tmp_assign_source_134 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_22);
        if (tmp_assign_source_134 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 258;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_38;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_16__source_iter;
            generator_heap->tmp_tuple_unpack_16__source_iter = tmp_assign_source_134;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_135;
        PyObject *tmp_unpack_39;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_16__source_iter);
        tmp_unpack_39 = generator_heap->tmp_tuple_unpack_16__source_iter;
        tmp_assign_source_135 = UNPACK_NEXT(tstate, tmp_unpack_39, 0, 2);
        if (tmp_assign_source_135 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 258;
            goto try_except_handler_39;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_16__element_1;
            generator_heap->tmp_tuple_unpack_16__element_1 = tmp_assign_source_135;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_136;
        PyObject *tmp_unpack_40;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_16__source_iter);
        tmp_unpack_40 = generator_heap->tmp_tuple_unpack_16__source_iter;
        tmp_assign_source_136 = UNPACK_NEXT(tstate, tmp_unpack_40, 1, 2);
        if (tmp_assign_source_136 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 258;
            goto try_except_handler_39;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_16__element_2;
            generator_heap->tmp_tuple_unpack_16__element_2 = tmp_assign_source_136;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_16;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_16__source_iter);
        tmp_iterator_name_16 = generator_heap->tmp_tuple_unpack_16__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_16); assert(HAS_ITERNEXT(tmp_iterator_name_16));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_16)->tp_iternext)(tmp_iterator_name_16);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
                    generator_heap->exception_lineno = 258;
                    goto try_except_handler_39;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[17];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 258;
            goto try_except_handler_39;
        }
    }
    goto try_end_33;
    // Exception handler code:
    try_except_handler_39:;
    generator_heap->exception_keeper_type_33 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_33 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_33 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_33 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_16__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_16__source_iter);
    generator_heap->tmp_tuple_unpack_16__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_33;
    generator_heap->exception_value = generator_heap->exception_keeper_value_33;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_33;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_33;

    goto try_except_handler_38;
    // End of try:
    try_end_33:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_16__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_16__source_iter);
    generator_heap->tmp_tuple_unpack_16__source_iter = NULL;
    {
        PyObject *tmp_assign_source_137;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_16__element_1);
        tmp_assign_source_137 = generator_heap->tmp_tuple_unpack_16__element_1;
        {
            PyObject *old = generator_heap->var_sh;
            generator_heap->var_sh = tmp_assign_source_137;
            Py_INCREF(generator_heap->var_sh);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_16__element_1);
    generator_heap->tmp_tuple_unpack_16__element_1 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_138;
        PyObject *tmp_iter_arg_23;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_16__element_2);
        tmp_iter_arg_23 = generator_heap->tmp_tuple_unpack_16__element_2;
        tmp_assign_source_138 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_23);
        if (tmp_assign_source_138 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 258;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_40;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_17__source_iter;
            generator_heap->tmp_tuple_unpack_17__source_iter = tmp_assign_source_138;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_139;
        PyObject *tmp_unpack_41;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_17__source_iter);
        tmp_unpack_41 = generator_heap->tmp_tuple_unpack_17__source_iter;
        tmp_assign_source_139 = UNPACK_NEXT(tstate, tmp_unpack_41, 0, 5);
        if (tmp_assign_source_139 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 258;
            goto try_except_handler_41;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_17__element_1;
            generator_heap->tmp_tuple_unpack_17__element_1 = tmp_assign_source_139;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_140;
        PyObject *tmp_unpack_42;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_17__source_iter);
        tmp_unpack_42 = generator_heap->tmp_tuple_unpack_17__source_iter;
        tmp_assign_source_140 = UNPACK_NEXT(tstate, tmp_unpack_42, 1, 5);
        if (tmp_assign_source_140 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 258;
            goto try_except_handler_41;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_17__element_2;
            generator_heap->tmp_tuple_unpack_17__element_2 = tmp_assign_source_140;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_141;
        PyObject *tmp_unpack_43;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_17__source_iter);
        tmp_unpack_43 = generator_heap->tmp_tuple_unpack_17__source_iter;
        tmp_assign_source_141 = UNPACK_NEXT(tstate, tmp_unpack_43, 2, 5);
        if (tmp_assign_source_141 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 258;
            goto try_except_handler_41;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_17__element_3;
            generator_heap->tmp_tuple_unpack_17__element_3 = tmp_assign_source_141;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_142;
        PyObject *tmp_unpack_44;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_17__source_iter);
        tmp_unpack_44 = generator_heap->tmp_tuple_unpack_17__source_iter;
        tmp_assign_source_142 = UNPACK_NEXT(tstate, tmp_unpack_44, 3, 5);
        if (tmp_assign_source_142 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 258;
            goto try_except_handler_41;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_17__element_4;
            generator_heap->tmp_tuple_unpack_17__element_4 = tmp_assign_source_142;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_143;
        PyObject *tmp_unpack_45;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_17__source_iter);
        tmp_unpack_45 = generator_heap->tmp_tuple_unpack_17__source_iter;
        tmp_assign_source_143 = UNPACK_NEXT(tstate, tmp_unpack_45, 4, 5);
        if (tmp_assign_source_143 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 258;
            goto try_except_handler_41;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_17__element_5;
            generator_heap->tmp_tuple_unpack_17__element_5 = tmp_assign_source_143;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_17;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_17__source_iter);
        tmp_iterator_name_17 = generator_heap->tmp_tuple_unpack_17__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_17); assert(HAS_ITERNEXT(tmp_iterator_name_17));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_17)->tp_iternext)(tmp_iterator_name_17);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
                    generator_heap->exception_lineno = 258;
                    goto try_except_handler_41;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[18];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 258;
            goto try_except_handler_41;
        }
    }
    goto try_end_34;
    // Exception handler code:
    try_except_handler_41:;
    generator_heap->exception_keeper_type_34 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_34 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_34 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_34 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_17__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_17__source_iter);
    generator_heap->tmp_tuple_unpack_17__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_34;
    generator_heap->exception_value = generator_heap->exception_keeper_value_34;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_34;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_34;

    goto try_except_handler_40;
    // End of try:
    try_end_34:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_17__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_17__source_iter);
    generator_heap->tmp_tuple_unpack_17__source_iter = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_144;
        PyObject *tmp_iter_arg_24;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_17__element_1);
        tmp_iter_arg_24 = generator_heap->tmp_tuple_unpack_17__element_1;
        tmp_assign_source_144 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_24);
        if (tmp_assign_source_144 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 258;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_42;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_18__source_iter;
            generator_heap->tmp_tuple_unpack_18__source_iter = tmp_assign_source_144;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_145;
        PyObject *tmp_unpack_46;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_18__source_iter);
        tmp_unpack_46 = generator_heap->tmp_tuple_unpack_18__source_iter;
        tmp_assign_source_145 = UNPACK_NEXT(tstate, tmp_unpack_46, 0, 2);
        if (tmp_assign_source_145 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 258;
            goto try_except_handler_43;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_18__element_1;
            generator_heap->tmp_tuple_unpack_18__element_1 = tmp_assign_source_145;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_146;
        PyObject *tmp_unpack_47;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_18__source_iter);
        tmp_unpack_47 = generator_heap->tmp_tuple_unpack_18__source_iter;
        tmp_assign_source_146 = UNPACK_NEXT(tstate, tmp_unpack_47, 1, 2);
        if (tmp_assign_source_146 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 258;
            goto try_except_handler_43;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_18__element_2;
            generator_heap->tmp_tuple_unpack_18__element_2 = tmp_assign_source_146;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_18;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_18__source_iter);
        tmp_iterator_name_18 = generator_heap->tmp_tuple_unpack_18__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_18); assert(HAS_ITERNEXT(tmp_iterator_name_18));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_18)->tp_iternext)(tmp_iterator_name_18);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
                    generator_heap->exception_lineno = 258;
                    goto try_except_handler_43;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[17];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 258;
            goto try_except_handler_43;
        }
    }
    goto try_end_35;
    // Exception handler code:
    try_except_handler_43:;
    generator_heap->exception_keeper_type_35 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_35 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_35 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_35 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_18__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_18__source_iter);
    generator_heap->tmp_tuple_unpack_18__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_35;
    generator_heap->exception_value = generator_heap->exception_keeper_value_35;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_35;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_35;

    goto try_except_handler_42;
    // End of try:
    try_end_35:;
    goto try_end_36;
    // Exception handler code:
    try_except_handler_42:;
    generator_heap->exception_keeper_type_36 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_36 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_36 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_36 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_18__element_1);
    generator_heap->tmp_tuple_unpack_18__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_18__element_2);
    generator_heap->tmp_tuple_unpack_18__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_36;
    generator_heap->exception_value = generator_heap->exception_keeper_value_36;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_36;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_36;

    goto try_except_handler_40;
    // End of try:
    try_end_36:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_18__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_18__source_iter);
    generator_heap->tmp_tuple_unpack_18__source_iter = NULL;
    {
        PyObject *tmp_assign_source_147;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_18__element_1);
        tmp_assign_source_147 = generator_heap->tmp_tuple_unpack_18__element_1;
        {
            PyObject *old = generator_heap->var_w;
            generator_heap->var_w = tmp_assign_source_147;
            Py_INCREF(generator_heap->var_w);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_18__element_1);
    generator_heap->tmp_tuple_unpack_18__element_1 = NULL;

    {
        PyObject *tmp_assign_source_148;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_18__element_2);
        tmp_assign_source_148 = generator_heap->tmp_tuple_unpack_18__element_2;
        {
            PyObject *old = generator_heap->var_h;
            generator_heap->var_h = tmp_assign_source_148;
            Py_INCREF(generator_heap->var_h);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_18__element_2);
    generator_heap->tmp_tuple_unpack_18__element_2 = NULL;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_17__element_1);
    generator_heap->tmp_tuple_unpack_17__element_1 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_149;
        PyObject *tmp_iter_arg_25;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_17__element_2);
        tmp_iter_arg_25 = generator_heap->tmp_tuple_unpack_17__element_2;
        tmp_assign_source_149 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_25);
        if (tmp_assign_source_149 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 258;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_44;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_19__source_iter;
            generator_heap->tmp_tuple_unpack_19__source_iter = tmp_assign_source_149;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_150;
        PyObject *tmp_unpack_48;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_19__source_iter);
        tmp_unpack_48 = generator_heap->tmp_tuple_unpack_19__source_iter;
        tmp_assign_source_150 = UNPACK_NEXT(tstate, tmp_unpack_48, 0, 2);
        if (tmp_assign_source_150 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 258;
            goto try_except_handler_45;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_19__element_1;
            generator_heap->tmp_tuple_unpack_19__element_1 = tmp_assign_source_150;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_151;
        PyObject *tmp_unpack_49;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_19__source_iter);
        tmp_unpack_49 = generator_heap->tmp_tuple_unpack_19__source_iter;
        tmp_assign_source_151 = UNPACK_NEXT(tstate, tmp_unpack_49, 1, 2);
        if (tmp_assign_source_151 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 258;
            goto try_except_handler_45;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_19__element_2;
            generator_heap->tmp_tuple_unpack_19__element_2 = tmp_assign_source_151;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_19;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_19__source_iter);
        tmp_iterator_name_19 = generator_heap->tmp_tuple_unpack_19__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_19); assert(HAS_ITERNEXT(tmp_iterator_name_19));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_19)->tp_iternext)(tmp_iterator_name_19);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
                    generator_heap->exception_lineno = 258;
                    goto try_except_handler_45;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[17];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 258;
            goto try_except_handler_45;
        }
    }
    goto try_end_37;
    // Exception handler code:
    try_except_handler_45:;
    generator_heap->exception_keeper_type_37 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_37 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_37 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_37 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_19__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_19__source_iter);
    generator_heap->tmp_tuple_unpack_19__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_37;
    generator_heap->exception_value = generator_heap->exception_keeper_value_37;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_37;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_37;

    goto try_except_handler_44;
    // End of try:
    try_end_37:;
    goto try_end_38;
    // Exception handler code:
    try_except_handler_44:;
    generator_heap->exception_keeper_type_38 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_38 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_38 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_38 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_19__element_1);
    generator_heap->tmp_tuple_unpack_19__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_19__element_2);
    generator_heap->tmp_tuple_unpack_19__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_38;
    generator_heap->exception_value = generator_heap->exception_keeper_value_38;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_38;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_38;

    goto try_except_handler_40;
    // End of try:
    try_end_38:;
    goto try_end_39;
    // Exception handler code:
    try_except_handler_40:;
    generator_heap->exception_keeper_type_39 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_39 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_39 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_39 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_17__element_1);
    generator_heap->tmp_tuple_unpack_17__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_17__element_2);
    generator_heap->tmp_tuple_unpack_17__element_2 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_17__element_3);
    generator_heap->tmp_tuple_unpack_17__element_3 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_17__element_4);
    generator_heap->tmp_tuple_unpack_17__element_4 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_17__element_5);
    generator_heap->tmp_tuple_unpack_17__element_5 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_39;
    generator_heap->exception_value = generator_heap->exception_keeper_value_39;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_39;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_39;

    goto try_except_handler_38;
    // End of try:
    try_end_39:;
    goto try_end_40;
    // Exception handler code:
    try_except_handler_38:;
    generator_heap->exception_keeper_type_40 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_40 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_40 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_40 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_16__element_1);
    generator_heap->tmp_tuple_unpack_16__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_16__element_2);
    generator_heap->tmp_tuple_unpack_16__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_40;
    generator_heap->exception_value = generator_heap->exception_keeper_value_40;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_40;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_40;

    goto try_except_handler_36;
    // End of try:
    try_end_40:;
    goto try_end_41;
    // Exception handler code:
    try_except_handler_36:;
    generator_heap->exception_keeper_type_41 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_41 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_41 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_41 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_15__element_1);
    generator_heap->tmp_tuple_unpack_15__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_15__element_2);
    generator_heap->tmp_tuple_unpack_15__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_41;
    generator_heap->exception_value = generator_heap->exception_keeper_value_41;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_41;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_41;

    goto try_except_handler_35;
    // End of try:
    try_end_41:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_19__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_19__source_iter);
    generator_heap->tmp_tuple_unpack_19__source_iter = NULL;
    {
        PyObject *tmp_assign_source_152;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_19__element_1);
        tmp_assign_source_152 = generator_heap->tmp_tuple_unpack_19__element_1;
        {
            PyObject *old = generator_heap->var__;
            generator_heap->var__ = tmp_assign_source_152;
            Py_INCREF(generator_heap->var__);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_19__element_1);
    generator_heap->tmp_tuple_unpack_19__element_1 = NULL;

    {
        PyObject *tmp_assign_source_153;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_19__element_2);
        tmp_assign_source_153 = generator_heap->tmp_tuple_unpack_19__element_2;
        {
            PyObject *old = generator_heap->var_shh;
            generator_heap->var_shh = tmp_assign_source_153;
            Py_INCREF(generator_heap->var_shh);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_19__element_2);
    generator_heap->tmp_tuple_unpack_19__element_2 = NULL;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_17__element_2);
    generator_heap->tmp_tuple_unpack_17__element_2 = NULL;

    {
        PyObject *tmp_assign_source_154;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_17__element_3);
        tmp_assign_source_154 = generator_heap->tmp_tuple_unpack_17__element_3;
        {
            PyObject *old = generator_heap->var_pos_hint;
            generator_heap->var_pos_hint = tmp_assign_source_154;
            Py_INCREF(generator_heap->var_pos_hint);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_17__element_3);
    generator_heap->tmp_tuple_unpack_17__element_3 = NULL;

    {
        PyObject *tmp_assign_source_155;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_17__element_4);
        tmp_assign_source_155 = generator_heap->tmp_tuple_unpack_17__element_4;
        {
            PyObject *old = generator_heap->var__;
            assert(old != NULL);
            generator_heap->var__ = tmp_assign_source_155;
            Py_INCREF(generator_heap->var__);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_17__element_4);
    generator_heap->tmp_tuple_unpack_17__element_4 = NULL;

    {
        PyObject *tmp_assign_source_156;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_17__element_5);
        tmp_assign_source_156 = generator_heap->tmp_tuple_unpack_17__element_5;
        {
            PyObject *old = generator_heap->var__;
            assert(old != NULL);
            generator_heap->var__ = tmp_assign_source_156;
            Py_INCREF(generator_heap->var__);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_17__element_5);
    generator_heap->tmp_tuple_unpack_17__element_5 = NULL;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_16__element_2);
    generator_heap->tmp_tuple_unpack_16__element_2 = NULL;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_15__element_2);
    generator_heap->tmp_tuple_unpack_15__element_2 = NULL;

    {
        PyObject *tmp_assign_source_157;
        PyObject *tmp_add_expr_left_8;
        PyObject *tmp_add_expr_right_8;
        if (generator_heap->var_selfy == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[39]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 260;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_35;
        }

        tmp_add_expr_left_8 = generator_heap->var_selfy;
        if (generator_heap->var_padding_bottom == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[40]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 260;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_35;
        }

        tmp_add_expr_right_8 = generator_heap->var_padding_bottom;
        tmp_assign_source_157 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_8, tmp_add_expr_right_8);
        if (tmp_assign_source_157 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 260;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_35;
        }
        {
            PyObject *old = generator_heap->var_cy;
            generator_heap->var_cy = tmp_assign_source_157;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_18;
        int tmp_truth_name_6;
        CHECK_OBJECT(generator_heap->var_sh);
        tmp_truth_name_6 = CHECK_IF_TRUE(generator_heap->var_sh);
        if (tmp_truth_name_6 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 262;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_35;
        }
        tmp_condition_result_18 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_assign_source_158;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_mult_expr_left_4;
        PyObject *tmp_mult_expr_right_4;
        tmp_called_value_15 = LOOKUP_BUILTIN(mod_consts[23]);
        assert(tmp_called_value_15 != NULL);
        tmp_args_element_value_27 = mod_consts[14];
        if (generator_heap->var_stretch_space == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[41]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 263;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_35;
        }

        tmp_mult_expr_left_4 = generator_heap->var_stretch_space;
        CHECK_OBJECT(generator_heap->var_sh);
        tmp_mult_expr_right_4 = generator_heap->var_sh;
        tmp_truediv_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 263;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_35;
        }
        if (generator_heap->var_stretch_sum == NULL) {
            Py_DECREF(tmp_truediv_expr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[22]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 263;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_35;
        }

        tmp_truediv_expr_right_1 = generator_heap->var_stretch_sum;
        tmp_args_element_value_28 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        if (tmp_args_element_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 263;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_35;
        }
        generator->m_frame->m_frame.f_lineno = 263;
        {
            PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_28};
            tmp_assign_source_158 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_15, call_args);
        }

        Py_DECREF(tmp_args_element_value_28);
        if (tmp_assign_source_158 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 263;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_35;
        }
        {
            PyObject *old = generator_heap->var_w;
            assert(old != NULL);
            generator_heap->var_w = tmp_assign_source_158;
            Py_DECREF(old);
        }

    }
    branch_no_18:;
    {
        nuitka_bool tmp_condition_result_19;
        int tmp_truth_name_7;
        CHECK_OBJECT(generator_heap->var_shh);
        tmp_truth_name_7 = CHECK_IF_TRUE(generator_heap->var_shh);
        if (tmp_truth_name_7 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 264;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_35;
        }
        tmp_condition_result_19 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_assign_source_159;
        PyObject *tmp_called_value_16;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_mult_expr_left_5;
        PyObject *tmp_mult_expr_right_5;
        tmp_called_value_16 = LOOKUP_BUILTIN(mod_consts[23]);
        assert(tmp_called_value_16 != NULL);
        tmp_args_element_value_29 = mod_consts[15];
        CHECK_OBJECT(generator_heap->var_shh);
        tmp_mult_expr_left_5 = generator_heap->var_shh;
        if (generator_heap->var_size_y == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[42]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 265;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_35;
        }

        tmp_mult_expr_right_5 = generator_heap->var_size_y;
        tmp_args_element_value_30 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
        if (tmp_args_element_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 265;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_35;
        }
        generator->m_frame->m_frame.f_lineno = 265;
        {
            PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30};
            tmp_assign_source_159 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_16, call_args);
        }

        Py_DECREF(tmp_args_element_value_30);
        if (tmp_assign_source_159 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 265;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_35;
        }
        {
            PyObject *old = generator_heap->var_h;
            assert(old != NULL);
            generator_heap->var_h = tmp_assign_source_159;
            Py_DECREF(old);
        }

    }
    branch_no_19:;
    {
        PyObject *tmp_assign_source_160;
        PyObject *tmp_iter_arg_26;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(generator_heap->var_pos_hint);
        tmp_expression_value_14 = generator_heap->var_pos_hint;
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[43]);
        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 267;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_35;
        }
        generator->m_frame->m_frame.f_lineno = 267;
        tmp_iter_arg_26 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_17);
        Py_DECREF(tmp_called_value_17);
        if (tmp_iter_arg_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 267;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_35;
        }
        tmp_assign_source_160 = MAKE_ITERATOR(tstate, tmp_iter_arg_26);
        Py_DECREF(tmp_iter_arg_26);
        if (tmp_assign_source_160 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 267;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_35;
        }
        {
            PyObject *old = generator_heap->tmp_for_loop_5__for_iterator;
            generator_heap->tmp_for_loop_5__for_iterator = tmp_assign_source_160;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_5:;
    {
        PyObject *tmp_next_source_5;
        PyObject *tmp_assign_source_161;
        CHECK_OBJECT(generator_heap->tmp_for_loop_5__for_iterator);
        tmp_next_source_5 = generator_heap->tmp_for_loop_5__for_iterator;
        tmp_assign_source_161 = ITERATOR_NEXT(tmp_next_source_5);
        if (tmp_assign_source_161 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_5;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
                generator_heap->exception_lineno = 267;
                goto try_except_handler_46;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_5__iter_value;
            generator_heap->tmp_for_loop_5__iter_value = tmp_assign_source_161;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_162;
        PyObject *tmp_iter_arg_27;
        CHECK_OBJECT(generator_heap->tmp_for_loop_5__iter_value);
        tmp_iter_arg_27 = generator_heap->tmp_for_loop_5__iter_value;
        tmp_assign_source_162 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_27);
        if (tmp_assign_source_162 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 267;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_47;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_20__source_iter;
            generator_heap->tmp_tuple_unpack_20__source_iter = tmp_assign_source_162;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_163;
        PyObject *tmp_unpack_50;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_20__source_iter);
        tmp_unpack_50 = generator_heap->tmp_tuple_unpack_20__source_iter;
        tmp_assign_source_163 = UNPACK_NEXT(tstate, tmp_unpack_50, 0, 2);
        if (tmp_assign_source_163 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 267;
            goto try_except_handler_48;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_20__element_1;
            generator_heap->tmp_tuple_unpack_20__element_1 = tmp_assign_source_163;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_164;
        PyObject *tmp_unpack_51;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_20__source_iter);
        tmp_unpack_51 = generator_heap->tmp_tuple_unpack_20__source_iter;
        tmp_assign_source_164 = UNPACK_NEXT(tstate, tmp_unpack_51, 1, 2);
        if (tmp_assign_source_164 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 267;
            goto try_except_handler_48;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_20__element_2;
            generator_heap->tmp_tuple_unpack_20__element_2 = tmp_assign_source_164;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_20;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_20__source_iter);
        tmp_iterator_name_20 = generator_heap->tmp_tuple_unpack_20__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_20); assert(HAS_ITERNEXT(tmp_iterator_name_20));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_20)->tp_iternext)(tmp_iterator_name_20);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
                    generator_heap->exception_lineno = 267;
                    goto try_except_handler_48;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[17];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 267;
            goto try_except_handler_48;
        }
    }
    goto try_end_42;
    // Exception handler code:
    try_except_handler_48:;
    generator_heap->exception_keeper_type_42 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_42 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_42 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_42 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_20__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_20__source_iter);
    generator_heap->tmp_tuple_unpack_20__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_42;
    generator_heap->exception_value = generator_heap->exception_keeper_value_42;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_42;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_42;

    goto try_except_handler_47;
    // End of try:
    try_end_42:;
    goto try_end_43;
    // Exception handler code:
    try_except_handler_47:;
    generator_heap->exception_keeper_type_43 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_43 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_43 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_43 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_20__element_1);
    generator_heap->tmp_tuple_unpack_20__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_20__element_2);
    generator_heap->tmp_tuple_unpack_20__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_43;
    generator_heap->exception_value = generator_heap->exception_keeper_value_43;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_43;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_43;

    goto try_except_handler_46;
    // End of try:
    try_end_43:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_20__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_20__source_iter);
    generator_heap->tmp_tuple_unpack_20__source_iter = NULL;
    {
        PyObject *tmp_assign_source_165;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_20__element_1);
        tmp_assign_source_165 = generator_heap->tmp_tuple_unpack_20__element_1;
        {
            PyObject *old = generator_heap->var_key;
            generator_heap->var_key = tmp_assign_source_165;
            Py_INCREF(generator_heap->var_key);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_20__element_1);
    generator_heap->tmp_tuple_unpack_20__element_1 = NULL;

    {
        PyObject *tmp_assign_source_166;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_20__element_2);
        tmp_assign_source_166 = generator_heap->tmp_tuple_unpack_20__element_2;
        {
            PyObject *old = generator_heap->var_value;
            generator_heap->var_value = tmp_assign_source_166;
            Py_INCREF(generator_heap->var_value);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_20__element_2);
    generator_heap->tmp_tuple_unpack_20__element_2 = NULL;

    {
        PyObject *tmp_assign_source_167;
        PyObject *tmp_mult_expr_left_6;
        PyObject *tmp_mult_expr_right_6;
        CHECK_OBJECT(generator_heap->var_value);
        tmp_mult_expr_left_6 = generator_heap->var_value;
        if (generator_heap->var_size_y == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[42]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 268;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_46;
        }

        tmp_mult_expr_right_6 = generator_heap->var_size_y;
        tmp_assign_source_167 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_6, tmp_mult_expr_right_6);
        if (tmp_assign_source_167 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 268;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_46;
        }
        {
            PyObject *old = generator_heap->var_posy;
            generator_heap->var_posy = tmp_assign_source_167;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_20;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        CHECK_OBJECT(generator_heap->var_key);
        tmp_cmp_expr_left_13 = generator_heap->var_key;
        tmp_cmp_expr_right_13 = mod_consts[28];
        tmp_condition_result_20 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
        if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 269;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_46;
        }
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_assign_source_168;
        PyObject *tmp_iadd_expr_left_9;
        PyObject *tmp_iadd_expr_right_9;
        if (generator_heap->var_cy == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[44]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 270;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_46;
        }

        tmp_iadd_expr_left_9 = generator_heap->var_cy;
        CHECK_OBJECT(generator_heap->var_posy);
        tmp_iadd_expr_right_9 = generator_heap->var_posy;
        generator_heap->tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_9, tmp_iadd_expr_right_9);
        if (generator_heap->tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 270;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_46;
        }
        tmp_assign_source_168 = tmp_iadd_expr_left_9;
        generator_heap->var_cy = tmp_assign_source_168;

    }
    goto branch_end_20;
    branch_no_20:;
    {
        nuitka_bool tmp_condition_result_21;
        PyObject *tmp_cmp_expr_left_14;
        PyObject *tmp_cmp_expr_right_14;
        CHECK_OBJECT(generator_heap->var_key);
        tmp_cmp_expr_left_14 = generator_heap->var_key;
        tmp_cmp_expr_right_14 = mod_consts[45];
        tmp_condition_result_21 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
        if (tmp_condition_result_21 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 271;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_46;
        }
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    {
        PyObject *tmp_assign_source_169;
        PyObject *tmp_iadd_expr_left_10;
        PyObject *tmp_iadd_expr_right_10;
        PyObject *tmp_sub_expr_left_6;
        PyObject *tmp_sub_expr_right_6;
        if (generator_heap->var_cy == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[44]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 272;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_46;
        }

        tmp_iadd_expr_left_10 = generator_heap->var_cy;
        CHECK_OBJECT(generator_heap->var_posy);
        tmp_sub_expr_left_6 = generator_heap->var_posy;
        if (generator_heap->var_h == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[46]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 272;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_46;
        }

        tmp_sub_expr_right_6 = generator_heap->var_h;
        tmp_iadd_expr_right_10 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_6, tmp_sub_expr_right_6);
        if (tmp_iadd_expr_right_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 272;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_46;
        }
        generator_heap->tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_10, tmp_iadd_expr_right_10);
        Py_DECREF(tmp_iadd_expr_right_10);
        if (generator_heap->tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 272;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_46;
        }
        tmp_assign_source_169 = tmp_iadd_expr_left_10;
        generator_heap->var_cy = tmp_assign_source_169;

    }
    goto branch_end_21;
    branch_no_21:;
    {
        nuitka_bool tmp_condition_result_22;
        PyObject *tmp_cmp_expr_left_15;
        PyObject *tmp_cmp_expr_right_15;
        CHECK_OBJECT(generator_heap->var_key);
        tmp_cmp_expr_left_15 = generator_heap->var_key;
        tmp_cmp_expr_right_15 = mod_consts[47];
        tmp_condition_result_22 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
        if (tmp_condition_result_22 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 273;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_46;
        }
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_assign_source_170;
        PyObject *tmp_iadd_expr_left_11;
        PyObject *tmp_iadd_expr_right_11;
        PyObject *tmp_sub_expr_left_7;
        PyObject *tmp_sub_expr_right_7;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        if (generator_heap->var_cy == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[44]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 274;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_46;
        }

        tmp_iadd_expr_left_11 = generator_heap->var_cy;
        CHECK_OBJECT(generator_heap->var_posy);
        tmp_sub_expr_left_7 = generator_heap->var_posy;
        if (generator_heap->var_h == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[46]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 274;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_46;
        }

        tmp_truediv_expr_left_2 = generator_heap->var_h;
        tmp_truediv_expr_right_2 = mod_consts[48];
        tmp_sub_expr_right_7 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        if (tmp_sub_expr_right_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 274;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_46;
        }
        tmp_iadd_expr_right_11 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_7, tmp_sub_expr_right_7);
        Py_DECREF(tmp_sub_expr_right_7);
        if (tmp_iadd_expr_right_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 274;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_46;
        }
        generator_heap->tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_11, tmp_iadd_expr_right_11);
        Py_DECREF(tmp_iadd_expr_right_11);
        if (generator_heap->tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 274;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_46;
        }
        tmp_assign_source_170 = tmp_iadd_expr_left_11;
        generator_heap->var_cy = tmp_assign_source_170;

    }
    branch_no_22:;
    branch_end_21:;
    branch_end_20:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 267;
        generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
        goto try_except_handler_46;
    }
    goto loop_start_5;
    loop_end_5:;
    goto try_end_44;
    // Exception handler code:
    try_except_handler_46:;
    generator_heap->exception_keeper_type_44 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_44 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_44 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_44 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_for_loop_5__iter_value);
    generator_heap->tmp_for_loop_5__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_5__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_5__for_iterator);
    generator_heap->tmp_for_loop_5__for_iterator = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_44;
    generator_heap->exception_value = generator_heap->exception_keeper_value_44;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_44;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_44;

    goto try_except_handler_35;
    // End of try:
    try_end_44:;
    Py_XDECREF(generator_heap->tmp_for_loop_5__iter_value);
    generator_heap->tmp_for_loop_5__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_5__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_5__for_iterator);
    generator_heap->tmp_for_loop_5__for_iterator = NULL;
    {
        PyObject *tmp_expression_value_15;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_sub_expr_left_8;
        PyObject *tmp_sub_expr_right_8;
        PyObject *tmp_sub_expr_left_9;
        PyObject *tmp_sub_expr_right_9;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        if (generator_heap->var_len_children == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[49]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 276;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_35;
        }

        tmp_sub_expr_left_9 = generator_heap->var_len_children;
        CHECK_OBJECT(generator_heap->var_i);
        tmp_sub_expr_right_9 = generator_heap->var_i;
        tmp_sub_expr_left_8 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_9, tmp_sub_expr_right_9);
        if (tmp_sub_expr_left_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 276;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_35;
        }
        tmp_sub_expr_right_8 = mod_consts[31];
        tmp_tuple_element_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_8, tmp_sub_expr_right_8);
        Py_DECREF(tmp_sub_expr_left_8);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 276;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_35;
        }
        tmp_expression_value_15 = MAKE_TUPLE_EMPTY(5);
        PyTuple_SET_ITEM(tmp_expression_value_15, 0, tmp_tuple_element_2);
        if (generator_heap->var_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[27]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 276;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_2 = generator_heap->var_x;
        PyTuple_SET_ITEM0(tmp_expression_value_15, 1, tmp_tuple_element_2);
        if (generator_heap->var_cy == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[44]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 276;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_2 = generator_heap->var_cy;
        PyTuple_SET_ITEM0(tmp_expression_value_15, 2, tmp_tuple_element_2);
        CHECK_OBJECT(generator_heap->var_w);
        tmp_tuple_element_2 = generator_heap->var_w;
        PyTuple_SET_ITEM0(tmp_expression_value_15, 3, tmp_tuple_element_2);
        if (generator_heap->var_h == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[46]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 276;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_2 = generator_heap->var_h;
        PyTuple_SET_ITEM0(tmp_expression_value_15, 4, tmp_tuple_element_2);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_expression_value_15);
        goto try_except_handler_35;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_2, sizeof(PyObject *), &tmp_sub_expr_left_8, sizeof(PyObject *), &tmp_sub_expr_right_8, sizeof(PyObject *), &tmp_sub_expr_left_9, sizeof(PyObject *), &tmp_sub_expr_right_9, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_15;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_2, sizeof(PyObject *), &tmp_sub_expr_left_8, sizeof(PyObject *), &tmp_sub_expr_right_8, sizeof(PyObject *), &tmp_sub_expr_left_9, sizeof(PyObject *), &tmp_sub_expr_right_9, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 276;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_35;
        }
        tmp_yield_result_1 = yield_return_value;
        Py_DECREF(tmp_yield_result_1);
    }
    {
        PyObject *tmp_assign_source_171;
        PyObject *tmp_iadd_expr_left_12;
        PyObject *tmp_iadd_expr_right_12;
        PyObject *tmp_add_expr_left_9;
        PyObject *tmp_add_expr_right_9;
        if (generator_heap->var_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[27]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 277;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_35;
        }

        tmp_iadd_expr_left_12 = generator_heap->var_x;
        CHECK_OBJECT(generator_heap->var_w);
        tmp_add_expr_left_9 = generator_heap->var_w;
        if (generator_heap->var_spacing == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[4]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 277;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_35;
        }

        tmp_add_expr_right_9 = generator_heap->var_spacing;
        tmp_iadd_expr_right_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_9, tmp_add_expr_right_9);
        if (tmp_iadd_expr_right_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 277;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_35;
        }
        generator_heap->tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_12, tmp_iadd_expr_right_12);
        Py_DECREF(tmp_iadd_expr_right_12);
        if (generator_heap->tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 277;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_35;
        }
        tmp_assign_source_171 = tmp_iadd_expr_left_12;
        generator_heap->var_x = tmp_assign_source_171;

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 258;
        generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
        goto try_except_handler_35;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_45;
    // Exception handler code:
    try_except_handler_35:;
    generator_heap->exception_keeper_type_45 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_45 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_45 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_45 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_for_loop_4__iter_value);
    generator_heap->tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_4__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_4__for_iterator);
    generator_heap->tmp_for_loop_4__for_iterator = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_45;
    generator_heap->exception_value = generator_heap->exception_keeper_value_45;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_45;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_45;

    goto frame_exception_exit_1;
    // End of try:
    try_end_45:;
    Py_XDECREF(generator_heap->tmp_for_loop_4__iter_value);
    generator_heap->tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_4__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_4__for_iterator);
    generator_heap->tmp_for_loop_4__for_iterator = NULL;
    goto branch_end_17;
    branch_no_17:;
    {
        PyObject *tmp_assign_source_172;
        PyObject *tmp_add_expr_left_10;
        PyObject *tmp_add_expr_right_10;
        CHECK_OBJECT(generator_heap->var_padding_bottom);
        tmp_add_expr_left_10 = generator_heap->var_padding_bottom;
        CHECK_OBJECT(generator_heap->var_selfy);
        tmp_add_expr_right_10 = generator_heap->var_selfy;
        tmp_assign_source_172 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_10, tmp_add_expr_right_10);
        if (tmp_assign_source_172 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 280;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_y == NULL);
        generator_heap->var_y = tmp_assign_source_172;
    }
    {
        PyObject *tmp_assign_source_173;
        PyObject *tmp_sub_expr_left_10;
        PyObject *tmp_sub_expr_right_10;
        PyObject *tmp_expression_value_16;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[12]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 281;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_16 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_sub_expr_left_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[29]);
        if (tmp_sub_expr_left_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 281;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (generator_heap->var_padding_x == NULL) {
            Py_DECREF(tmp_sub_expr_left_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[50]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 281;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_sub_expr_right_10 = generator_heap->var_padding_x;
        tmp_assign_source_173 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_10, tmp_sub_expr_right_10);
        Py_DECREF(tmp_sub_expr_left_10);
        if (tmp_assign_source_173 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 281;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_size_x == NULL);
        generator_heap->var_size_x = tmp_assign_source_173;
    }
    {
        PyObject *tmp_assign_source_174;
        PyObject *tmp_iter_arg_28;
        PyObject *tmp_called_value_18;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_called_value_19;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_args_element_value_33;
        tmp_called_value_18 = (PyObject *)&PyEnum_Type;
        tmp_called_value_19 = (PyObject *)&PyZip_Type;
        if (generator_heap->var_hint == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[20]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 283;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_32 = generator_heap->var_hint;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[11]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 283;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_33 = Nuitka_Cell_GET(generator->m_closure[1]);
        generator->m_frame->m_frame.f_lineno = 283;
        {
            PyObject *call_args[] = {tmp_args_element_value_32, tmp_args_element_value_33};
            tmp_args_element_value_31 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_19, call_args);
        }

        if (tmp_args_element_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 283;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 282;
        tmp_iter_arg_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_31);
        Py_DECREF(tmp_args_element_value_31);
        if (tmp_iter_arg_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 282;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_174 = MAKE_ITERATOR(tstate, tmp_iter_arg_28);
        Py_DECREF(tmp_iter_arg_28);
        if (tmp_assign_source_174 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 282;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->tmp_for_loop_6__for_iterator == NULL);
        generator_heap->tmp_for_loop_6__for_iterator = tmp_assign_source_174;
    }
    // Tried code:
    loop_start_6:;
    {
        PyObject *tmp_next_source_6;
        PyObject *tmp_assign_source_175;
        CHECK_OBJECT(generator_heap->tmp_for_loop_6__for_iterator);
        tmp_next_source_6 = generator_heap->tmp_for_loop_6__for_iterator;
        tmp_assign_source_175 = ITERATOR_NEXT(tmp_next_source_6);
        if (tmp_assign_source_175 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_6;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
                generator_heap->exception_lineno = 282;
                goto try_except_handler_49;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_6__iter_value;
            generator_heap->tmp_for_loop_6__iter_value = tmp_assign_source_175;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_176;
        PyObject *tmp_iter_arg_29;
        CHECK_OBJECT(generator_heap->tmp_for_loop_6__iter_value);
        tmp_iter_arg_29 = generator_heap->tmp_for_loop_6__iter_value;
        tmp_assign_source_176 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_29);
        if (tmp_assign_source_176 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 282;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_50;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_21__source_iter;
            generator_heap->tmp_tuple_unpack_21__source_iter = tmp_assign_source_176;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_177;
        PyObject *tmp_unpack_52;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_21__source_iter);
        tmp_unpack_52 = generator_heap->tmp_tuple_unpack_21__source_iter;
        tmp_assign_source_177 = UNPACK_NEXT(tstate, tmp_unpack_52, 0, 2);
        if (tmp_assign_source_177 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 282;
            goto try_except_handler_51;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_21__element_1;
            generator_heap->tmp_tuple_unpack_21__element_1 = tmp_assign_source_177;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_178;
        PyObject *tmp_unpack_53;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_21__source_iter);
        tmp_unpack_53 = generator_heap->tmp_tuple_unpack_21__source_iter;
        tmp_assign_source_178 = UNPACK_NEXT(tstate, tmp_unpack_53, 1, 2);
        if (tmp_assign_source_178 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 282;
            goto try_except_handler_51;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_21__element_2;
            generator_heap->tmp_tuple_unpack_21__element_2 = tmp_assign_source_178;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_21;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_21__source_iter);
        tmp_iterator_name_21 = generator_heap->tmp_tuple_unpack_21__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_21); assert(HAS_ITERNEXT(tmp_iterator_name_21));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_21)->tp_iternext)(tmp_iterator_name_21);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
                    generator_heap->exception_lineno = 282;
                    goto try_except_handler_51;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[17];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 282;
            goto try_except_handler_51;
        }
    }
    goto try_end_46;
    // Exception handler code:
    try_except_handler_51:;
    generator_heap->exception_keeper_type_46 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_46 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_46 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_46 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_21__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_21__source_iter);
    generator_heap->tmp_tuple_unpack_21__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_46;
    generator_heap->exception_value = generator_heap->exception_keeper_value_46;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_46;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_46;

    goto try_except_handler_50;
    // End of try:
    try_end_46:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_21__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_21__source_iter);
    generator_heap->tmp_tuple_unpack_21__source_iter = NULL;
    {
        PyObject *tmp_assign_source_179;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_21__element_1);
        tmp_assign_source_179 = generator_heap->tmp_tuple_unpack_21__element_1;
        {
            PyObject *old = generator_heap->var_i;
            generator_heap->var_i = tmp_assign_source_179;
            Py_INCREF(generator_heap->var_i);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_21__element_1);
    generator_heap->tmp_tuple_unpack_21__element_1 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_180;
        PyObject *tmp_iter_arg_30;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_21__element_2);
        tmp_iter_arg_30 = generator_heap->tmp_tuple_unpack_21__element_2;
        tmp_assign_source_180 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_30);
        if (tmp_assign_source_180 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 282;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_52;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_22__source_iter;
            generator_heap->tmp_tuple_unpack_22__source_iter = tmp_assign_source_180;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_181;
        PyObject *tmp_unpack_54;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_22__source_iter);
        tmp_unpack_54 = generator_heap->tmp_tuple_unpack_22__source_iter;
        tmp_assign_source_181 = UNPACK_NEXT(tstate, tmp_unpack_54, 0, 2);
        if (tmp_assign_source_181 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 282;
            goto try_except_handler_53;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_22__element_1;
            generator_heap->tmp_tuple_unpack_22__element_1 = tmp_assign_source_181;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_182;
        PyObject *tmp_unpack_55;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_22__source_iter);
        tmp_unpack_55 = generator_heap->tmp_tuple_unpack_22__source_iter;
        tmp_assign_source_182 = UNPACK_NEXT(tstate, tmp_unpack_55, 1, 2);
        if (tmp_assign_source_182 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 282;
            goto try_except_handler_53;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_22__element_2;
            generator_heap->tmp_tuple_unpack_22__element_2 = tmp_assign_source_182;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_22;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_22__source_iter);
        tmp_iterator_name_22 = generator_heap->tmp_tuple_unpack_22__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_22); assert(HAS_ITERNEXT(tmp_iterator_name_22));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_22)->tp_iternext)(tmp_iterator_name_22);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
                    generator_heap->exception_lineno = 282;
                    goto try_except_handler_53;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[17];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 282;
            goto try_except_handler_53;
        }
    }
    goto try_end_47;
    // Exception handler code:
    try_except_handler_53:;
    generator_heap->exception_keeper_type_47 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_47 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_47 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_47 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_22__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_22__source_iter);
    generator_heap->tmp_tuple_unpack_22__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_47;
    generator_heap->exception_value = generator_heap->exception_keeper_value_47;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_47;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_47;

    goto try_except_handler_52;
    // End of try:
    try_end_47:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_22__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_22__source_iter);
    generator_heap->tmp_tuple_unpack_22__source_iter = NULL;
    {
        PyObject *tmp_assign_source_183;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_22__element_1);
        tmp_assign_source_183 = generator_heap->tmp_tuple_unpack_22__element_1;
        {
            PyObject *old = generator_heap->var_sh;
            generator_heap->var_sh = tmp_assign_source_183;
            Py_INCREF(generator_heap->var_sh);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_22__element_1);
    generator_heap->tmp_tuple_unpack_22__element_1 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_184;
        PyObject *tmp_iter_arg_31;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_22__element_2);
        tmp_iter_arg_31 = generator_heap->tmp_tuple_unpack_22__element_2;
        tmp_assign_source_184 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_31);
        if (tmp_assign_source_184 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 282;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_54;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_23__source_iter;
            generator_heap->tmp_tuple_unpack_23__source_iter = tmp_assign_source_184;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_185;
        PyObject *tmp_unpack_56;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_23__source_iter);
        tmp_unpack_56 = generator_heap->tmp_tuple_unpack_23__source_iter;
        tmp_assign_source_185 = UNPACK_NEXT(tstate, tmp_unpack_56, 0, 5);
        if (tmp_assign_source_185 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 282;
            goto try_except_handler_55;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_23__element_1;
            generator_heap->tmp_tuple_unpack_23__element_1 = tmp_assign_source_185;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_186;
        PyObject *tmp_unpack_57;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_23__source_iter);
        tmp_unpack_57 = generator_heap->tmp_tuple_unpack_23__source_iter;
        tmp_assign_source_186 = UNPACK_NEXT(tstate, tmp_unpack_57, 1, 5);
        if (tmp_assign_source_186 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 282;
            goto try_except_handler_55;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_23__element_2;
            generator_heap->tmp_tuple_unpack_23__element_2 = tmp_assign_source_186;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_187;
        PyObject *tmp_unpack_58;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_23__source_iter);
        tmp_unpack_58 = generator_heap->tmp_tuple_unpack_23__source_iter;
        tmp_assign_source_187 = UNPACK_NEXT(tstate, tmp_unpack_58, 2, 5);
        if (tmp_assign_source_187 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 282;
            goto try_except_handler_55;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_23__element_3;
            generator_heap->tmp_tuple_unpack_23__element_3 = tmp_assign_source_187;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_188;
        PyObject *tmp_unpack_59;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_23__source_iter);
        tmp_unpack_59 = generator_heap->tmp_tuple_unpack_23__source_iter;
        tmp_assign_source_188 = UNPACK_NEXT(tstate, tmp_unpack_59, 3, 5);
        if (tmp_assign_source_188 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 282;
            goto try_except_handler_55;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_23__element_4;
            generator_heap->tmp_tuple_unpack_23__element_4 = tmp_assign_source_188;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_189;
        PyObject *tmp_unpack_60;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_23__source_iter);
        tmp_unpack_60 = generator_heap->tmp_tuple_unpack_23__source_iter;
        tmp_assign_source_189 = UNPACK_NEXT(tstate, tmp_unpack_60, 4, 5);
        if (tmp_assign_source_189 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 282;
            goto try_except_handler_55;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_23__element_5;
            generator_heap->tmp_tuple_unpack_23__element_5 = tmp_assign_source_189;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_23;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_23__source_iter);
        tmp_iterator_name_23 = generator_heap->tmp_tuple_unpack_23__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_23); assert(HAS_ITERNEXT(tmp_iterator_name_23));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_23)->tp_iternext)(tmp_iterator_name_23);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
                    generator_heap->exception_lineno = 282;
                    goto try_except_handler_55;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[18];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 282;
            goto try_except_handler_55;
        }
    }
    goto try_end_48;
    // Exception handler code:
    try_except_handler_55:;
    generator_heap->exception_keeper_type_48 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_48 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_48 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_48 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_23__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_23__source_iter);
    generator_heap->tmp_tuple_unpack_23__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_48;
    generator_heap->exception_value = generator_heap->exception_keeper_value_48;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_48;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_48;

    goto try_except_handler_54;
    // End of try:
    try_end_48:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_23__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_23__source_iter);
    generator_heap->tmp_tuple_unpack_23__source_iter = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_190;
        PyObject *tmp_iter_arg_32;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_23__element_1);
        tmp_iter_arg_32 = generator_heap->tmp_tuple_unpack_23__element_1;
        tmp_assign_source_190 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_32);
        if (tmp_assign_source_190 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 282;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_56;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_24__source_iter;
            generator_heap->tmp_tuple_unpack_24__source_iter = tmp_assign_source_190;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_191;
        PyObject *tmp_unpack_61;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_24__source_iter);
        tmp_unpack_61 = generator_heap->tmp_tuple_unpack_24__source_iter;
        tmp_assign_source_191 = UNPACK_NEXT(tstate, tmp_unpack_61, 0, 2);
        if (tmp_assign_source_191 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 282;
            goto try_except_handler_57;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_24__element_1;
            generator_heap->tmp_tuple_unpack_24__element_1 = tmp_assign_source_191;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_192;
        PyObject *tmp_unpack_62;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_24__source_iter);
        tmp_unpack_62 = generator_heap->tmp_tuple_unpack_24__source_iter;
        tmp_assign_source_192 = UNPACK_NEXT(tstate, tmp_unpack_62, 1, 2);
        if (tmp_assign_source_192 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 282;
            goto try_except_handler_57;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_24__element_2;
            generator_heap->tmp_tuple_unpack_24__element_2 = tmp_assign_source_192;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_24;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_24__source_iter);
        tmp_iterator_name_24 = generator_heap->tmp_tuple_unpack_24__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_24); assert(HAS_ITERNEXT(tmp_iterator_name_24));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_24)->tp_iternext)(tmp_iterator_name_24);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
                    generator_heap->exception_lineno = 282;
                    goto try_except_handler_57;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[17];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 282;
            goto try_except_handler_57;
        }
    }
    goto try_end_49;
    // Exception handler code:
    try_except_handler_57:;
    generator_heap->exception_keeper_type_49 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_49 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_49 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_49 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_24__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_24__source_iter);
    generator_heap->tmp_tuple_unpack_24__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_49;
    generator_heap->exception_value = generator_heap->exception_keeper_value_49;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_49;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_49;

    goto try_except_handler_56;
    // End of try:
    try_end_49:;
    goto try_end_50;
    // Exception handler code:
    try_except_handler_56:;
    generator_heap->exception_keeper_type_50 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_50 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_50 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_50 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_24__element_1);
    generator_heap->tmp_tuple_unpack_24__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_24__element_2);
    generator_heap->tmp_tuple_unpack_24__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_50;
    generator_heap->exception_value = generator_heap->exception_keeper_value_50;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_50;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_50;

    goto try_except_handler_54;
    // End of try:
    try_end_50:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_24__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_24__source_iter);
    generator_heap->tmp_tuple_unpack_24__source_iter = NULL;
    {
        PyObject *tmp_assign_source_193;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_24__element_1);
        tmp_assign_source_193 = generator_heap->tmp_tuple_unpack_24__element_1;
        {
            PyObject *old = generator_heap->var_w;
            generator_heap->var_w = tmp_assign_source_193;
            Py_INCREF(generator_heap->var_w);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_24__element_1);
    generator_heap->tmp_tuple_unpack_24__element_1 = NULL;

    {
        PyObject *tmp_assign_source_194;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_24__element_2);
        tmp_assign_source_194 = generator_heap->tmp_tuple_unpack_24__element_2;
        {
            PyObject *old = generator_heap->var_h;
            generator_heap->var_h = tmp_assign_source_194;
            Py_INCREF(generator_heap->var_h);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_24__element_2);
    generator_heap->tmp_tuple_unpack_24__element_2 = NULL;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_23__element_1);
    generator_heap->tmp_tuple_unpack_23__element_1 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_195;
        PyObject *tmp_iter_arg_33;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_23__element_2);
        tmp_iter_arg_33 = generator_heap->tmp_tuple_unpack_23__element_2;
        tmp_assign_source_195 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_33);
        if (tmp_assign_source_195 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 282;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_58;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_25__source_iter;
            generator_heap->tmp_tuple_unpack_25__source_iter = tmp_assign_source_195;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_196;
        PyObject *tmp_unpack_63;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_25__source_iter);
        tmp_unpack_63 = generator_heap->tmp_tuple_unpack_25__source_iter;
        tmp_assign_source_196 = UNPACK_NEXT(tstate, tmp_unpack_63, 0, 2);
        if (tmp_assign_source_196 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 282;
            goto try_except_handler_59;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_25__element_1;
            generator_heap->tmp_tuple_unpack_25__element_1 = tmp_assign_source_196;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_197;
        PyObject *tmp_unpack_64;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_25__source_iter);
        tmp_unpack_64 = generator_heap->tmp_tuple_unpack_25__source_iter;
        tmp_assign_source_197 = UNPACK_NEXT(tstate, tmp_unpack_64, 1, 2);
        if (tmp_assign_source_197 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 282;
            goto try_except_handler_59;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_25__element_2;
            generator_heap->tmp_tuple_unpack_25__element_2 = tmp_assign_source_197;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_25;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_25__source_iter);
        tmp_iterator_name_25 = generator_heap->tmp_tuple_unpack_25__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_25); assert(HAS_ITERNEXT(tmp_iterator_name_25));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_25)->tp_iternext)(tmp_iterator_name_25);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
                    generator_heap->exception_lineno = 282;
                    goto try_except_handler_59;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[17];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 282;
            goto try_except_handler_59;
        }
    }
    goto try_end_51;
    // Exception handler code:
    try_except_handler_59:;
    generator_heap->exception_keeper_type_51 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_51 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_51 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_51 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_25__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_25__source_iter);
    generator_heap->tmp_tuple_unpack_25__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_51;
    generator_heap->exception_value = generator_heap->exception_keeper_value_51;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_51;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_51;

    goto try_except_handler_58;
    // End of try:
    try_end_51:;
    goto try_end_52;
    // Exception handler code:
    try_except_handler_58:;
    generator_heap->exception_keeper_type_52 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_52 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_52 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_52 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_25__element_1);
    generator_heap->tmp_tuple_unpack_25__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_25__element_2);
    generator_heap->tmp_tuple_unpack_25__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_52;
    generator_heap->exception_value = generator_heap->exception_keeper_value_52;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_52;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_52;

    goto try_except_handler_54;
    // End of try:
    try_end_52:;
    goto try_end_53;
    // Exception handler code:
    try_except_handler_54:;
    generator_heap->exception_keeper_type_53 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_53 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_53 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_53 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_23__element_1);
    generator_heap->tmp_tuple_unpack_23__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_23__element_2);
    generator_heap->tmp_tuple_unpack_23__element_2 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_23__element_3);
    generator_heap->tmp_tuple_unpack_23__element_3 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_23__element_4);
    generator_heap->tmp_tuple_unpack_23__element_4 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_23__element_5);
    generator_heap->tmp_tuple_unpack_23__element_5 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_53;
    generator_heap->exception_value = generator_heap->exception_keeper_value_53;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_53;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_53;

    goto try_except_handler_52;
    // End of try:
    try_end_53:;
    goto try_end_54;
    // Exception handler code:
    try_except_handler_52:;
    generator_heap->exception_keeper_type_54 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_54 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_54 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_54 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_22__element_1);
    generator_heap->tmp_tuple_unpack_22__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_22__element_2);
    generator_heap->tmp_tuple_unpack_22__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_54;
    generator_heap->exception_value = generator_heap->exception_keeper_value_54;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_54;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_54;

    goto try_except_handler_50;
    // End of try:
    try_end_54:;
    goto try_end_55;
    // Exception handler code:
    try_except_handler_50:;
    generator_heap->exception_keeper_type_55 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_55 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_55 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_55 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_21__element_1);
    generator_heap->tmp_tuple_unpack_21__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_21__element_2);
    generator_heap->tmp_tuple_unpack_21__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_55;
    generator_heap->exception_value = generator_heap->exception_keeper_value_55;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_55;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_55;

    goto try_except_handler_49;
    // End of try:
    try_end_55:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_25__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_25__source_iter);
    generator_heap->tmp_tuple_unpack_25__source_iter = NULL;
    {
        PyObject *tmp_assign_source_198;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_25__element_1);
        tmp_assign_source_198 = generator_heap->tmp_tuple_unpack_25__element_1;
        {
            PyObject *old = generator_heap->var_shw;
            generator_heap->var_shw = tmp_assign_source_198;
            Py_INCREF(generator_heap->var_shw);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_25__element_1);
    generator_heap->tmp_tuple_unpack_25__element_1 = NULL;

    {
        PyObject *tmp_assign_source_199;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_25__element_2);
        tmp_assign_source_199 = generator_heap->tmp_tuple_unpack_25__element_2;
        {
            PyObject *old = generator_heap->var__;
            generator_heap->var__ = tmp_assign_source_199;
            Py_INCREF(generator_heap->var__);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_25__element_2);
    generator_heap->tmp_tuple_unpack_25__element_2 = NULL;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_23__element_2);
    generator_heap->tmp_tuple_unpack_23__element_2 = NULL;

    {
        PyObject *tmp_assign_source_200;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_23__element_3);
        tmp_assign_source_200 = generator_heap->tmp_tuple_unpack_23__element_3;
        {
            PyObject *old = generator_heap->var_pos_hint;
            generator_heap->var_pos_hint = tmp_assign_source_200;
            Py_INCREF(generator_heap->var_pos_hint);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_23__element_3);
    generator_heap->tmp_tuple_unpack_23__element_3 = NULL;

    {
        PyObject *tmp_assign_source_201;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_23__element_4);
        tmp_assign_source_201 = generator_heap->tmp_tuple_unpack_23__element_4;
        {
            PyObject *old = generator_heap->var__;
            assert(old != NULL);
            generator_heap->var__ = tmp_assign_source_201;
            Py_INCREF(generator_heap->var__);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_23__element_4);
    generator_heap->tmp_tuple_unpack_23__element_4 = NULL;

    {
        PyObject *tmp_assign_source_202;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_23__element_5);
        tmp_assign_source_202 = generator_heap->tmp_tuple_unpack_23__element_5;
        {
            PyObject *old = generator_heap->var__;
            assert(old != NULL);
            generator_heap->var__ = tmp_assign_source_202;
            Py_INCREF(generator_heap->var__);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_23__element_5);
    generator_heap->tmp_tuple_unpack_23__element_5 = NULL;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_22__element_2);
    generator_heap->tmp_tuple_unpack_22__element_2 = NULL;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_21__element_2);
    generator_heap->tmp_tuple_unpack_21__element_2 = NULL;

    {
        PyObject *tmp_assign_source_203;
        PyObject *tmp_add_expr_left_11;
        PyObject *tmp_add_expr_right_11;
        if (generator_heap->var_selfx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[51]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 284;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_49;
        }

        tmp_add_expr_left_11 = generator_heap->var_selfx;
        if (generator_heap->var_padding_left == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[52]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 284;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_49;
        }

        tmp_add_expr_right_11 = generator_heap->var_padding_left;
        tmp_assign_source_203 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_11, tmp_add_expr_right_11);
        if (tmp_assign_source_203 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 284;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_49;
        }
        {
            PyObject *old = generator_heap->var_cx;
            generator_heap->var_cx = tmp_assign_source_203;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_23;
        int tmp_truth_name_8;
        CHECK_OBJECT(generator_heap->var_sh);
        tmp_truth_name_8 = CHECK_IF_TRUE(generator_heap->var_sh);
        if (tmp_truth_name_8 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 286;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_49;
        }
        tmp_condition_result_23 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_assign_source_204;
        PyObject *tmp_called_value_20;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_truediv_expr_left_3;
        PyObject *tmp_truediv_expr_right_3;
        PyObject *tmp_mult_expr_left_7;
        PyObject *tmp_mult_expr_right_7;
        tmp_called_value_20 = LOOKUP_BUILTIN(mod_consts[23]);
        assert(tmp_called_value_20 != NULL);
        tmp_args_element_value_34 = mod_consts[14];
        if (generator_heap->var_stretch_space == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[41]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 287;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_49;
        }

        tmp_mult_expr_left_7 = generator_heap->var_stretch_space;
        CHECK_OBJECT(generator_heap->var_sh);
        tmp_mult_expr_right_7 = generator_heap->var_sh;
        tmp_truediv_expr_left_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_7, tmp_mult_expr_right_7);
        if (tmp_truediv_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 287;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_49;
        }
        if (generator_heap->var_stretch_sum == NULL) {
            Py_DECREF(tmp_truediv_expr_left_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[22]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 287;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_49;
        }

        tmp_truediv_expr_right_3 = generator_heap->var_stretch_sum;
        tmp_args_element_value_35 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
        Py_DECREF(tmp_truediv_expr_left_3);
        if (tmp_args_element_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 287;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_49;
        }
        generator->m_frame->m_frame.f_lineno = 287;
        {
            PyObject *call_args[] = {tmp_args_element_value_34, tmp_args_element_value_35};
            tmp_assign_source_204 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_20, call_args);
        }

        Py_DECREF(tmp_args_element_value_35);
        if (tmp_assign_source_204 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 287;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_49;
        }
        {
            PyObject *old = generator_heap->var_h;
            assert(old != NULL);
            generator_heap->var_h = tmp_assign_source_204;
            Py_DECREF(old);
        }

    }
    branch_no_23:;
    {
        nuitka_bool tmp_condition_result_24;
        int tmp_truth_name_9;
        CHECK_OBJECT(generator_heap->var_shw);
        tmp_truth_name_9 = CHECK_IF_TRUE(generator_heap->var_shw);
        if (tmp_truth_name_9 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 288;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_49;
        }
        tmp_condition_result_24 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
            goto branch_yes_24;
        } else {
            goto branch_no_24;
        }
    }
    branch_yes_24:;
    {
        PyObject *tmp_assign_source_205;
        PyObject *tmp_called_value_21;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_mult_expr_left_8;
        PyObject *tmp_mult_expr_right_8;
        tmp_called_value_21 = LOOKUP_BUILTIN(mod_consts[23]);
        assert(tmp_called_value_21 != NULL);
        tmp_args_element_value_36 = mod_consts[15];
        CHECK_OBJECT(generator_heap->var_shw);
        tmp_mult_expr_left_8 = generator_heap->var_shw;
        if (generator_heap->var_size_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[53]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 289;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_49;
        }

        tmp_mult_expr_right_8 = generator_heap->var_size_x;
        tmp_args_element_value_37 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_8, tmp_mult_expr_right_8);
        if (tmp_args_element_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 289;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_49;
        }
        generator->m_frame->m_frame.f_lineno = 289;
        {
            PyObject *call_args[] = {tmp_args_element_value_36, tmp_args_element_value_37};
            tmp_assign_source_205 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_21, call_args);
        }

        Py_DECREF(tmp_args_element_value_37);
        if (tmp_assign_source_205 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 289;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_49;
        }
        {
            PyObject *old = generator_heap->var_w;
            assert(old != NULL);
            generator_heap->var_w = tmp_assign_source_205;
            Py_DECREF(old);
        }

    }
    branch_no_24:;
    {
        PyObject *tmp_assign_source_206;
        PyObject *tmp_iter_arg_34;
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(generator_heap->var_pos_hint);
        tmp_expression_value_17 = generator_heap->var_pos_hint;
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[43]);
        if (tmp_called_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 291;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_49;
        }
        generator->m_frame->m_frame.f_lineno = 291;
        tmp_iter_arg_34 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_22);
        Py_DECREF(tmp_called_value_22);
        if (tmp_iter_arg_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 291;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_49;
        }
        tmp_assign_source_206 = MAKE_ITERATOR(tstate, tmp_iter_arg_34);
        Py_DECREF(tmp_iter_arg_34);
        if (tmp_assign_source_206 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 291;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_49;
        }
        {
            PyObject *old = generator_heap->tmp_for_loop_7__for_iterator;
            generator_heap->tmp_for_loop_7__for_iterator = tmp_assign_source_206;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_7:;
    {
        PyObject *tmp_next_source_7;
        PyObject *tmp_assign_source_207;
        CHECK_OBJECT(generator_heap->tmp_for_loop_7__for_iterator);
        tmp_next_source_7 = generator_heap->tmp_for_loop_7__for_iterator;
        tmp_assign_source_207 = ITERATOR_NEXT(tmp_next_source_7);
        if (tmp_assign_source_207 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_7;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
                generator_heap->exception_lineno = 291;
                goto try_except_handler_60;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_7__iter_value;
            generator_heap->tmp_for_loop_7__iter_value = tmp_assign_source_207;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_208;
        PyObject *tmp_iter_arg_35;
        CHECK_OBJECT(generator_heap->tmp_for_loop_7__iter_value);
        tmp_iter_arg_35 = generator_heap->tmp_for_loop_7__iter_value;
        tmp_assign_source_208 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_35);
        if (tmp_assign_source_208 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 291;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_61;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_26__source_iter;
            generator_heap->tmp_tuple_unpack_26__source_iter = tmp_assign_source_208;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_209;
        PyObject *tmp_unpack_65;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_26__source_iter);
        tmp_unpack_65 = generator_heap->tmp_tuple_unpack_26__source_iter;
        tmp_assign_source_209 = UNPACK_NEXT(tstate, tmp_unpack_65, 0, 2);
        if (tmp_assign_source_209 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 291;
            goto try_except_handler_62;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_26__element_1;
            generator_heap->tmp_tuple_unpack_26__element_1 = tmp_assign_source_209;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_210;
        PyObject *tmp_unpack_66;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_26__source_iter);
        tmp_unpack_66 = generator_heap->tmp_tuple_unpack_26__source_iter;
        tmp_assign_source_210 = UNPACK_NEXT(tstate, tmp_unpack_66, 1, 2);
        if (tmp_assign_source_210 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 291;
            goto try_except_handler_62;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_26__element_2;
            generator_heap->tmp_tuple_unpack_26__element_2 = tmp_assign_source_210;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_26;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_26__source_iter);
        tmp_iterator_name_26 = generator_heap->tmp_tuple_unpack_26__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_26); assert(HAS_ITERNEXT(tmp_iterator_name_26));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_26)->tp_iternext)(tmp_iterator_name_26);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
                    generator_heap->exception_lineno = 291;
                    goto try_except_handler_62;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[17];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            generator_heap->exception_lineno = 291;
            goto try_except_handler_62;
        }
    }
    goto try_end_56;
    // Exception handler code:
    try_except_handler_62:;
    generator_heap->exception_keeper_type_56 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_56 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_56 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_56 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_26__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_26__source_iter);
    generator_heap->tmp_tuple_unpack_26__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_56;
    generator_heap->exception_value = generator_heap->exception_keeper_value_56;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_56;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_56;

    goto try_except_handler_61;
    // End of try:
    try_end_56:;
    goto try_end_57;
    // Exception handler code:
    try_except_handler_61:;
    generator_heap->exception_keeper_type_57 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_57 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_57 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_57 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_26__element_1);
    generator_heap->tmp_tuple_unpack_26__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_26__element_2);
    generator_heap->tmp_tuple_unpack_26__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_57;
    generator_heap->exception_value = generator_heap->exception_keeper_value_57;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_57;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_57;

    goto try_except_handler_60;
    // End of try:
    try_end_57:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_26__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_26__source_iter);
    generator_heap->tmp_tuple_unpack_26__source_iter = NULL;
    {
        PyObject *tmp_assign_source_211;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_26__element_1);
        tmp_assign_source_211 = generator_heap->tmp_tuple_unpack_26__element_1;
        {
            PyObject *old = generator_heap->var_key;
            generator_heap->var_key = tmp_assign_source_211;
            Py_INCREF(generator_heap->var_key);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_26__element_1);
    generator_heap->tmp_tuple_unpack_26__element_1 = NULL;

    {
        PyObject *tmp_assign_source_212;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_26__element_2);
        tmp_assign_source_212 = generator_heap->tmp_tuple_unpack_26__element_2;
        {
            PyObject *old = generator_heap->var_value;
            generator_heap->var_value = tmp_assign_source_212;
            Py_INCREF(generator_heap->var_value);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_26__element_2);
    generator_heap->tmp_tuple_unpack_26__element_2 = NULL;

    {
        PyObject *tmp_assign_source_213;
        PyObject *tmp_mult_expr_left_9;
        PyObject *tmp_mult_expr_right_9;
        CHECK_OBJECT(generator_heap->var_value);
        tmp_mult_expr_left_9 = generator_heap->var_value;
        if (generator_heap->var_size_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[53]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 292;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_60;
        }

        tmp_mult_expr_right_9 = generator_heap->var_size_x;
        tmp_assign_source_213 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_9, tmp_mult_expr_right_9);
        if (tmp_assign_source_213 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 292;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_60;
        }
        {
            PyObject *old = generator_heap->var_posx;
            generator_heap->var_posx = tmp_assign_source_213;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_25;
        PyObject *tmp_cmp_expr_left_16;
        PyObject *tmp_cmp_expr_right_16;
        CHECK_OBJECT(generator_heap->var_key);
        tmp_cmp_expr_left_16 = generator_heap->var_key;
        tmp_cmp_expr_right_16 = mod_consts[27];
        tmp_condition_result_25 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
        if (tmp_condition_result_25 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 293;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_60;
        }
        if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    {
        PyObject *tmp_assign_source_214;
        PyObject *tmp_iadd_expr_left_13;
        PyObject *tmp_iadd_expr_right_13;
        if (generator_heap->var_cx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[54]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 294;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_60;
        }

        tmp_iadd_expr_left_13 = generator_heap->var_cx;
        CHECK_OBJECT(generator_heap->var_posx);
        tmp_iadd_expr_right_13 = generator_heap->var_posx;
        generator_heap->tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_13, tmp_iadd_expr_right_13);
        if (generator_heap->tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 294;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_60;
        }
        tmp_assign_source_214 = tmp_iadd_expr_left_13;
        generator_heap->var_cx = tmp_assign_source_214;

    }
    goto branch_end_25;
    branch_no_25:;
    {
        nuitka_bool tmp_condition_result_26;
        PyObject *tmp_cmp_expr_left_17;
        PyObject *tmp_cmp_expr_right_17;
        CHECK_OBJECT(generator_heap->var_key);
        tmp_cmp_expr_left_17 = generator_heap->var_key;
        tmp_cmp_expr_right_17 = mod_consts[55];
        tmp_condition_result_26 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
        if (tmp_condition_result_26 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 295;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_60;
        }
        if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
    }
    branch_yes_26:;
    {
        PyObject *tmp_assign_source_215;
        PyObject *tmp_iadd_expr_left_14;
        PyObject *tmp_iadd_expr_right_14;
        PyObject *tmp_sub_expr_left_11;
        PyObject *tmp_sub_expr_right_11;
        if (generator_heap->var_cx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[54]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 296;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_60;
        }

        tmp_iadd_expr_left_14 = generator_heap->var_cx;
        CHECK_OBJECT(generator_heap->var_posx);
        tmp_sub_expr_left_11 = generator_heap->var_posx;
        if (generator_heap->var_w == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[56]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 296;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_60;
        }

        tmp_sub_expr_right_11 = generator_heap->var_w;
        tmp_iadd_expr_right_14 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_11, tmp_sub_expr_right_11);
        if (tmp_iadd_expr_right_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 296;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_60;
        }
        generator_heap->tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_14, tmp_iadd_expr_right_14);
        Py_DECREF(tmp_iadd_expr_right_14);
        if (generator_heap->tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 296;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_60;
        }
        tmp_assign_source_215 = tmp_iadd_expr_left_14;
        generator_heap->var_cx = tmp_assign_source_215;

    }
    goto branch_end_26;
    branch_no_26:;
    {
        nuitka_bool tmp_condition_result_27;
        PyObject *tmp_cmp_expr_left_18;
        PyObject *tmp_cmp_expr_right_18;
        CHECK_OBJECT(generator_heap->var_key);
        tmp_cmp_expr_left_18 = generator_heap->var_key;
        tmp_cmp_expr_right_18 = mod_consts[57];
        tmp_condition_result_27 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
        if (tmp_condition_result_27 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 297;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_60;
        }
        if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
            goto branch_yes_27;
        } else {
            goto branch_no_27;
        }
    }
    branch_yes_27:;
    {
        PyObject *tmp_assign_source_216;
        PyObject *tmp_iadd_expr_left_15;
        PyObject *tmp_iadd_expr_right_15;
        PyObject *tmp_sub_expr_left_12;
        PyObject *tmp_sub_expr_right_12;
        PyObject *tmp_truediv_expr_left_4;
        PyObject *tmp_truediv_expr_right_4;
        if (generator_heap->var_cx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[54]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 298;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_60;
        }

        tmp_iadd_expr_left_15 = generator_heap->var_cx;
        CHECK_OBJECT(generator_heap->var_posx);
        tmp_sub_expr_left_12 = generator_heap->var_posx;
        if (generator_heap->var_w == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[56]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 298;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_60;
        }

        tmp_truediv_expr_left_4 = generator_heap->var_w;
        tmp_truediv_expr_right_4 = mod_consts[48];
        tmp_sub_expr_right_12 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_4, tmp_truediv_expr_right_4);
        if (tmp_sub_expr_right_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 298;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_60;
        }
        tmp_iadd_expr_right_15 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_12, tmp_sub_expr_right_12);
        Py_DECREF(tmp_sub_expr_right_12);
        if (tmp_iadd_expr_right_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 298;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_60;
        }
        generator_heap->tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_15, tmp_iadd_expr_right_15);
        Py_DECREF(tmp_iadd_expr_right_15);
        if (generator_heap->tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 298;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_60;
        }
        tmp_assign_source_216 = tmp_iadd_expr_left_15;
        generator_heap->var_cx = tmp_assign_source_216;

    }
    branch_no_27:;
    branch_end_26:;
    branch_end_25:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 291;
        generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
        goto try_except_handler_60;
    }
    goto loop_start_7;
    loop_end_7:;
    goto try_end_58;
    // Exception handler code:
    try_except_handler_60:;
    generator_heap->exception_keeper_type_58 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_58 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_58 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_58 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_for_loop_7__iter_value);
    generator_heap->tmp_for_loop_7__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_7__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_7__for_iterator);
    generator_heap->tmp_for_loop_7__for_iterator = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_58;
    generator_heap->exception_value = generator_heap->exception_keeper_value_58;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_58;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_58;

    goto try_except_handler_49;
    // End of try:
    try_end_58:;
    Py_XDECREF(generator_heap->tmp_for_loop_7__iter_value);
    generator_heap->tmp_for_loop_7__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_7__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_7__for_iterator);
    generator_heap->tmp_for_loop_7__for_iterator = NULL;
    {
        PyObject *tmp_expression_value_18;
        PyObject *tmp_tuple_element_3;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
        CHECK_OBJECT(generator_heap->var_i);
        tmp_tuple_element_3 = generator_heap->var_i;
        tmp_expression_value_18 = MAKE_TUPLE_EMPTY(5);
        PyTuple_SET_ITEM0(tmp_expression_value_18, 0, tmp_tuple_element_3);
        if (generator_heap->var_cx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[54]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 300;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto tuple_build_exception_2;
        }

        tmp_tuple_element_3 = generator_heap->var_cx;
        PyTuple_SET_ITEM0(tmp_expression_value_18, 1, tmp_tuple_element_3);
        if (generator_heap->var_y == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[28]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 300;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto tuple_build_exception_2;
        }

        tmp_tuple_element_3 = generator_heap->var_y;
        PyTuple_SET_ITEM0(tmp_expression_value_18, 2, tmp_tuple_element_3);
        if (generator_heap->var_w == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[56]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 300;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto tuple_build_exception_2;
        }

        tmp_tuple_element_3 = generator_heap->var_w;
        PyTuple_SET_ITEM0(tmp_expression_value_18, 3, tmp_tuple_element_3);
        CHECK_OBJECT(generator_heap->var_h);
        tmp_tuple_element_3 = generator_heap->var_h;
        PyTuple_SET_ITEM0(tmp_expression_value_18, 4, tmp_tuple_element_3);
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_expression_value_18);
        goto try_except_handler_49;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_3, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 2;
        return tmp_expression_value_18;
        yield_return_2:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_3, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 300;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_49;
        }
        tmp_yield_result_2 = yield_return_value;
        Py_DECREF(tmp_yield_result_2);
    }
    {
        PyObject *tmp_assign_source_217;
        PyObject *tmp_iadd_expr_left_16;
        PyObject *tmp_iadd_expr_right_16;
        PyObject *tmp_add_expr_left_12;
        PyObject *tmp_add_expr_right_12;
        if (generator_heap->var_y == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[28]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 301;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_49;
        }

        tmp_iadd_expr_left_16 = generator_heap->var_y;
        CHECK_OBJECT(generator_heap->var_h);
        tmp_add_expr_left_12 = generator_heap->var_h;
        if (generator_heap->var_spacing == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[4]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 301;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_49;
        }

        tmp_add_expr_right_12 = generator_heap->var_spacing;
        tmp_iadd_expr_right_16 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_12, tmp_add_expr_right_12);
        if (tmp_iadd_expr_right_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 301;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_49;
        }
        generator_heap->tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_16, tmp_iadd_expr_right_16);
        Py_DECREF(tmp_iadd_expr_right_16);
        if (generator_heap->tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 301;
            generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
            goto try_except_handler_49;
        }
        tmp_assign_source_217 = tmp_iadd_expr_left_16;
        generator_heap->var_y = tmp_assign_source_217;

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 282;
        generator_heap->type_description_1 = "ccooooooooooooooooooooooooooooocoooooooooooooo";
        goto try_except_handler_49;
    }
    goto loop_start_6;
    loop_end_6:;
    goto try_end_59;
    // Exception handler code:
    try_except_handler_49:;
    generator_heap->exception_keeper_type_59 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_59 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_59 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_59 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_for_loop_6__iter_value);
    generator_heap->tmp_for_loop_6__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_6__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_6__for_iterator);
    generator_heap->tmp_for_loop_6__for_iterator = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_59;
    generator_heap->exception_value = generator_heap->exception_keeper_value_59;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_59;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_59;

    goto frame_exception_exit_1;
    // End of try:
    try_end_59:;
    Py_XDECREF(generator_heap->tmp_for_loop_6__iter_value);
    generator_heap->tmp_for_loop_6__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_6__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_6__for_iterator);
    generator_heap->tmp_for_loop_6__for_iterator = NULL;
    branch_end_17:;

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(tstate, generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            generator->m_closure[0],
            generator->m_closure[1],
            generator_heap->var_len_children,
            generator_heap->var_padding_left,
            generator_heap->var_padding_top,
            generator_heap->var_padding_right,
            generator_heap->var_padding_bottom,
            generator_heap->var_spacing,
            generator_heap->var_orientation,
            generator_heap->var_padding_x,
            generator_heap->var_padding_y,
            generator_heap->var_stretch_sum,
            generator_heap->var_has_bound,
            generator_heap->var_hint,
            generator_heap->var_minimum_size_bounded,
            generator_heap->var_minimum_size_y,
            generator_heap->var_minimum_size_none,
            generator_heap->var_i,
            generator_heap->var_w,
            generator_heap->var_h,
            generator_heap->var_shw,
            generator_heap->var_shh,
            generator_heap->var__,
            generator_heap->var_shw_min,
            generator_heap->var_shh_min,
            generator_heap->var_shw_max,
            generator_heap->var_minimum_size_x,
            generator_heap->var_shh_max,
            generator_heap->var_selfx,
            generator_heap->var_selfy,
            generator_heap->var_stretch_space,
            generator_heap->var_dim,
            generator_heap->var_val,
            generator_heap->var_sh,
            generator_heap->var_sh_min,
            generator_heap->var_x,
            generator_heap->var_size_y,
            generator_heap->var_pos_hint,
            generator_heap->var_cy,
            generator_heap->var_key,
            generator_heap->var_value,
            generator_heap->var_posy,
            generator_heap->var_y,
            generator_heap->var_size_x,
            generator_heap->var_cx,
            generator_heap->var_posx
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_60;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_60 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_60 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_60 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_60 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_len_children);
    generator_heap->var_len_children = NULL;
    Py_XDECREF(generator_heap->var_padding_left);
    generator_heap->var_padding_left = NULL;
    Py_XDECREF(generator_heap->var_padding_top);
    generator_heap->var_padding_top = NULL;
    Py_XDECREF(generator_heap->var_padding_right);
    generator_heap->var_padding_right = NULL;
    Py_XDECREF(generator_heap->var_padding_bottom);
    generator_heap->var_padding_bottom = NULL;
    Py_XDECREF(generator_heap->var_spacing);
    generator_heap->var_spacing = NULL;
    Py_XDECREF(generator_heap->var_orientation);
    generator_heap->var_orientation = NULL;
    Py_XDECREF(generator_heap->var_padding_x);
    generator_heap->var_padding_x = NULL;
    Py_XDECREF(generator_heap->var_padding_y);
    generator_heap->var_padding_y = NULL;
    Py_XDECREF(generator_heap->var_stretch_sum);
    generator_heap->var_stretch_sum = NULL;
    Py_XDECREF(generator_heap->var_has_bound);
    generator_heap->var_has_bound = NULL;
    Py_XDECREF(generator_heap->var_hint);
    generator_heap->var_hint = NULL;
    Py_XDECREF(generator_heap->var_minimum_size_bounded);
    generator_heap->var_minimum_size_bounded = NULL;
    Py_XDECREF(generator_heap->var_minimum_size_y);
    generator_heap->var_minimum_size_y = NULL;
    Py_XDECREF(generator_heap->var_minimum_size_none);
    generator_heap->var_minimum_size_none = NULL;
    Py_XDECREF(generator_heap->var_i);
    generator_heap->var_i = NULL;
    Py_XDECREF(generator_heap->var_w);
    generator_heap->var_w = NULL;
    Py_XDECREF(generator_heap->var_h);
    generator_heap->var_h = NULL;
    Py_XDECREF(generator_heap->var_shw);
    generator_heap->var_shw = NULL;
    Py_XDECREF(generator_heap->var_shh);
    generator_heap->var_shh = NULL;
    Py_XDECREF(generator_heap->var__);
    generator_heap->var__ = NULL;
    Py_XDECREF(generator_heap->var_shw_min);
    generator_heap->var_shw_min = NULL;
    Py_XDECREF(generator_heap->var_shh_min);
    generator_heap->var_shh_min = NULL;
    Py_XDECREF(generator_heap->var_shw_max);
    generator_heap->var_shw_max = NULL;
    Py_XDECREF(generator_heap->var_minimum_size_x);
    generator_heap->var_minimum_size_x = NULL;
    Py_XDECREF(generator_heap->var_shh_max);
    generator_heap->var_shh_max = NULL;
    Py_XDECREF(generator_heap->var_selfx);
    generator_heap->var_selfx = NULL;
    Py_XDECREF(generator_heap->var_selfy);
    generator_heap->var_selfy = NULL;
    Py_XDECREF(generator_heap->var_stretch_space);
    generator_heap->var_stretch_space = NULL;
    CHECK_OBJECT(generator_heap->var_dim);
    Py_DECREF(generator_heap->var_dim);
    generator_heap->var_dim = NULL;
    Py_XDECREF(generator_heap->var_val);
    generator_heap->var_val = NULL;
    Py_XDECREF(generator_heap->var_sh);
    generator_heap->var_sh = NULL;
    Py_XDECREF(generator_heap->var_sh_min);
    generator_heap->var_sh_min = NULL;
    Py_XDECREF(generator_heap->var_x);
    generator_heap->var_x = NULL;
    Py_XDECREF(generator_heap->var_size_y);
    generator_heap->var_size_y = NULL;
    Py_XDECREF(generator_heap->var_pos_hint);
    generator_heap->var_pos_hint = NULL;
    Py_XDECREF(generator_heap->var_cy);
    generator_heap->var_cy = NULL;
    Py_XDECREF(generator_heap->var_key);
    generator_heap->var_key = NULL;
    Py_XDECREF(generator_heap->var_value);
    generator_heap->var_value = NULL;
    Py_XDECREF(generator_heap->var_posy);
    generator_heap->var_posy = NULL;
    Py_XDECREF(generator_heap->var_y);
    generator_heap->var_y = NULL;
    Py_XDECREF(generator_heap->var_size_x);
    generator_heap->var_size_x = NULL;
    Py_XDECREF(generator_heap->var_cx);
    generator_heap->var_cx = NULL;
    Py_XDECREF(generator_heap->var_posx);
    generator_heap->var_posx = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_60;
    generator_heap->exception_value = generator_heap->exception_keeper_value_60;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_60;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_60;

    goto function_exception_exit;
    // End of try:
    try_end_60:;
    Py_XDECREF(generator_heap->var_len_children);
    generator_heap->var_len_children = NULL;
    Py_XDECREF(generator_heap->var_padding_left);
    generator_heap->var_padding_left = NULL;
    CHECK_OBJECT(generator_heap->var_padding_top);
    Py_DECREF(generator_heap->var_padding_top);
    generator_heap->var_padding_top = NULL;
    CHECK_OBJECT(generator_heap->var_padding_right);
    Py_DECREF(generator_heap->var_padding_right);
    generator_heap->var_padding_right = NULL;
    Py_XDECREF(generator_heap->var_padding_bottom);
    generator_heap->var_padding_bottom = NULL;
    Py_XDECREF(generator_heap->var_spacing);
    generator_heap->var_spacing = NULL;
    CHECK_OBJECT(generator_heap->var_orientation);
    Py_DECREF(generator_heap->var_orientation);
    generator_heap->var_orientation = NULL;
    Py_XDECREF(generator_heap->var_padding_x);
    generator_heap->var_padding_x = NULL;
    Py_XDECREF(generator_heap->var_padding_y);
    generator_heap->var_padding_y = NULL;
    Py_XDECREF(generator_heap->var_stretch_sum);
    generator_heap->var_stretch_sum = NULL;
    Py_XDECREF(generator_heap->var_has_bound);
    generator_heap->var_has_bound = NULL;
    Py_XDECREF(generator_heap->var_hint);
    generator_heap->var_hint = NULL;
    Py_XDECREF(generator_heap->var_minimum_size_bounded);
    generator_heap->var_minimum_size_bounded = NULL;
    CHECK_OBJECT(generator_heap->var_minimum_size_y);
    Py_DECREF(generator_heap->var_minimum_size_y);
    generator_heap->var_minimum_size_y = NULL;
    Py_XDECREF(generator_heap->var_minimum_size_none);
    generator_heap->var_minimum_size_none = NULL;
    Py_XDECREF(generator_heap->var_i);
    generator_heap->var_i = NULL;
    Py_XDECREF(generator_heap->var_w);
    generator_heap->var_w = NULL;
    Py_XDECREF(generator_heap->var_h);
    generator_heap->var_h = NULL;
    Py_XDECREF(generator_heap->var_shw);
    generator_heap->var_shw = NULL;
    Py_XDECREF(generator_heap->var_shh);
    generator_heap->var_shh = NULL;
    Py_XDECREF(generator_heap->var__);
    generator_heap->var__ = NULL;
    Py_XDECREF(generator_heap->var_shw_min);
    generator_heap->var_shw_min = NULL;
    Py_XDECREF(generator_heap->var_shh_min);
    generator_heap->var_shh_min = NULL;
    Py_XDECREF(generator_heap->var_shw_max);
    generator_heap->var_shw_max = NULL;
    CHECK_OBJECT(generator_heap->var_minimum_size_x);
    Py_DECREF(generator_heap->var_minimum_size_x);
    generator_heap->var_minimum_size_x = NULL;
    Py_XDECREF(generator_heap->var_shh_max);
    generator_heap->var_shh_max = NULL;
    Py_XDECREF(generator_heap->var_selfx);
    generator_heap->var_selfx = NULL;
    Py_XDECREF(generator_heap->var_selfy);
    generator_heap->var_selfy = NULL;
    Py_XDECREF(generator_heap->var_stretch_space);
    generator_heap->var_stretch_space = NULL;
    CHECK_OBJECT(generator_heap->var_dim);
    Py_DECREF(generator_heap->var_dim);
    generator_heap->var_dim = NULL;
    Py_XDECREF(generator_heap->var_val);
    generator_heap->var_val = NULL;
    Py_XDECREF(generator_heap->var_sh);
    generator_heap->var_sh = NULL;
    Py_XDECREF(generator_heap->var_sh_min);
    generator_heap->var_sh_min = NULL;
    Py_XDECREF(generator_heap->var_x);
    generator_heap->var_x = NULL;
    Py_XDECREF(generator_heap->var_size_y);
    generator_heap->var_size_y = NULL;
    Py_XDECREF(generator_heap->var_pos_hint);
    generator_heap->var_pos_hint = NULL;
    Py_XDECREF(generator_heap->var_cy);
    generator_heap->var_cy = NULL;
    Py_XDECREF(generator_heap->var_key);
    generator_heap->var_key = NULL;
    Py_XDECREF(generator_heap->var_value);
    generator_heap->var_value = NULL;
    Py_XDECREF(generator_heap->var_posy);
    generator_heap->var_posy = NULL;
    Py_XDECREF(generator_heap->var_y);
    generator_heap->var_y = NULL;
    Py_XDECREF(generator_heap->var_size_x);
    generator_heap->var_size_x = NULL;
    Py_XDECREF(generator_heap->var_cx);
    generator_heap->var_cx = NULL;
    Py_XDECREF(generator_heap->var_posx);
    generator_heap->var_posx = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(tstate, generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_kivy$uix$boxlayout$$$function__2__iterate_layout$$$genobj__1__iterate_layout(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        kivy$uix$boxlayout$$$function__2__iterate_layout$$$genobj__1__iterate_layout_context,
        module_kivy$uix$boxlayout,
        mod_consts[58],
#if PYTHON_VERSION >= 0x350
        mod_consts[59],
#endif
        codeobj_8e7498020f5d4aa03d09122d263837af,
        closure,
        2,
#if 1
        sizeof(struct kivy$uix$boxlayout$$$function__2__iterate_layout$$$genobj__1__iterate_layout_locals)
#else
        0
#endif
    );
}



#if 1
struct kivy$uix$boxlayout$$$function__2__iterate_layout$$$genobj__1__iterate_layout$$$genexpr__1_genexpr_locals {
    PyObject *var_val;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};
#endif

static PyObject *kivy$uix$boxlayout$$$function__2__iterate_layout$$$genobj__1__iterate_layout$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct kivy$uix$boxlayout$$$function__2__iterate_layout$$$genobj__1__iterate_layout$$$genexpr__1_genexpr_locals *generator_heap = (struct kivy$uix$boxlayout$$$function__2__iterate_layout$$$genobj__1__iterate_layout$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_val = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_01888ecffc00645e59d81d7086d294f6, module_kivy$uix$boxlayout, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(tstate, generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(tstate, generator);

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[1]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "Noc";
                generator_heap->exception_lineno = 252;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_val;
            generator_heap->var_val = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_val);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_value_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_val);
        tmp_expression_value_3 = generator_heap->var_val;
        tmp_subscript_value_1 = mod_consts[36];
        tmp_expression_value_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_1, 3);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 252;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
            Py_DECREF(tmp_expression_value_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[35]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 252;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }

        tmp_subscript_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_expression_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 252;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_subscript_value_1, sizeof(PyObject *), &tmp_subscript_value_2, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_subscript_value_1, sizeof(PyObject *), &tmp_subscript_value_2, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 252;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
        Py_DECREF(tmp_yield_result_1);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 252;
        generator_heap->type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(tstate, generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_val,
            generator->m_closure[0]
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_val);
    generator_heap->var_val = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_val);
    generator_heap->var_val = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(tstate, generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_kivy$uix$boxlayout$$$function__2__iterate_layout$$$genobj__1__iterate_layout$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        kivy$uix$boxlayout$$$function__2__iterate_layout$$$genobj__1__iterate_layout$$$genexpr__1_genexpr_context,
        module_kivy$uix$boxlayout,
        mod_consts[60],
#if PYTHON_VERSION >= 0x350
        mod_consts[61],
#endif
        codeobj_01888ecffc00645e59d81d7086d294f6,
        closure,
        2,
#if 1
        sizeof(struct kivy$uix$boxlayout$$$function__2__iterate_layout$$$genobj__1__iterate_layout$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}



#if 1
struct kivy$uix$boxlayout$$$function__2__iterate_layout$$$genobj__1__iterate_layout$$$genexpr__2_genexpr_locals {
    PyObject *var_elem;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};
#endif

static PyObject *kivy$uix$boxlayout$$$function__2__iterate_layout$$$genobj__1__iterate_layout$$$genexpr__2_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct kivy$uix$boxlayout$$$function__2__iterate_layout$$$genobj__1__iterate_layout$$$genexpr__2_genexpr_locals *generator_heap = (struct kivy$uix$boxlayout$$$function__2__iterate_layout$$$genobj__1__iterate_layout$$$genexpr__2_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_elem = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_9e50192a74ea78de62ed659ca997a47e, module_kivy$uix$boxlayout, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(tstate, generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(tstate, generator);

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[1]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "Noc";
                generator_heap->exception_lineno = 253;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_elem;
            generator_heap->var_elem = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_elem);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_value_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_elem);
        tmp_expression_value_3 = generator_heap->var_elem;
        tmp_subscript_value_1 = mod_consts[62];
        tmp_expression_value_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_1, 4);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 253;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
            Py_DECREF(tmp_expression_value_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[35]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 253;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }

        tmp_subscript_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_expression_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 253;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_subscript_value_1, sizeof(PyObject *), &tmp_subscript_value_2, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_subscript_value_1, sizeof(PyObject *), &tmp_subscript_value_2, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 253;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
        Py_DECREF(tmp_yield_result_1);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 253;
        generator_heap->type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(tstate, generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_elem,
            generator->m_closure[0]
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_elem);
    generator_heap->var_elem = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_elem);
    generator_heap->var_elem = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(tstate, generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_kivy$uix$boxlayout$$$function__2__iterate_layout$$$genobj__1__iterate_layout$$$genexpr__2_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        kivy$uix$boxlayout$$$function__2__iterate_layout$$$genobj__1__iterate_layout$$$genexpr__2_genexpr_context,
        module_kivy$uix$boxlayout,
        mod_consts[60],
#if PYTHON_VERSION >= 0x350
        mod_consts[61],
#endif
        codeobj_9e50192a74ea78de62ed659ca997a47e,
        closure,
        2,
#if 1
        sizeof(struct kivy$uix$boxlayout$$$function__2__iterate_layout$$$genobj__1__iterate_layout$$$genexpr__2_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_kivy$uix$boxlayout$$$function__3_do_layout(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_largs = python_pars[1];
    PyObject *var_children = NULL;
    PyObject *var_l = NULL;
    PyObject *var_t = NULL;
    PyObject *var_r = NULL;
    PyObject *var_b = NULL;
    PyObject *var_i = NULL;
    PyObject *var_x = NULL;
    PyObject *var_y = NULL;
    PyObject *var_w = NULL;
    PyObject *var_h = NULL;
    PyObject *var_c = NULL;
    PyObject *var_shw = NULL;
    PyObject *var_shh = NULL;
    PyObject *outline_0_var_c = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__element_4 = NULL;
    PyObject *tmp_tuple_unpack_2__element_5 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    struct Nuitka_FrameObject *frame_671f9b4ba8259ed434c8620e038f71a0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    static struct Nuitka_FrameObject *cache_frame_671f9b4ba8259ed434c8620e038f71a0 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_671f9b4ba8259ed434c8620e038f71a0)) {
        Py_XDECREF(cache_frame_671f9b4ba8259ed434c8620e038f71a0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_671f9b4ba8259ed434c8620e038f71a0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_671f9b4ba8259ed434c8620e038f71a0 = MAKE_FUNCTION_FRAME(tstate, codeobj_671f9b4ba8259ed434c8620e038f71a0, module_kivy$uix$boxlayout, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_671f9b4ba8259ed434c8620e038f71a0->m_type_description == NULL);
    frame_671f9b4ba8259ed434c8620e038f71a0 = cache_frame_671f9b4ba8259ed434c8620e038f71a0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_671f9b4ba8259ed434c8620e038f71a0);
    assert(Py_REFCNT(frame_671f9b4ba8259ed434c8620e038f71a0) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[6]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_children == NULL);
        var_children = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(var_children);
        tmp_operand_value_1 = var_children;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[5]);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 4);
        if (tmp_assign_source_3 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 306;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 4);
        if (tmp_assign_source_4 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 306;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tstate, tmp_unpack_3, 2, 4);
        if (tmp_assign_source_5 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 306;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tstate, tmp_unpack_4, 3, 4);
        if (tmp_assign_source_6 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 306;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_4 == NULL);
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooooooooooo";
                    exception_lineno = 306;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[13];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooo";
            exception_lineno = 306;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        assert(var_l == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_l = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        assert(var_t == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_t = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_3;
        assert(var_r == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_r = tmp_assign_source_9;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_4;
        assert(var_b == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_b = tmp_assign_source_10;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_l);
        tmp_add_expr_left_1 = var_l;
        CHECK_OBJECT(var_r);
        tmp_add_expr_right_1 = var_r;
        tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_add_expr_left_2;
            PyObject *tmp_add_expr_right_2;
            PyTuple_SET_ITEM(tmp_assattr_value_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_t);
            tmp_add_expr_left_2 = var_t;
            CHECK_OBJECT(var_b);
            tmp_add_expr_right_2 = var_b;
            tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 307;
                type_description_1 = "ooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assattr_value_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assattr_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[26], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[58]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT(var_children);
            tmp_iter_arg_3 = var_children;
            tmp_assign_source_12 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
            if (tmp_assign_source_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 311;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_4;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_12;
        }
        {
            PyObject *tmp_assign_source_13;
            tmp_assign_source_13 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_13;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_14;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_14 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_14 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "ooooooooooooooo";
                    exception_lineno = 311;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_14;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_15;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_15 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_c;
                outline_0_var_c = tmp_assign_source_15;
                Py_INCREF(outline_0_var_c);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_expression_value_4;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_c);
            tmp_expression_value_4 = outline_0_var_c;
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[9]);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 311;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_5;
            }
            tmp_append_value_1 = MAKE_TUPLE_EMPTY(5);
            {
                PyObject *tmp_expression_value_5;
                PyObject *tmp_expression_value_6;
                PyObject *tmp_expression_value_7;
                PyObject *tmp_expression_value_8;
                PyTuple_SET_ITEM(tmp_append_value_1, 0, tmp_tuple_element_2);
                CHECK_OBJECT(outline_0_var_c);
                tmp_expression_value_5 = outline_0_var_c;
                tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[63]);
                if (tmp_tuple_element_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 311;
                    type_description_1 = "ooooooooooooooo";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_append_value_1, 1, tmp_tuple_element_2);
                CHECK_OBJECT(outline_0_var_c);
                tmp_expression_value_6 = outline_0_var_c;
                tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[64]);
                if (tmp_tuple_element_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 311;
                    type_description_1 = "ooooooooooooooo";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_append_value_1, 2, tmp_tuple_element_2);
                CHECK_OBJECT(outline_0_var_c);
                tmp_expression_value_7 = outline_0_var_c;
                tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[65]);
                if (tmp_tuple_element_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 311;
                    type_description_1 = "ooooooooooooooo";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_append_value_1, 3, tmp_tuple_element_2);
                CHECK_OBJECT(outline_0_var_c);
                tmp_expression_value_8 = outline_0_var_c;
                tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[66]);
                if (tmp_tuple_element_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 312;
                    type_description_1 = "ooooooooooooooo";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_append_value_1, 4, tmp_tuple_element_2);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_append_value_1);
            goto try_except_handler_5;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 311;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_5;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_5;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_args_element_value_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_args_element_value_1);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto try_return_handler_4;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_XDECREF(outline_0_var_c);
        outline_0_var_c = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_c);
        outline_0_var_c = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 311;
        goto frame_exception_exit_1;
        outline_result_1:;
        frame_671f9b4ba8259ed434c8620e038f71a0->m_frame.f_lineno = 310;
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_iter_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_11;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_2 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_16 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_16 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooo";
                exception_lineno = 310;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_iter_arg_4;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_4 = tmp_for_loop_1__iter_value;
        tmp_assign_source_17 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_18 = UNPACK_NEXT(tstate, tmp_unpack_5, 0, 5);
        if (tmp_assign_source_18 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 310;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_19 = UNPACK_NEXT(tstate, tmp_unpack_6, 1, 5);
        if (tmp_assign_source_19 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 310;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_20 = UNPACK_NEXT(tstate, tmp_unpack_7, 2, 5);
        if (tmp_assign_source_20 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 310;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_3;
            tmp_tuple_unpack_2__element_3 = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_8 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_21 = UNPACK_NEXT(tstate, tmp_unpack_8, 3, 5);
        if (tmp_assign_source_21 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 310;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_4;
            tmp_tuple_unpack_2__element_4 = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_9 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_22 = UNPACK_NEXT(tstate, tmp_unpack_9, 4, 5);
        if (tmp_assign_source_22 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 310;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_5;
            tmp_tuple_unpack_2__element_5 = tmp_assign_source_22;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooooooooooo";
                    exception_lineno = 310;
                    goto try_except_handler_8;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[18];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooo";
            exception_lineno = 310;
            goto try_except_handler_8;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_7;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_4);
    tmp_tuple_unpack_2__element_4 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_5);
    tmp_tuple_unpack_2__element_5 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_6;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_23 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_23;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_24 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_x;
            var_x = tmp_assign_source_24;
            Py_INCREF(var_x);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
        tmp_assign_source_25 = tmp_tuple_unpack_2__element_3;
        {
            PyObject *old = var_y;
            var_y = tmp_assign_source_25;
            Py_INCREF(var_y);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;

    {
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_4);
        tmp_assign_source_26 = tmp_tuple_unpack_2__element_4;
        {
            PyObject *old = var_w;
            var_w = tmp_assign_source_26;
            Py_INCREF(var_w);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_4);
    tmp_tuple_unpack_2__element_4 = NULL;

    {
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_5);
        tmp_assign_source_27 = tmp_tuple_unpack_2__element_5;
        {
            PyObject *old = var_h;
            var_h = tmp_assign_source_27;
            Py_INCREF(var_h);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_5);
    tmp_tuple_unpack_2__element_5 = NULL;

    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_children);
        tmp_expression_value_9 = var_children;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_1 = var_i;
        tmp_assign_source_28 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_1);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_c;
            var_c = tmp_assign_source_28;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(var_x);
        tmp_tuple_element_3 = var_x;
        tmp_assattr_value_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assattr_value_2, 0, tmp_tuple_element_3);
        CHECK_OBJECT(var_y);
        tmp_tuple_element_3 = var_y;
        PyTuple_SET_ITEM0(tmp_assattr_value_2, 1, tmp_tuple_element_3);
        CHECK_OBJECT(var_c);
        tmp_assattr_target_2 = var_c;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[10], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_6;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(var_c);
        tmp_expression_value_10 = var_c;
        tmp_iter_arg_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[63]);
        if (tmp_iter_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_assign_source_29 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
        Py_DECREF(tmp_iter_arg_5);
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__source_iter;
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_29;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_10 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_30 = UNPACK_NEXT(tstate, tmp_unpack_10, 0, 2);
        if (tmp_assign_source_30 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 315;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_1;
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_30;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_unpack_11;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_11 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_31 = UNPACK_NEXT(tstate, tmp_unpack_11, 1, 2);
        if (tmp_assign_source_31 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 315;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_2;
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_31;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_3;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_3); assert(HAS_ITERNEXT(tmp_iterator_name_3));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_3)->tp_iternext)(tmp_iterator_name_3);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooooooooooo";
                    exception_lineno = 315;
                    goto try_except_handler_10;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[17];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooo";
            exception_lineno = 315;
            goto try_except_handler_10;
        }
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_9;
    // End of try:
    try_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_6;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_32;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_32 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_shw;
            var_shw = tmp_assign_source_32;
            Py_INCREF(var_shw);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_33;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_33 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var_shh;
            var_shh = tmp_assign_source_33;
            Py_INCREF(var_shh);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_shw);
        tmp_cmp_expr_left_1 = var_shw;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_shh);
        tmp_cmp_expr_left_2 = var_shh;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(var_h);
        tmp_assattr_value_3 = var_h;
        CHECK_OBJECT(var_c);
        tmp_assattr_target_3 = var_c;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[30], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_6;
        }
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_shh);
        tmp_cmp_expr_left_3 = var_shh;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(var_w);
        tmp_assattr_value_4 = var_w;
        CHECK_OBJECT(var_c);
        tmp_assattr_target_4 = var_c;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[29], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_6;
        }
    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(var_w);
        tmp_tuple_element_4 = var_w;
        tmp_assattr_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assattr_value_5, 0, tmp_tuple_element_4);
        CHECK_OBJECT(var_h);
        tmp_tuple_element_4 = var_h;
        PyTuple_SET_ITEM0(tmp_assattr_value_5, 1, tmp_tuple_element_4);
        CHECK_OBJECT(var_c);
        tmp_assattr_target_5 = var_c;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[9], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_6;
        }
    }
    branch_end_4:;
    branch_end_2:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 310;
        type_description_1 = "ooooooooooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_671f9b4ba8259ed434c8620e038f71a0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_671f9b4ba8259ed434c8620e038f71a0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_671f9b4ba8259ed434c8620e038f71a0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_671f9b4ba8259ed434c8620e038f71a0,
        type_description_1,
        par_self,
        par_largs,
        var_children,
        var_l,
        var_t,
        var_r,
        var_b,
        var_i,
        var_x,
        var_y,
        var_w,
        var_h,
        var_c,
        var_shw,
        var_shh
    );


    // Release cached frame if used for exception.
    if (frame_671f9b4ba8259ed434c8620e038f71a0 == cache_frame_671f9b4ba8259ed434c8620e038f71a0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_671f9b4ba8259ed434c8620e038f71a0);
        cache_frame_671f9b4ba8259ed434c8620e038f71a0 = NULL;
    }

    assertFrameObject(frame_671f9b4ba8259ed434c8620e038f71a0);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_children);
    var_children = NULL;
    Py_XDECREF(var_l);
    var_l = NULL;
    Py_XDECREF(var_t);
    var_t = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_b);
    var_b = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_y);
    var_y = NULL;
    Py_XDECREF(var_w);
    var_w = NULL;
    Py_XDECREF(var_h);
    var_h = NULL;
    Py_XDECREF(var_c);
    var_c = NULL;
    Py_XDECREF(var_shw);
    var_shw = NULL;
    Py_XDECREF(var_shh);
    var_shh = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_children);
    var_children = NULL;
    Py_XDECREF(var_l);
    var_l = NULL;
    Py_XDECREF(var_t);
    var_t = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_b);
    var_b = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_y);
    var_y = NULL;
    Py_XDECREF(var_w);
    var_w = NULL;
    Py_XDECREF(var_h);
    var_h = NULL;
    Py_XDECREF(var_c);
    var_c = NULL;
    Py_XDECREF(var_shw);
    var_shw = NULL;
    Py_XDECREF(var_shh);
    var_shh = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_largs);
    Py_DECREF(par_largs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_largs);
    Py_DECREF(par_largs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_kivy$uix$boxlayout$$$function__4_add_widget(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_widget = python_pars[1];
    PyObject *par_args = python_pars[2];
    PyObject *par_kwargs = python_pars[3];
    struct Nuitka_FrameObject *frame_093c9c0811b561f4b52a5a5104bb513a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_093c9c0811b561f4b52a5a5104bb513a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_093c9c0811b561f4b52a5a5104bb513a)) {
        Py_XDECREF(cache_frame_093c9c0811b561f4b52a5a5104bb513a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_093c9c0811b561f4b52a5a5104bb513a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_093c9c0811b561f4b52a5a5104bb513a = MAKE_FUNCTION_FRAME(tstate, codeobj_093c9c0811b561f4b52a5a5104bb513a, module_kivy$uix$boxlayout, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_093c9c0811b561f4b52a5a5104bb513a->m_type_description == NULL);
    frame_093c9c0811b561f4b52a5a5104bb513a = cache_frame_093c9c0811b561f4b52a5a5104bb513a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_093c9c0811b561f4b52a5a5104bb513a);
    assert(Py_REFCNT(frame_093c9c0811b561f4b52a5a5104bb513a) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_widget);
        tmp_expression_value_1 = par_widget;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[3]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[64];
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[2]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 326;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        frame_093c9c0811b561f4b52a5a5104bb513a->m_frame.f_lineno = 326;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_kivy$uix$boxlayout, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_3 = BUILTIN_SUPER2(tstate, moduledict_kivy$uix$boxlayout, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[67]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_widget);
        tmp_tuple_element_1 = par_widget;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___main__$$$function__10_complex_call_helper_pos_star_list_star_dict(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_093c9c0811b561f4b52a5a5104bb513a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_093c9c0811b561f4b52a5a5104bb513a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_093c9c0811b561f4b52a5a5104bb513a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_093c9c0811b561f4b52a5a5104bb513a,
        type_description_1,
        par_self,
        par_widget,
        par_args,
        par_kwargs,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_093c9c0811b561f4b52a5a5104bb513a == cache_frame_093c9c0811b561f4b52a5a5104bb513a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_093c9c0811b561f4b52a5a5104bb513a);
        cache_frame_093c9c0811b561f4b52a5a5104bb513a = NULL;
    }

    assertFrameObject(frame_093c9c0811b561f4b52a5a5104bb513a);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_widget);
    Py_DECREF(par_widget);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_widget);
    Py_DECREF(par_widget);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_kivy$uix$boxlayout$$$function__5_remove_widget(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_widget = python_pars[1];
    PyObject *par_args = python_pars[2];
    PyObject *par_kwargs = python_pars[3];
    struct Nuitka_FrameObject *frame_d26fefc4c2768dbf44442eec6b00c956;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d26fefc4c2768dbf44442eec6b00c956 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d26fefc4c2768dbf44442eec6b00c956)) {
        Py_XDECREF(cache_frame_d26fefc4c2768dbf44442eec6b00c956);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d26fefc4c2768dbf44442eec6b00c956 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d26fefc4c2768dbf44442eec6b00c956 = MAKE_FUNCTION_FRAME(tstate, codeobj_d26fefc4c2768dbf44442eec6b00c956, module_kivy$uix$boxlayout, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d26fefc4c2768dbf44442eec6b00c956->m_type_description == NULL);
    frame_d26fefc4c2768dbf44442eec6b00c956 = cache_frame_d26fefc4c2768dbf44442eec6b00c956;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d26fefc4c2768dbf44442eec6b00c956);
    assert(Py_REFCNT(frame_d26fefc4c2768dbf44442eec6b00c956) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_widget);
        tmp_expression_value_1 = par_widget;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[68]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[64];
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[2]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 330;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        frame_d26fefc4c2768dbf44442eec6b00c956->m_frame.f_lineno = 330;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_kivy$uix$boxlayout, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_3 = BUILTIN_SUPER2(tstate, moduledict_kivy$uix$boxlayout, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[69]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_widget);
        tmp_tuple_element_1 = par_widget;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___main__$$$function__10_complex_call_helper_pos_star_list_star_dict(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d26fefc4c2768dbf44442eec6b00c956, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d26fefc4c2768dbf44442eec6b00c956->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d26fefc4c2768dbf44442eec6b00c956, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d26fefc4c2768dbf44442eec6b00c956,
        type_description_1,
        par_self,
        par_widget,
        par_args,
        par_kwargs,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_d26fefc4c2768dbf44442eec6b00c956 == cache_frame_d26fefc4c2768dbf44442eec6b00c956) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d26fefc4c2768dbf44442eec6b00c956);
        cache_frame_d26fefc4c2768dbf44442eec6b00c956 = NULL;
    }

    assertFrameObject(frame_d26fefc4c2768dbf44442eec6b00c956);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_widget);
    Py_DECREF(par_widget);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_widget);
    Py_DECREF(par_widget);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_kivy$uix$boxlayout$$$function__1___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_kivy$uix$boxlayout$$$function__1___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[102],
#endif
        codeobj_50ec750e38e4d0336960f4a59dd32888,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_kivy$uix$boxlayout,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_kivy$uix$boxlayout$$$function__2__iterate_layout() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_kivy$uix$boxlayout$$$function__2__iterate_layout,
        mod_consts[58],
#if PYTHON_VERSION >= 0x300
        mod_consts[59],
#endif
        codeobj_8e7498020f5d4aa03d09122d263837af,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_kivy$uix$boxlayout,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_kivy$uix$boxlayout$$$function__3_do_layout() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_kivy$uix$boxlayout$$$function__3_do_layout,
        mod_consts[103],
#if PYTHON_VERSION >= 0x300
        mod_consts[104],
#endif
        codeobj_671f9b4ba8259ed434c8620e038f71a0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_kivy$uix$boxlayout,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_kivy$uix$boxlayout$$$function__4_add_widget() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_kivy$uix$boxlayout$$$function__4_add_widget,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        mod_consts[105],
#endif
        codeobj_093c9c0811b561f4b52a5a5104bb513a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_kivy$uix$boxlayout,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_kivy$uix$boxlayout$$$function__5_remove_widget() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_kivy$uix$boxlayout$$$function__5_remove_widget,
        mod_consts[69],
#if PYTHON_VERSION >= 0x300
        mod_consts[106],
#endif
        codeobj_d26fefc4c2768dbf44442eec6b00c956,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_kivy$uix$boxlayout,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

static function_impl_code const function_table_kivy$uix$boxlayout[] = {
    impl_kivy$uix$boxlayout$$$function__1___init__,
    impl_kivy$uix$boxlayout$$$function__2__iterate_layout,
    impl_kivy$uix$boxlayout$$$function__3_do_layout,
    impl_kivy$uix$boxlayout$$$function__4_add_widget,
    impl_kivy$uix$boxlayout$$$function__5_remove_widget,
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTuple(args, "O:reduce_compiled_function", &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_kivy$uix$boxlayout);

    if (unlikely(offset == -1)) {
        PyThreadState *tstate = PyThreadState_GET();
#if 0
        PRINT_STRING("Looking for:");
        PRINT_ITEM(func);
        PRINT_NEW_LINE();
#endif
        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);


    PyObject *result = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 3, function->m_kwdefaults ? function->m_kwdefaults : Py_None);
#else
    PyTuple_SET_ITEM0(result, 3, Py_None);
#endif
    PyTuple_SET_ITEM0(result, 4, function->m_doc != NULL ? function->m_doc : Py_None);

    if (offset == -5) {
        CHECK_OBJECT(function->m_constant_return_value);
        PyTuple_SET_ITEM0(result, 5, function->m_constant_return_value);
    } else {
        PyTuple_SET_ITEM0(result, 5, Py_None);
    }

#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 6, function->m_qualname);
#else
    PyTuple_SET_ITEM0(result, 6, Py_None);
#endif

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS, NULL};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *function_index;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *kw_defaults;
    PyObject *doc;
    PyObject *constant_return_value;
    PyObject *function_qualname;

    if (!PyArg_ParseTuple(args, "OOOOOO:create_compiled_function", &function_index, &code_object_desc, &defaults, &kw_defaults, &doc, &constant_return_value, &function_qualname, NULL)) {
        return NULL;
    }

#if PYTHON_VERSION >= 0x300
    if (kw_defaults == Py_None) {
        kw_defaults = NULL;
    }
#endif

    return (PyObject *)Nuitka_Function_CreateFunctionViaCodeIndex(
        module_kivy$uix$boxlayout,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        function_table_kivy$uix$boxlayout,
        sizeof(function_table_kivy$uix$boxlayout) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_kivy$uix$boxlayout(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("kivy$uix$boxlayout");

    // Store the module for future use.
    module_kivy$uix$boxlayout = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants(tstate);

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("kivy$uix$boxlayout: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("kivy$uix$boxlayout: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initkivy$uix$boxlayout\n");

    moduledict_kivy$uix$boxlayout = MODULE_DICT(module_kivy$uix$boxlayout);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_kivy$uix$boxlayout,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_kivy$uix$boxlayout,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[117]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_kivy$uix$boxlayout, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_kivy$uix$boxlayout,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_kivy$uix$boxlayout, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_kivy$uix$boxlayout,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_kivy$uix$boxlayout, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_kivy$uix$boxlayout,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_kivy$uix$boxlayout);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_kivy$uix$boxlayout, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_kivy$uix$boxlayout, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_kivy$uix$boxlayout, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_kivy$uix$boxlayout, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_kivy$uix$boxlayout);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_kivy$uix$boxlayout, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_75ee53c31635c2b9a3feb8243d8c1a5a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    PyObject *locals_kivy$uix$boxlayout$$$class__1_BoxLayout_82 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_27d5bb2831a84feee59685b482050b7b_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[70];
        UPDATE_STRING_DICT0(moduledict_kivy$uix$boxlayout, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_kivy$uix$boxlayout, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_2);
    }
    frame_75ee53c31635c2b9a3feb8243d8c1a5a = MAKE_MODULE_FRAME(codeobj_75ee53c31635c2b9a3feb8243d8c1a5a, module_kivy$uix$boxlayout);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_75ee53c31635c2b9a3feb8243d8c1a5a);
    assert(Py_REFCNT(frame_75ee53c31635c2b9a3feb8243d8c1a5a) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_kivy$uix$boxlayout, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[73]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[74], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_kivy$uix$boxlayout, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[73]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[75], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_kivy$uix$boxlayout, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[77];
        UPDATE_STRING_DICT0(moduledict_kivy$uix$boxlayout, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[79];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_kivy$uix$boxlayout;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[80];
        tmp_level_value_1 = mod_consts[15];
        frame_75ee53c31635c2b9a3feb8243d8c1a5a->m_frame.f_lineno = 77;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_kivy$uix$boxlayout,
                mod_consts[81],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[81]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_kivy$uix$boxlayout, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[82];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_kivy$uix$boxlayout;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[83];
        tmp_level_value_2 = mod_consts[15];
        frame_75ee53c31635c2b9a3feb8243d8c1a5a->m_frame.f_lineno = 78;
        tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_kivy$uix$boxlayout,
                mod_consts[84],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[84]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_kivy$uix$boxlayout, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_kivy$uix$boxlayout,
                mod_consts[85],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[85]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_kivy$uix$boxlayout, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_kivy$uix$boxlayout,
                mod_consts[86],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[86]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_kivy$uix$boxlayout, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_kivy$uix$boxlayout,
                mod_consts[87],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[87]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_kivy$uix$boxlayout, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_10);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_kivy$uix$boxlayout, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_2;
        }
        tmp_assign_source_11 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_11, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_12 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_2;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_1 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[15];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_2;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_14 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_14;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts[88]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_2;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[88]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_2;
        }
        tmp_tuple_element_2 = mod_consts[0];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_75ee53c31635c2b9a3feb8243d8c1a5a->m_frame.f_lineno = 82;
        tmp_assign_source_15 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_15;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts[89]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_2;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_name_value_3;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[90];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_5 = tmp_class_creation_1__metaclass;
        tmp_name_value_3 = mod_consts[91];
        tmp_default_value_1 = mod_consts[92];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_3, tmp_default_value_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_2;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_6 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[91]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 82;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_16;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_17;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_kivy$uix$boxlayout$$$class__1_BoxLayout_82 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[93];
        tmp_res = PyObject_SetItem(locals_kivy$uix$boxlayout$$$class__1_BoxLayout_82, mod_consts[94], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[95];
        tmp_res = PyObject_SetItem(locals_kivy$uix$boxlayout$$$class__1_BoxLayout_82, mod_consts[71], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[0];
        tmp_res = PyObject_SetItem(locals_kivy$uix$boxlayout$$$class__1_BoxLayout_82, mod_consts[96], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_4;
        }
        frame_27d5bb2831a84feee59685b482050b7b_2 = MAKE_CLASS_FRAME(tstate, codeobj_27d5bb2831a84feee59685b482050b7b, module_kivy$uix$boxlayout, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_27d5bb2831a84feee59685b482050b7b_2);
        assert(Py_REFCNT(frame_27d5bb2831a84feee59685b482050b7b_2) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_2;
            tmp_called_value_2 = PyObject_GetItem(locals_kivy$uix$boxlayout$$$class__1_BoxLayout_82, mod_consts[84]);

            if (tmp_called_value_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_kivy$uix$boxlayout, (Nuitka_StringObject *)mod_consts[84]);

                    if (unlikely(tmp_called_value_2 == NULL)) {
                        tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[84]);
                    }

                    if (tmp_called_value_2 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 86;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_2);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_27d5bb2831a84feee59685b482050b7b_2->m_frame.f_lineno = 86;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_2, mod_consts[97]);

            Py_DECREF(tmp_called_value_2);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_kivy$uix$boxlayout$$$class__1_BoxLayout_82, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_3;
            PyObject *tmp_call_arg_element_1;
            tmp_called_value_3 = PyObject_GetItem(locals_kivy$uix$boxlayout$$$class__1_BoxLayout_82, mod_consts[86]);

            if (tmp_called_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_kivy$uix$boxlayout, (Nuitka_StringObject *)mod_consts[86]);

                    if (unlikely(tmp_called_value_3 == NULL)) {
                        tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
                    }

                    if (tmp_called_value_3 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 93;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_3);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_call_arg_element_1 = MAKE_LIST_REPEATED(4, mod_consts[15]);
            frame_27d5bb2831a84feee59685b482050b7b_2->m_frame.f_lineno = 93;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_call_arg_element_1);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_call_arg_element_1);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_kivy$uix$boxlayout$$$class__1_BoxLayout_82, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_4;
            tmp_called_value_4 = PyObject_GetItem(locals_kivy$uix$boxlayout$$$class__1_BoxLayout_82, mod_consts[85]);

            if (tmp_called_value_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_kivy$uix$boxlayout, (Nuitka_StringObject *)mod_consts[85]);

                    if (unlikely(tmp_called_value_4 == NULL)) {
                        tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[85]);
                    }

                    if (tmp_called_value_4 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 107;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_4);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_27d5bb2831a84feee59685b482050b7b_2->m_frame.f_lineno = 107;
            tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_4, &PyTuple_GET_ITEM(mod_consts[98], 0), mod_consts[99]);
            Py_DECREF(tmp_called_value_4);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_kivy$uix$boxlayout$$$class__1_BoxLayout_82, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_5;
            tmp_called_value_5 = PyObject_GetItem(locals_kivy$uix$boxlayout$$$class__1_BoxLayout_82, mod_consts[84]);

            if (tmp_called_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_kivy$uix$boxlayout, (Nuitka_StringObject *)mod_consts[84]);

                    if (unlikely(tmp_called_value_5 == NULL)) {
                        tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[84]);
                    }

                    if (tmp_called_value_5 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 115;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_5);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_27d5bb2831a84feee59685b482050b7b_2->m_frame.f_lineno = 115;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_5, mod_consts[97]);

            Py_DECREF(tmp_called_value_5);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_kivy$uix$boxlayout$$$class__1_BoxLayout_82, mod_consts[100], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_6;
            tmp_called_value_6 = PyObject_GetItem(locals_kivy$uix$boxlayout$$$class__1_BoxLayout_82, mod_consts[84]);

            if (tmp_called_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_kivy$uix$boxlayout, (Nuitka_StringObject *)mod_consts[84]);

                    if (unlikely(tmp_called_value_6 == NULL)) {
                        tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[84]);
                    }

                    if (tmp_called_value_6 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 124;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_6);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_27d5bb2831a84feee59685b482050b7b_2->m_frame.f_lineno = 124;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_6, mod_consts[97]);

            Py_DECREF(tmp_called_value_6);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_kivy$uix$boxlayout$$$class__1_BoxLayout_82, mod_consts[101], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_args_element_value_2;
            tmp_called_value_7 = PyObject_GetItem(locals_kivy$uix$boxlayout$$$class__1_BoxLayout_82, mod_consts[87]);

            if (tmp_called_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_kivy$uix$boxlayout, (Nuitka_StringObject *)mod_consts[87]);

                    if (unlikely(tmp_called_value_7 == NULL)) {
                        tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[87]);
                    }

                    if (tmp_called_value_7 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 133;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_7);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_element_value_1 = PyObject_GetItem(locals_kivy$uix$boxlayout$$$class__1_BoxLayout_82, mod_consts[100]);

            if (unlikely(tmp_args_element_value_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_called_value_7);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[100]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 133;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_args_element_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_7);

                exception_lineno = 133;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_2 = PyObject_GetItem(locals_kivy$uix$boxlayout$$$class__1_BoxLayout_82, mod_consts[101]);

            if (unlikely(tmp_args_element_value_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_called_value_7);
                Py_DECREF(tmp_args_element_value_1);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[101]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 133;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_args_element_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_7);
                Py_DECREF(tmp_args_element_value_1);

                exception_lineno = 133;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_27d5bb2831a84feee59685b482050b7b_2->m_frame.f_lineno = 133;
            {
                PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
            }

            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_kivy$uix$boxlayout$$$class__1_BoxLayout_82, mod_consts[26], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_kivy$uix$boxlayout$$$function__1___init__();

        tmp_res = PyObject_SetItem(locals_kivy$uix$boxlayout$$$class__1_BoxLayout_82, mod_consts[1], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_kivy$uix$boxlayout$$$function__2__iterate_layout();

        tmp_res = PyObject_SetItem(locals_kivy$uix$boxlayout$$$class__1_BoxLayout_82, mod_consts[58], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_kivy$uix$boxlayout$$$function__3_do_layout();

        tmp_res = PyObject_SetItem(locals_kivy$uix$boxlayout$$$class__1_BoxLayout_82, mod_consts[103], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_kivy$uix$boxlayout$$$function__4_add_widget();

        tmp_res = PyObject_SetItem(locals_kivy$uix$boxlayout$$$class__1_BoxLayout_82, mod_consts[67], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_kivy$uix$boxlayout$$$function__5_remove_widget();

        tmp_res = PyObject_SetItem(locals_kivy$uix$boxlayout$$$class__1_BoxLayout_82, mod_consts[69], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_27d5bb2831a84feee59685b482050b7b_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_27d5bb2831a84feee59685b482050b7b_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_27d5bb2831a84feee59685b482050b7b_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_27d5bb2831a84feee59685b482050b7b_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_27d5bb2831a84feee59685b482050b7b_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;

                goto try_except_handler_4;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_kivy$uix$boxlayout$$$class__1_BoxLayout_82, mod_consts[107], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_4;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_8 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[0];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_kivy$uix$boxlayout$$$class__1_BoxLayout_82;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_75ee53c31635c2b9a3feb8243d8c1a5a->m_frame.f_lineno = 82;
            tmp_assign_source_18 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_18;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_17 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_17);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_kivy$uix$boxlayout$$$class__1_BoxLayout_82);
        locals_kivy$uix$boxlayout$$$class__1_BoxLayout_82 = NULL;
        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_kivy$uix$boxlayout$$$class__1_BoxLayout_82);
        locals_kivy$uix$boxlayout$$$class__1_BoxLayout_82 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 82;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_kivy$uix$boxlayout, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_17);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_75ee53c31635c2b9a3feb8243d8c1a5a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_75ee53c31635c2b9a3feb8243d8c1a5a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_75ee53c31635c2b9a3feb8243d8c1a5a, exception_lineno);
    }



    assertFrameObject(frame_75ee53c31635c2b9a3feb8243d8c1a5a);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("kivy$uix$boxlayout", false);

    Py_INCREF(module_kivy$uix$boxlayout);
    return module_kivy$uix$boxlayout;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_kivy$uix$boxlayout, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("kivy$uix$boxlayout", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
