/* Generated code for Python module 'screen_check'
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

/* The "module_screen_check" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_screen_check;
PyDictObject *moduledict_screen_check;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[30];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[30];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("screen_check"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 30; i++) {
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
void checkModuleConstants_screen_check(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 30; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_b7729079df1639ebc6e9308921f69e05;
static PyCodeObject *codeobj_932ebfa17add00da88848d3bcc81c84f;
static PyCodeObject *codeobj_82cd33e5e5b859ce6782fc2d74100489;
static PyCodeObject *codeobj_81a61e90a57aa252d97d068141ebc399;
static PyCodeObject *codeobj_fab7de919fe5b4d5733f1b578dc0abe7;
static PyCodeObject *codeobj_95c35314c002aaec76a228d802966a72;
static PyCodeObject *codeobj_22c694cc0ffc4436365e84301ea03f8f;
static PyCodeObject *codeobj_7c961565290f97eb0e71224261db4b69;
static PyCodeObject *codeobj_8aa37a8b727a31fab4ec613b309243db;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[26]); CHECK_OBJECT(module_filename_obj);
    codeobj_b7729079df1639ebc6e9308921f69e05 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[27], mod_consts[27], NULL, NULL, 0, 0, 0);
    codeobj_932ebfa17add00da88848d3bcc81c84f = MAKE_CODE_OBJECT(module_filename_obj, 21, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[21], mod_consts[21], NULL, NULL, 0, 0, 0);
    codeobj_82cd33e5e5b859ce6782fc2d74100489 = MAKE_CODE_OBJECT(module_filename_obj, 14, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[19], mod_consts[19], NULL, NULL, 0, 0, 0);
    codeobj_81a61e90a57aa252d97d068141ebc399 = MAKE_CODE_OBJECT(module_filename_obj, 28, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[23], mod_consts[23], NULL, NULL, 0, 0, 0);
    codeobj_fab7de919fe5b4d5733f1b578dc0abe7 = MAKE_CODE_OBJECT(module_filename_obj, 35, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[25], mod_consts[25], NULL, NULL, 0, 0, 0);
    codeobj_95c35314c002aaec76a228d802966a72 = MAKE_CODE_OBJECT(module_filename_obj, 17, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[20], mod_consts[20], NULL, NULL, 0, 0, 0);
    codeobj_22c694cc0ffc4436365e84301ea03f8f = MAKE_CODE_OBJECT(module_filename_obj, 10, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[18], mod_consts[18], NULL, NULL, 0, 0, 0);
    codeobj_7c961565290f97eb0e71224261db4b69 = MAKE_CODE_OBJECT(module_filename_obj, 24, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[22], mod_consts[22], NULL, NULL, 0, 0, 0);
    codeobj_8aa37a8b727a31fab4ec613b309243db = MAKE_CODE_OBJECT(module_filename_obj, 31, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[24], mod_consts[24], mod_consts[28], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_screen_check$$$function__1_set_sitea();


static PyObject *MAKE_FUNCTION_screen_check$$$function__2_get_sitea();


static PyObject *MAKE_FUNCTION_screen_check$$$function__3_set_doors();


static PyObject *MAKE_FUNCTION_screen_check$$$function__4_get_doors();


static PyObject *MAKE_FUNCTION_screen_check$$$function__5_set_spawn();


static PyObject *MAKE_FUNCTION_screen_check$$$function__6_get_spawn();


static PyObject *MAKE_FUNCTION_screen_check$$$function__7_set_time();


static PyObject *MAKE_FUNCTION_screen_check$$$function__8_get_time();


// The module function definitions.
static PyObject *impl_screen_check$$$function__1_set_sitea(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_22c694cc0ffc4436365e84301ea03f8f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_22c694cc0ffc4436365e84301ea03f8f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_22c694cc0ffc4436365e84301ea03f8f)) {
        Py_XDECREF(cache_frame_22c694cc0ffc4436365e84301ea03f8f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_22c694cc0ffc4436365e84301ea03f8f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_22c694cc0ffc4436365e84301ea03f8f = MAKE_FUNCTION_FRAME(tstate, codeobj_22c694cc0ffc4436365e84301ea03f8f, module_screen_check, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_22c694cc0ffc4436365e84301ea03f8f->m_type_description == NULL);
    frame_22c694cc0ffc4436365e84301ea03f8f = cache_frame_22c694cc0ffc4436365e84301ea03f8f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_22c694cc0ffc4436365e84301ea03f8f);
    assert(Py_REFCNT(frame_22c694cc0ffc4436365e84301ea03f8f) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_operand_value_1;
        tmp_operand_value_1 = GET_STRING_DICT_VALUE(moduledict_screen_check, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_operand_value_1 == NULL)) {
            tmp_operand_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = (tmp_res == 0) ? Py_True : Py_False;
        UPDATE_STRING_DICT0(moduledict_screen_check, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_22c694cc0ffc4436365e84301ea03f8f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_22c694cc0ffc4436365e84301ea03f8f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_22c694cc0ffc4436365e84301ea03f8f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_22c694cc0ffc4436365e84301ea03f8f,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_22c694cc0ffc4436365e84301ea03f8f == cache_frame_22c694cc0ffc4436365e84301ea03f8f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_22c694cc0ffc4436365e84301ea03f8f);
        cache_frame_22c694cc0ffc4436365e84301ea03f8f = NULL;
    }

    assertFrameObject(frame_22c694cc0ffc4436365e84301ea03f8f);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_screen_check$$$function__2_get_sitea(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_82cd33e5e5b859ce6782fc2d74100489;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_82cd33e5e5b859ce6782fc2d74100489 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_82cd33e5e5b859ce6782fc2d74100489)) {
        Py_XDECREF(cache_frame_82cd33e5e5b859ce6782fc2d74100489);

#if _DEBUG_REFCOUNTS
        if (cache_frame_82cd33e5e5b859ce6782fc2d74100489 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_82cd33e5e5b859ce6782fc2d74100489 = MAKE_FUNCTION_FRAME(tstate, codeobj_82cd33e5e5b859ce6782fc2d74100489, module_screen_check, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_82cd33e5e5b859ce6782fc2d74100489->m_type_description == NULL);
    frame_82cd33e5e5b859ce6782fc2d74100489 = cache_frame_82cd33e5e5b859ce6782fc2d74100489;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_82cd33e5e5b859ce6782fc2d74100489);
    assert(Py_REFCNT(frame_82cd33e5e5b859ce6782fc2d74100489) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_screen_check, (Nuitka_StringObject *)mod_consts[0]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_82cd33e5e5b859ce6782fc2d74100489, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_82cd33e5e5b859ce6782fc2d74100489->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_82cd33e5e5b859ce6782fc2d74100489, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_82cd33e5e5b859ce6782fc2d74100489,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_82cd33e5e5b859ce6782fc2d74100489 == cache_frame_82cd33e5e5b859ce6782fc2d74100489) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_82cd33e5e5b859ce6782fc2d74100489);
        cache_frame_82cd33e5e5b859ce6782fc2d74100489 = NULL;
    }

    assertFrameObject(frame_82cd33e5e5b859ce6782fc2d74100489);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_screen_check$$$function__3_set_doors(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_95c35314c002aaec76a228d802966a72;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_95c35314c002aaec76a228d802966a72 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_95c35314c002aaec76a228d802966a72)) {
        Py_XDECREF(cache_frame_95c35314c002aaec76a228d802966a72);

#if _DEBUG_REFCOUNTS
        if (cache_frame_95c35314c002aaec76a228d802966a72 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_95c35314c002aaec76a228d802966a72 = MAKE_FUNCTION_FRAME(tstate, codeobj_95c35314c002aaec76a228d802966a72, module_screen_check, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_95c35314c002aaec76a228d802966a72->m_type_description == NULL);
    frame_95c35314c002aaec76a228d802966a72 = cache_frame_95c35314c002aaec76a228d802966a72;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_95c35314c002aaec76a228d802966a72);
    assert(Py_REFCNT(frame_95c35314c002aaec76a228d802966a72) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_operand_value_1;
        tmp_operand_value_1 = GET_STRING_DICT_VALUE(moduledict_screen_check, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_operand_value_1 == NULL)) {
            tmp_operand_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = (tmp_res == 0) ? Py_True : Py_False;
        UPDATE_STRING_DICT0(moduledict_screen_check, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_95c35314c002aaec76a228d802966a72, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_95c35314c002aaec76a228d802966a72->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_95c35314c002aaec76a228d802966a72, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_95c35314c002aaec76a228d802966a72,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_95c35314c002aaec76a228d802966a72 == cache_frame_95c35314c002aaec76a228d802966a72) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_95c35314c002aaec76a228d802966a72);
        cache_frame_95c35314c002aaec76a228d802966a72 = NULL;
    }

    assertFrameObject(frame_95c35314c002aaec76a228d802966a72);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_screen_check$$$function__4_get_doors(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_932ebfa17add00da88848d3bcc81c84f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_932ebfa17add00da88848d3bcc81c84f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_932ebfa17add00da88848d3bcc81c84f)) {
        Py_XDECREF(cache_frame_932ebfa17add00da88848d3bcc81c84f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_932ebfa17add00da88848d3bcc81c84f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_932ebfa17add00da88848d3bcc81c84f = MAKE_FUNCTION_FRAME(tstate, codeobj_932ebfa17add00da88848d3bcc81c84f, module_screen_check, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_932ebfa17add00da88848d3bcc81c84f->m_type_description == NULL);
    frame_932ebfa17add00da88848d3bcc81c84f = cache_frame_932ebfa17add00da88848d3bcc81c84f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_932ebfa17add00da88848d3bcc81c84f);
    assert(Py_REFCNT(frame_932ebfa17add00da88848d3bcc81c84f) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_screen_check, (Nuitka_StringObject *)mod_consts[1]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 22;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_932ebfa17add00da88848d3bcc81c84f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_932ebfa17add00da88848d3bcc81c84f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_932ebfa17add00da88848d3bcc81c84f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_932ebfa17add00da88848d3bcc81c84f,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_932ebfa17add00da88848d3bcc81c84f == cache_frame_932ebfa17add00da88848d3bcc81c84f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_932ebfa17add00da88848d3bcc81c84f);
        cache_frame_932ebfa17add00da88848d3bcc81c84f = NULL;
    }

    assertFrameObject(frame_932ebfa17add00da88848d3bcc81c84f);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_screen_check$$$function__5_set_spawn(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_7c961565290f97eb0e71224261db4b69;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_7c961565290f97eb0e71224261db4b69 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7c961565290f97eb0e71224261db4b69)) {
        Py_XDECREF(cache_frame_7c961565290f97eb0e71224261db4b69);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7c961565290f97eb0e71224261db4b69 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7c961565290f97eb0e71224261db4b69 = MAKE_FUNCTION_FRAME(tstate, codeobj_7c961565290f97eb0e71224261db4b69, module_screen_check, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7c961565290f97eb0e71224261db4b69->m_type_description == NULL);
    frame_7c961565290f97eb0e71224261db4b69 = cache_frame_7c961565290f97eb0e71224261db4b69;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7c961565290f97eb0e71224261db4b69);
    assert(Py_REFCNT(frame_7c961565290f97eb0e71224261db4b69) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_operand_value_1;
        tmp_operand_value_1 = GET_STRING_DICT_VALUE(moduledict_screen_check, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_operand_value_1 == NULL)) {
            tmp_operand_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = (tmp_res == 0) ? Py_True : Py_False;
        UPDATE_STRING_DICT0(moduledict_screen_check, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7c961565290f97eb0e71224261db4b69, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7c961565290f97eb0e71224261db4b69->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7c961565290f97eb0e71224261db4b69, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7c961565290f97eb0e71224261db4b69,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_7c961565290f97eb0e71224261db4b69 == cache_frame_7c961565290f97eb0e71224261db4b69) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7c961565290f97eb0e71224261db4b69);
        cache_frame_7c961565290f97eb0e71224261db4b69 = NULL;
    }

    assertFrameObject(frame_7c961565290f97eb0e71224261db4b69);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_screen_check$$$function__6_get_spawn(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_81a61e90a57aa252d97d068141ebc399;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_81a61e90a57aa252d97d068141ebc399 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_81a61e90a57aa252d97d068141ebc399)) {
        Py_XDECREF(cache_frame_81a61e90a57aa252d97d068141ebc399);

#if _DEBUG_REFCOUNTS
        if (cache_frame_81a61e90a57aa252d97d068141ebc399 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_81a61e90a57aa252d97d068141ebc399 = MAKE_FUNCTION_FRAME(tstate, codeobj_81a61e90a57aa252d97d068141ebc399, module_screen_check, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_81a61e90a57aa252d97d068141ebc399->m_type_description == NULL);
    frame_81a61e90a57aa252d97d068141ebc399 = cache_frame_81a61e90a57aa252d97d068141ebc399;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_81a61e90a57aa252d97d068141ebc399);
    assert(Py_REFCNT(frame_81a61e90a57aa252d97d068141ebc399) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_screen_check, (Nuitka_StringObject *)mod_consts[2]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 29;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_81a61e90a57aa252d97d068141ebc399, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_81a61e90a57aa252d97d068141ebc399->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_81a61e90a57aa252d97d068141ebc399, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_81a61e90a57aa252d97d068141ebc399,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_81a61e90a57aa252d97d068141ebc399 == cache_frame_81a61e90a57aa252d97d068141ebc399) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_81a61e90a57aa252d97d068141ebc399);
        cache_frame_81a61e90a57aa252d97d068141ebc399 = NULL;
    }

    assertFrameObject(frame_81a61e90a57aa252d97d068141ebc399);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_screen_check$$$function__7_set_time(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_val = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(par_val);
        tmp_assign_source_1 = par_val;
        UPDATE_STRING_DICT0(moduledict_screen_check, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_1);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_val);
    Py_DECREF(par_val);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_screen_check$$$function__8_get_time(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_fab7de919fe5b4d5733f1b578dc0abe7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fab7de919fe5b4d5733f1b578dc0abe7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fab7de919fe5b4d5733f1b578dc0abe7)) {
        Py_XDECREF(cache_frame_fab7de919fe5b4d5733f1b578dc0abe7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fab7de919fe5b4d5733f1b578dc0abe7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fab7de919fe5b4d5733f1b578dc0abe7 = MAKE_FUNCTION_FRAME(tstate, codeobj_fab7de919fe5b4d5733f1b578dc0abe7, module_screen_check, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fab7de919fe5b4d5733f1b578dc0abe7->m_type_description == NULL);
    frame_fab7de919fe5b4d5733f1b578dc0abe7 = cache_frame_fab7de919fe5b4d5733f1b578dc0abe7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_fab7de919fe5b4d5733f1b578dc0abe7);
    assert(Py_REFCNT(frame_fab7de919fe5b4d5733f1b578dc0abe7) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_screen_check, (Nuitka_StringObject *)mod_consts[3]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 36;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fab7de919fe5b4d5733f1b578dc0abe7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fab7de919fe5b4d5733f1b578dc0abe7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fab7de919fe5b4d5733f1b578dc0abe7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fab7de919fe5b4d5733f1b578dc0abe7,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_fab7de919fe5b4d5733f1b578dc0abe7 == cache_frame_fab7de919fe5b4d5733f1b578dc0abe7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fab7de919fe5b4d5733f1b578dc0abe7);
        cache_frame_fab7de919fe5b4d5733f1b578dc0abe7 = NULL;
    }

    assertFrameObject(frame_fab7de919fe5b4d5733f1b578dc0abe7);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_screen_check$$$function__1_set_sitea() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_screen_check$$$function__1_set_sitea,
        mod_consts[18],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_22c694cc0ffc4436365e84301ea03f8f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_screen_check,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_screen_check$$$function__2_get_sitea() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_screen_check$$$function__2_get_sitea,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_82cd33e5e5b859ce6782fc2d74100489,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_screen_check,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_screen_check$$$function__3_set_doors() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_screen_check$$$function__3_set_doors,
        mod_consts[20],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_95c35314c002aaec76a228d802966a72,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_screen_check,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_screen_check$$$function__4_get_doors() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_screen_check$$$function__4_get_doors,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_932ebfa17add00da88848d3bcc81c84f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_screen_check,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_screen_check$$$function__5_set_spawn() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_screen_check$$$function__5_set_spawn,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7c961565290f97eb0e71224261db4b69,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_screen_check,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_screen_check$$$function__6_get_spawn() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_screen_check$$$function__6_get_spawn,
        mod_consts[23],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_81a61e90a57aa252d97d068141ebc399,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_screen_check,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_screen_check$$$function__7_set_time() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_screen_check$$$function__7_set_time,
        mod_consts[24],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8aa37a8b727a31fab4ec613b309243db,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_screen_check,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_screen_check$$$function__8_get_time() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_screen_check$$$function__8_get_time,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fab7de919fe5b4d5733f1b578dc0abe7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_screen_check,
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

static function_impl_code const function_table_screen_check[] = {
    impl_screen_check$$$function__1_set_sitea,
    impl_screen_check$$$function__2_get_sitea,
    impl_screen_check$$$function__3_set_doors,
    impl_screen_check$$$function__4_get_doors,
    impl_screen_check$$$function__5_set_spawn,
    impl_screen_check$$$function__6_get_spawn,
    impl_screen_check$$$function__7_set_time,
    impl_screen_check$$$function__8_get_time,
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

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_screen_check);

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
        module_screen_check,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        function_table_screen_check,
        sizeof(function_table_screen_check) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_screen_check(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("screen_check");

    // Store the module for future use.
    module_screen_check = module;

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
        PRINT_STRING("screen_check: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("screen_check: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initscreen_check\n");

    moduledict_screen_check = MODULE_DICT(module_screen_check);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_screen_check,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_screen_check,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[29]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_screen_check, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_screen_check,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_screen_check, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_screen_check,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_screen_check, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_screen_check,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_screen_check);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_screen_check, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_screen_check, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_screen_check, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_screen_check, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_screen_check);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_screen_check, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_b7729079df1639ebc6e9308921f69e05;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_screen_check, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_screen_check, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_2);
    }
    frame_b7729079df1639ebc6e9308921f69e05 = MAKE_MODULE_FRAME(codeobj_b7729079df1639ebc6e9308921f69e05, module_screen_check);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b7729079df1639ebc6e9308921f69e05);
    assert(Py_REFCNT(frame_b7729079df1639ebc6e9308921f69e05) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_screen_check, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[7], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_screen_check, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[8], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b7729079df1639ebc6e9308921f69e05, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b7729079df1639ebc6e9308921f69e05->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b7729079df1639ebc6e9308921f69e05, exception_lineno);
    }



    assertFrameObject(frame_b7729079df1639ebc6e9308921f69e05);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_screen_check, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_False;
        UPDATE_STRING_DICT0(moduledict_screen_check, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = GET_STRING_DICT_VALUE(moduledict_screen_check, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_assign_source_5 == NULL)) {
            tmp_assign_source_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT0(moduledict_screen_check, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = GET_STRING_DICT_VALUE(moduledict_screen_check, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_assign_source_6 == NULL)) {
            tmp_assign_source_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT0(moduledict_screen_check, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = GET_STRING_DICT_VALUE(moduledict_screen_check, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_assign_source_7 == NULL)) {
            tmp_assign_source_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        assert(!(tmp_assign_source_7 == NULL));
        UPDATE_STRING_DICT0(moduledict_screen_check, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[11];
        UPDATE_STRING_DICT0(moduledict_screen_check, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_LIST3(mod_consts[13],mod_consts[14],mod_consts[15]);
        UPDATE_STRING_DICT1(moduledict_screen_check, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_screen_check, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;


        tmp_assign_source_11 = MAKE_FUNCTION_screen_check$$$function__1_set_sitea();

        UPDATE_STRING_DICT1(moduledict_screen_check, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;


        tmp_assign_source_12 = MAKE_FUNCTION_screen_check$$$function__2_get_sitea();

        UPDATE_STRING_DICT1(moduledict_screen_check, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;


        tmp_assign_source_13 = MAKE_FUNCTION_screen_check$$$function__3_set_doors();

        UPDATE_STRING_DICT1(moduledict_screen_check, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;


        tmp_assign_source_14 = MAKE_FUNCTION_screen_check$$$function__4_get_doors();

        UPDATE_STRING_DICT1(moduledict_screen_check, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;


        tmp_assign_source_15 = MAKE_FUNCTION_screen_check$$$function__5_set_spawn();

        UPDATE_STRING_DICT1(moduledict_screen_check, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;


        tmp_assign_source_16 = MAKE_FUNCTION_screen_check$$$function__6_get_spawn();

        UPDATE_STRING_DICT1(moduledict_screen_check, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION_screen_check$$$function__7_set_time();

        UPDATE_STRING_DICT1(moduledict_screen_check, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;


        tmp_assign_source_18 = MAKE_FUNCTION_screen_check$$$function__8_get_time();

        UPDATE_STRING_DICT1(moduledict_screen_check, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_18);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("screen_check", false);

    Py_INCREF(module_screen_check);
    return module_screen_check;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_screen_check, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("screen_check", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
