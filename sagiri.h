#pragma once

#include <iostream>
#include <Windows.h>

HMODULE PythonLib;

bool IsNull(void* object) {
	if (object == NULL) {
		return true;
	}
	else {
		return false;
	}
}

HMODULE LoadPythonDllFromPath(char* path) {
	PythonLib = LoadLibrary(path);
	return PythonLib;
}

HMODULE LoadPythonDll() {
	PythonLib = LoadLibrary("./sagiri/python.dll");
	return PythonLib;
}

FARPROC GetFunction(HMODULE dll, char* name) {
	return GetProcAddress(dll, name);
}

FARPROC PythonFunction(char* name) {
	return GetFunction(PythonLib, name);
}

FARPROC _Py_add_one_to_index_C;/**/
FARPROC _Py_add_one_to_index_F;/**/
FARPROC _Py_ascii_whitespace;/**/
FARPROC _Py_BreakPoint;/**/
FARPROC _Py_BuildValue_SizeT;/**/
FARPROC _Py_c_abs;/**/
FARPROC _Py_c_diff;/**/
FARPROC _Py_c_neg;/**/
FARPROC _Py_c_pow;/**/
FARPROC _Py_c_prod;/**/
FARPROC _Py_c_quot;/**/
FARPROC _Py_c_sum;/**/
FARPROC _Py_CheckFunctionResult;/**/
FARPROC _Py_CheckRecursionLimit;/**/
FARPROC _Py_CheckRecursiveCall;/**/
FARPROC _Py_CoerceLegacyLocale;/**/
FARPROC _Py_convert_optional_to_ssize_t;/**/
FARPROC _Py_ctype_table;/**/
FARPROC _Py_ctype_tolower;/**/
FARPROC _Py_ctype_toupper;/**/
FARPROC _Py_Dealloc;/**/
FARPROC _Py_DecodeLocaleEx;/**/
FARPROC _Py_DecodeUTF8_surrogateescape;/**/
FARPROC _Py_DecodeUTF8Ex;/**/
FARPROC _Py_device_encoding;/**/
FARPROC _Py_dg_dtoa;/**/
FARPROC _Py_dg_freedtoa;/**/
FARPROC _Py_dg_infinity;/**/
FARPROC _Py_dg_stdnan;/**/
FARPROC _Py_dg_strtod;/**/
FARPROC _Py_DisplaySourceLine;/**/
FARPROC _Py_DumpASCII;/**/
FARPROC _Py_DumpDecimal;/**/
FARPROC _Py_DumpHexadecimal;/**/
FARPROC _Py_DumpTraceback;/**/
FARPROC _Py_DumpTracebackThreads;/**/
FARPROC _Py_dup;/**/
FARPROC _Py_EllipsisObject;/**/
FARPROC _Py_EncodeLocaleEx;/**/
FARPROC _Py_EncodeLocaleRaw;/**/
FARPROC _Py_EncodeUTF8Ex;/**/
FARPROC _Py_FalseStruct;/**/
FARPROC _Py_FatalInitError;/**/
FARPROC _Py_FindEnvConfigValue;/**/
FARPROC _Py_fopen;/**/
FARPROC _Py_fopen_obj;/**/
FARPROC _Py_FreeCharPArray;/**/
FARPROC _Py_fstat;/**/
FARPROC _Py_fstat_noraise;/**/
FARPROC _Py_get_inheritable;/**/
FARPROC _Py_GetAllocatedBlocks;/**/
FARPROC _Py_GetForceASCII;/**/
FARPROC _Py_GetGlobalVariablesAsDict;/**/
FARPROC _Py_GetLocaleconvNumeric;/**/
FARPROC _Py_gitidentifier;/**/
FARPROC _Py_gitversion;/**/
FARPROC _Py_HashBytes;/**/
FARPROC _Py_HashDouble;/**/
FARPROC _Py_HashPointer;/**/
FARPROC _Py_HashRandomization_Fini;/**/
FARPROC _Py_HashRandomization_Init;/**/
FARPROC _Py_HashSecret;/**/
FARPROC _Py_hashtable_clear;/**/
FARPROC _Py_hashtable_compare_direct;/**/
FARPROC _Py_hashtable_copy;/**/
FARPROC _Py_hashtable_destroy;/**/
FARPROC _Py_hashtable_foreach;/**/
FARPROC _Py_hashtable_get;/**/
FARPROC _Py_hashtable_get_entry;/**/
FARPROC _Py_hashtable_hash_ptr;/**/
FARPROC _Py_hashtable_new;/**/
FARPROC _Py_hashtable_new_full;/**/
FARPROC _Py_hashtable_pop;/**/
FARPROC _Py_hashtable_set;/**/
FARPROC _Py_hashtable_size;/**/
FARPROC _Py_Initialize_ReadEnvVarsNoAlloc;/**/
FARPROC _Py_InitializeCore;/**/
FARPROC _Py_InitializeFromConfig;/**/
FARPROC _Py_InitializeMainInterpreter;/**/
FARPROC _Py_IsCoreInitialized;/**/
FARPROC _Py_IsFinalizing;/**/
FARPROC _Py_LegacyLocaleDetected;/**/
FARPROC _Py_Mangle;/**/
FARPROC _Py_NoneStruct;/**/
FARPROC _Py_NotImplementedStruct;/**/
FARPROC _Py_open;/**/
FARPROC _Py_open_noraise;/**/
FARPROC _Py_PackageContext;/**/
FARPROC _Py_parse_inf_or_nan;/**/
FARPROC _Py_path_config;/**/
FARPROC _Py_PyAtExit;/**/
FARPROC _Py_read;/**/
FARPROC _Py_ReadHashSeed;/**/
FARPROC _Py_ReleaseInternedUnicodeStrings;/**/
FARPROC _Py_ResetForceASCII;/**/
FARPROC _Py_RestoreSignals;/**/
FARPROC _Py_set_inheritable;/**/
FARPROC _Py_set_inheritable_async_safe;/**/
FARPROC _Py_SetLocaleFromEnv;/**/
FARPROC _Py_SetProgramFullPath;/**/
FARPROC _Py_stat;/**/
FARPROC _Py_strhex;/**/
FARPROC _Py_strhex_bytes;/**/
FARPROC _Py_string_to_number_with_underscores;/**/
FARPROC _Py_SwappedOp;/**/
FARPROC _Py_TrueStruct;/**/
FARPROC _Py_UnixMain;/**/
FARPROC _Py_VaBuildStack;/**/
FARPROC _Py_VaBuildStack_SizeT;/**/
FARPROC _Py_VaBuildValue_SizeT;/**/
FARPROC _Py_wfopen;/**/
FARPROC _Py_wgetcwd;/**/
FARPROC _Py_write;/**/
FARPROC _Py_write_noraise;/**/
FARPROC _PyAccu_Accumulate;/**/
FARPROC _PyAccu_Destroy;/**/
FARPROC _PyAccu_Finish;/**/
FARPROC _PyAccu_FinishAsList;/**/
FARPROC _PyAccu_Init;/**/
FARPROC _PyArg_NoKeywords;/**/
FARPROC _PyArg_NoPositional;/**/
FARPROC _PyArg_Parse_SizeT;/**/
FARPROC _PyArg_ParseStack;/**/
FARPROC _PyArg_ParseStack_SizeT;/**/
FARPROC _PyArg_ParseStackAndKeywords;/**/
FARPROC _PyArg_ParseStackAndKeywords_SizeT;/**/
FARPROC _PyArg_ParseTuple_SizeT;/**/
FARPROC _PyArg_ParseTupleAndKeywords_SizeT;/**/
FARPROC _PyArg_ParseTupleAndKeywordsFast;/**/
FARPROC _PyArg_ParseTupleAndKeywordsFast_SizeT;/**/
FARPROC _PyArg_UnpackStack;/**/
FARPROC _PyArg_VaParse_SizeT;/**/
FARPROC _PyArg_VaParseTupleAndKeywords_SizeT;/**/
FARPROC _PyArg_VaParseTupleAndKeywordsFast;/**/
FARPROC _PyArg_VaParseTupleAndKeywordsFast_SizeT;/**/
FARPROC _PyAST_Optimize;/**/
FARPROC _PyAsyncGenASend_Type;/**/
FARPROC _PyAsyncGenAThrow_Type;/**/
FARPROC _PyAsyncGenWrappedValue_Type;/**/
FARPROC _PyBuiltin_Init;/**/
FARPROC _PyByteArray_empty_string;/**/
FARPROC _PyBytes_DecodeEscape;/**/
FARPROC _PyBytes_FormatEx;/**/
FARPROC _PyBytes_FromHex;/**/
FARPROC _PyBytes_Join;/**/
FARPROC _PyBytes_Resize;/**/
FARPROC _PyBytesWriter_Alloc;/**/
FARPROC _PyBytesWriter_Dealloc;/**/
FARPROC _PyBytesWriter_Finish;/**/
FARPROC _PyBytesWriter_Init;/**/
FARPROC _PyBytesWriter_Prepare;/**/
FARPROC _PyBytesWriter_Resize;/**/
FARPROC _PyBytesWriter_WriteBytes;/**/
FARPROC _PyCFunction_DebugMallocStats;/**/
FARPROC _PyCFunction_FastCallDict;/**/
FARPROC _PyCFunction_FastCallKeywords;/**/
FARPROC _PyCode_CheckLineNumber;/**/
FARPROC _PyCode_ConstantKey;/**/
FARPROC _PyCode_GetExtra;/**/
FARPROC _PyCode_SetExtra;/**/
FARPROC _PyCodec_DecodeText;/**/
FARPROC _PyCodec_EncodeText;/**/
FARPROC _PyCodec_Forget;/**/
FARPROC _PyCodec_Lookup;/**/
FARPROC _PyCodec_LookupTextEncoding;/**/
FARPROC _PyCodecInfo_GetIncrementalDecoder;/**/
FARPROC _PyCodecInfo_GetIncrementalEncoder;/**/
FARPROC _PyComplex_FormatAdvancedWriter;/**/
FARPROC _PyContext_NewHamtForTests;/**/
FARPROC _PyCoreConfig_AsDict;/**/
FARPROC _PyCoreConfig_Clear;/**/
FARPROC _PyCoreConfig_Copy;/**/
FARPROC _PyCoreConfig_Read;/**/
FARPROC _PyCoreConfig_SetGlobalConfig;/**/
FARPROC _PyCoroWrapper_Type;/**/
FARPROC _PyDebugAllocatorStats;/**/
FARPROC _PyDict_Contains;/**/
FARPROC _PyDict_DebugMallocStats;/**/
FARPROC _PyDict_DelItem_KnownHash;/**/
FARPROC _PyDict_DelItemId;/**/
FARPROC _PyDict_DelItemIf;/**/
FARPROC _PyDict_GetItem_KnownHash;/**/
FARPROC _PyDict_GetItemId;/**/
FARPROC _PyDict_GetItemIdWithError;/**/
FARPROC _PyDict_HasOnlyStringKeys;/**/
FARPROC _PyDict_MaybeUntrack;/**/
FARPROC _PyDict_MergeEx;/**/
FARPROC _PyDict_NewPresized;/**/
FARPROC _PyDict_Next;/**/
FARPROC _PyDict_Pop;/**/
FARPROC _PyDict_SetItem_KnownHash;/**/
FARPROC _PyDict_SetItemId;/**/
FARPROC _PyDict_SizeOf;/**/
FARPROC _PyDictView_Intersect;/**/
FARPROC _PyErr_BadInternalCall;/**/
FARPROC _PyErr_ChainExceptions;/**/
FARPROC _PyErr_FormatFromCause;/**/
FARPROC _PyErr_SetKeyError;/**/
FARPROC _PyErr_TrySetFromCause;/**/
FARPROC _PyEval_CallTracing;/**/
FARPROC _PyEval_EvalCodeWithName;/**/
FARPROC _PyEval_EvalFrameDefault;/**/
FARPROC _PyEval_FiniThreads;/**/
FARPROC _PyEval_GetAsyncGenFinalizer;/**/
FARPROC _PyEval_GetAsyncGenFirstiter;/**/
FARPROC _PyEval_GetBuiltinId;/**/
FARPROC _PyEval_GetCoroutineOriginTrackingDepth;/**/
FARPROC _PyEval_GetCoroutineWrapper;/**/
FARPROC _PyEval_GetSwitchInterval;/**/
FARPROC _PyEval_Initialize;/**/
FARPROC _PyEval_RequestCodeExtraIndex;/**/
FARPROC _PyEval_SetAsyncGenFinalizer;/**/
FARPROC _PyEval_SetAsyncGenFirstiter;/**/
FARPROC _PyEval_SetCoroutineOriginTrackingDepth;/**/
FARPROC _PyEval_SetCoroutineWrapper;/**/
FARPROC _PyEval_SetSwitchInterval;/**/
FARPROC _PyEval_SignalAsyncExc;/**/
FARPROC _PyEval_SignalReceived;/**/
FARPROC _PyEval_SliceIndex;/**/
FARPROC _PyEval_SliceIndexNotNone;/**/
FARPROC _PyExc_Fini;/**/
FARPROC _PyExc_Init;/**/
FARPROC _PyFloat_DebugMallocStats;/**/
FARPROC _PyFloat_FormatAdvancedWriter;/**/
FARPROC _PyFloat_Init;/**/
FARPROC _PyFloat_Pack2;/**/
FARPROC _PyFloat_Pack4;/**/
FARPROC _PyFloat_Pack8;/**/
FARPROC _PyFloat_Unpack2;/**/
FARPROC _PyFloat_Unpack4;/**/
FARPROC _PyFloat_Unpack8;/**/
FARPROC _PyFrame_DebugMallocStats;/**/
FARPROC _PyFrame_Init;/**/
FARPROC _PyFunction_FastCallDict;/**/
FARPROC _PyFunction_FastCallKeywords;/**/
FARPROC _PyGC_CollectIfEnabled;/**/
FARPROC _PyGC_CollectNoFail;/**/
FARPROC _PyGC_DumpShutdownStats;/**/
FARPROC _PyGC_Fini;/**/
FARPROC _PyGC_Initialize;/**/
FARPROC _PyGen_FetchStopIterationValue;/**/
FARPROC _PyGen_Finalize;/**/
FARPROC _PyGen_Send;/**/
FARPROC _PyGen_SetStopIterationValue;/**/
FARPROC _PyGILState_GetInterpreterStateUnsafe;/**/
FARPROC _PyGILState_Reinit;/**/
FARPROC _PyHamt_ArrayNode_Type;/**/
FARPROC _PyHamt_BitmapNode_Type;/**/
FARPROC _PyHamt_CollisionNode_Type;/**/
FARPROC _PyHamt_Type;/**/
FARPROC _PyHamtItems_Type;/**/
FARPROC _PyHamtKeys_Type;/**/
FARPROC _PyHamtValues_Type;/**/
FARPROC _PyImport_AcquireLock;/**/
FARPROC _PyImport_AddModuleObject;/**/
FARPROC _PyImport_FindBuiltin;/**/
FARPROC _PyImport_FindExtensionObject;/**/
FARPROC _PyImport_FindExtensionObjectEx;/**/
FARPROC _PyImport_Fini;/**/
FARPROC _PyImport_Fini2;/**/
FARPROC _PyImport_FixupBuiltin;/**/
FARPROC _PyImport_FixupExtensionObject;/**/
FARPROC _PyImport_GetModuleId;/**/
FARPROC _PyImport_Init;/**/
FARPROC _PyImport_IsInitialized;/**/
FARPROC _PyImport_ReInitLock;/**/
FARPROC _PyImport_ReleaseLock;/**/
FARPROC _PyImport_SetModule;/**/
FARPROC _PyImport_SetModuleString;/**/
FARPROC _PyImportHooks_Init;/**/
FARPROC _PyImportZip_Init;/**/
FARPROC _PyInterpreterState_Enable;/**/
FARPROC _PyInterpreterState_IDDecref;/**/
FARPROC _PyInterpreterState_IDIncref;/**/
FARPROC _PyInterpreterState_IDInitref;/**/
FARPROC _PyInterpreterState_LookUpID;/**/
FARPROC _PyList_DebugMallocStats;/**/
FARPROC _PyList_Extend;/**/
FARPROC _PyLong_AsByteArray;/**/
FARPROC _PyLong_AsInt;/**/
FARPROC _PyLong_AsTime_t;/**/
FARPROC _PyLong_Copy;/**/
FARPROC _PyLong_DigitValue;/**/
FARPROC _PyLong_DivmodNear;/**/
FARPROC _PyLong_Format;/**/
FARPROC _PyLong_FormatAdvancedWriter;/**/
FARPROC _PyLong_FormatBytesWriter;/**/
FARPROC _PyLong_FormatWriter;/**/
FARPROC _PyLong_Frexp;/**/
FARPROC _PyLong_FromByteArray;/**/
FARPROC _PyLong_FromBytes;/**/
FARPROC _PyLong_FromNbInt;/**/
FARPROC _PyLong_FromTime_t;/**/
FARPROC _PyLong_GCD;/**/
FARPROC _PyLong_New;/**/
FARPROC _PyLong_NumBits;/**/
FARPROC _PyLong_One;/**/
FARPROC _PyLong_Sign;/**/
FARPROC _PyLong_Zero;/**/
FARPROC _PyMainInterpreterConfig_AsDict;/**/
FARPROC _PyMainInterpreterConfig_Clear;/**/
FARPROC _PyMainInterpreterConfig_Copy;/**/
FARPROC _PyMainInterpreterConfig_Read;/**/
FARPROC _PyManagedBuffer_Type;/**/
FARPROC _PyMem_GetAllocatorsName;/**/
FARPROC _PyMem_RawStrdup;/**/
FARPROC _PyMem_RawWcsdup;/**/
FARPROC _PyMem_SetDefaultAllocator;/**/
FARPROC _PyMem_SetupAllocators;/**/
FARPROC _PyMem_Strdup;/**/
FARPROC _PyMethod_DebugMallocStats;/**/
FARPROC _PyMethodDef_RawFastCallDict;/**/
FARPROC _PyMethodDef_RawFastCallKeywords;/**/
FARPROC _PyMethodDescr_FastCallKeywords;/**/
FARPROC _PyMethodWrapper_Type;/**/
FARPROC _PyModule_Clear;/**/
FARPROC _PyModule_ClearDict;/**/
FARPROC _PyModule_CreateInitialized;/**/
FARPROC _PyNamespace_New;/**/
FARPROC _PyNamespace_Type;/**/
FARPROC _PyNode_SizeOf;/**/
FARPROC _PyNone_Type;/**/
FARPROC _PyNotImplemented_Type;/**/
FARPROC _PyObject_Call_Prepend;/**/
FARPROC _PyObject_CallFunction_SizeT;/**/
FARPROC _PyObject_CallMethod_SizeT;/**/
FARPROC _PyObject_CallMethodId;/**/
FARPROC _PyObject_CallMethodId_SizeT;/**/
FARPROC _PyObject_CallMethodIdObjArgs;/**/
FARPROC _PyObject_DebugMallocStats;/**/
FARPROC _PyObject_DebugTypeStats;/**/
FARPROC _PyObject_Dump;/**/
FARPROC _PyObject_FastCall_Prepend;/**/
FARPROC _PyObject_FastCallDict;/**/
FARPROC _PyObject_FastCallKeywords;/**/
FARPROC _PyObject_GC_Calloc;/**/
FARPROC _PyObject_GC_Malloc;/**/
FARPROC _PyObject_GC_New;/**/
FARPROC _PyObject_GC_NewVar;/**/
FARPROC _PyObject_GC_Resize;/**/
FARPROC _PyObject_GenericGetAttrWithDict;/**/
FARPROC _PyObject_GenericSetAttrWithDict;/**/
FARPROC _PyObject_GetAttrId;/**/
FARPROC _PyObject_GetBuiltin;/**/
FARPROC _PyObject_GetDictPtr;/**/
FARPROC _PyObject_HasAttrId;/**/
FARPROC _PyObject_HasFastCall;/**/
FARPROC _PyObject_HasLen;/**/
FARPROC _PyObject_IsAbstract;/**/
FARPROC _PyObject_IsFreed;/**/
FARPROC _PyObject_LookupAttr;/**/
FARPROC _PyObject_LookupAttrId;/**/
FARPROC _PyObject_LookupSpecial;/**/
FARPROC _PyObject_New;/**/
FARPROC _PyObject_NewVar;/**/
FARPROC _PyObject_NextNotImplemented;/**/
FARPROC _PyObject_RealIsInstance;/**/
FARPROC _PyObject_RealIsSubclass;/**/
FARPROC _PyObject_SetAttrId;/**/
FARPROC _PyOS_IsMainThread;/**/
FARPROC _PyOS_ReadlineTState;/**/
FARPROC _PyOS_SigintEvent;/**/
FARPROC _PyOS_URandom;/**/
FARPROC _PyOS_URandomNonblock;/**/
FARPROC _PyParser_Grammar;/**/
FARPROC _PyParser_TokenNames;/**/
FARPROC _PyPathConfig_Calculate;/**/
FARPROC _PyPathConfig_Clear;/**/
FARPROC _PyPathConfig_ComputeArgv0;/**/
FARPROC _PyPathConfig_Init;/**/
FARPROC _PyRuntime;/**/
FARPROC _PyRuntime_Finalize;/**/
FARPROC _PyRuntime_Initialize;/**/
FARPROC _PyRuntimeState_Fini;/**/
FARPROC _PyRuntimeState_Init;/**/
FARPROC _PySequence_BytesToCharpArray;/**/
FARPROC _PySequence_IterSearch;/**/
FARPROC _PySet_Dummy;/**/
FARPROC _PySet_NextEntry;/**/
FARPROC _PySet_Update;/**/
FARPROC _PySignal_AfterFork;/**/
FARPROC _PySlice_FromIndices;/**/
FARPROC _PySlice_GetLongIndices;/**/
FARPROC _PyStack_AsDict;/**/
FARPROC _PyStack_AsTuple;/**/
FARPROC _PyStack_AsTupleSlice;/**/
FARPROC _PyStack_UnpackDict;/**/
FARPROC _PyState_AddModule;/**/
FARPROC _PyState_ClearModules;/**/
FARPROC _PySys_AddWarnOptionWithError;/**/
FARPROC _PySys_AddXOptionWithError;/**/
FARPROC _PySys_BeginInit;/**/
FARPROC _PySys_EndInit;/**/
FARPROC _PySys_GetObjectId;/**/
FARPROC _PySys_GetSizeOf;/**/
FARPROC _PySys_SetObjectId;/**/
FARPROC _PyThread_CurrentFrames;/**/
FARPROC _PyThreadState_DeleteExcept;/**/
FARPROC _PyThreadState_Init;/**/
FARPROC _PyThreadState_Prealloc;/**/
FARPROC _PyThreadState_UncheckedGet;/**/
FARPROC _PyTime_AsMicroseconds;/**/
FARPROC _PyTime_AsMilliseconds;/**/
FARPROC _PyTime_AsNanosecondsObject;/**/
FARPROC _PyTime_AsSecondsDouble;/**/
FARPROC _PyTime_AsTimeval;/**/
FARPROC _PyTime_AsTimeval_noraise;/**/
FARPROC _PyTime_AsTimevalTime_t;/**/
FARPROC _PyTime_FromMillisecondsObject;/**/
FARPROC _PyTime_FromNanoseconds;/**/
FARPROC _PyTime_FromNanosecondsObject;/**/
FARPROC _PyTime_FromSeconds;/**/
FARPROC _PyTime_FromSecondsObject;/**/
FARPROC _PyTime_GetMonotonicClock;/**/
FARPROC _PyTime_GetMonotonicClockWithInfo;/**/
FARPROC _PyTime_GetPerfCounter;/**/
FARPROC _PyTime_GetPerfCounterWithInfo;/**/
FARPROC _PyTime_GetSystemClock;/**/
FARPROC _PyTime_GetSystemClockWithInfo;/**/
FARPROC _PyTime_gmtime;/**/
FARPROC _PyTime_Init;/**/
FARPROC _PyTime_localtime;/**/
FARPROC _PyTime_MulDiv;/**/
FARPROC _PyTime_ObjectToTime_t;/**/
FARPROC _PyTime_ObjectToTimespec;/**/
FARPROC _PyTime_ObjectToTimeval;/**/
FARPROC _PyTraceback_Add;/**/
FARPROC _PyTraceMalloc_GetTraceback;/**/
FARPROC _PyTrash_deposit_object;/**/
FARPROC _PyTrash_destroy_chain;/**/
FARPROC _PyTrash_thread_deposit_object;/**/
FARPROC _PyTrash_thread_destroy_chain;/**/
FARPROC _PyTuple_DebugMallocStats;/**/
FARPROC _PyTuple_MaybeUntrack;/**/
FARPROC _PyTuple_Resize;/**/
FARPROC _PyType_CalculateMetaclass;/**/
FARPROC _PyType_Fini;/**/
FARPROC _PyType_GetDocFromInternalDoc;/**/
FARPROC _PyType_GetTextSignatureFromInternalDoc;/**/
FARPROC _PyType_Lookup;/**/
FARPROC _PyType_LookupId;/**/
FARPROC _PyType_Name;/**/
FARPROC _PyUnicode_AsASCIIString;/**/
FARPROC _PyUnicode_AsKind;/**/
FARPROC _PyUnicode_AsLatin1String;/**/
FARPROC _PyUnicode_AsUnicode;/**/
FARPROC _PyUnicode_AsUTF8String;/**/
FARPROC _PyUnicode_ClearStaticStrings;/**/
FARPROC _PyUnicode_Copy;/**/
FARPROC _PyUnicode_DecodeUnicodeEscape;/**/
FARPROC _PyUnicode_EncodeCharmap;/**/
FARPROC _PyUnicode_EncodeUTF16;/**/
FARPROC _PyUnicode_EncodeUTF32;/**/
FARPROC _PyUnicode_EncodeUTF7;/**/
FARPROC _PyUnicode_EQ;/**/
FARPROC _PyUnicode_EqualToASCIIId;/**/
FARPROC _PyUnicode_EqualToASCIIString;/**/
FARPROC _PyUnicode_FastCopyCharacters;/**/
FARPROC _PyUnicode_FastFill;/**/
FARPROC _PyUnicode_FindMaxChar;/**/
FARPROC _PyUnicode_FormatAdvancedWriter;/**/
FARPROC _PyUnicode_FormatLong;/**/
FARPROC _PyUnicode_FromASCII;/**/
FARPROC _PyUnicode_FromId;/**/
FARPROC _PyUnicode_InsertThousandsGrouping;/**/
FARPROC _PyUnicode_IsAlpha;/**/
FARPROC _PyUnicode_IsCased;/**/
FARPROC _PyUnicode_IsCaseIgnorable;/**/
FARPROC _PyUnicode_IsDecimalDigit;/**/
FARPROC _PyUnicode_IsDigit;/**/
FARPROC _PyUnicode_IsLinebreak;/**/
FARPROC _PyUnicode_IsLowercase;/**/
FARPROC _PyUnicode_IsNumeric;/**/
FARPROC _PyUnicode_IsPrintable;/**/
FARPROC _PyUnicode_IsTitlecase;/**/
FARPROC _PyUnicode_IsUppercase;/**/
FARPROC _PyUnicode_IsWhitespace;/**/
FARPROC _PyUnicode_IsXidContinue;/**/
FARPROC _PyUnicode_IsXidStart;/**/
FARPROC _PyUnicode_JoinArray;/**/
FARPROC _PyUnicode_Ready;/**/
FARPROC _PyUnicode_ToDecimalDigit;/**/
FARPROC _PyUnicode_ToDigit;/**/
FARPROC _PyUnicode_ToFoldedFull;/**/
FARPROC _PyUnicode_ToLowercase;/**/
FARPROC _PyUnicode_ToLowerFull;/**/
FARPROC _PyUnicode_ToNumeric;/**/
FARPROC _PyUnicode_ToTitlecase;/**/
FARPROC _PyUnicode_ToTitleFull;/**/
FARPROC _PyUnicode_ToUppercase;/**/
FARPROC _PyUnicode_ToUpperFull;/**/
FARPROC _PyUnicode_TransformDecimalAndSpaceToASCII;/**/
FARPROC _PyUnicode_XStrip;/**/
FARPROC _PyUnicodeTranslateError_Create;/**/
FARPROC _PyUnicodeWriter_Dealloc;/**/
FARPROC _PyUnicodeWriter_Finish;/**/
FARPROC _PyUnicodeWriter_Init;/**/
FARPROC _PyUnicodeWriter_PrepareInternal;/**/
FARPROC _PyUnicodeWriter_PrepareKindInternal;/**/
FARPROC _PyUnicodeWriter_WriteASCIIString;/**/
FARPROC _PyUnicodeWriter_WriteChar;/**/
FARPROC _PyUnicodeWriter_WriteLatin1String;/**/
FARPROC _PyUnicodeWriter_WriteStr;/**/
FARPROC _PyUnicodeWriter_WriteSubstring;/**/
FARPROC _PyWarnings_Init;/**/
FARPROC _PyWeakref_CallableProxyType;/**/
FARPROC _PyWeakref_ClearRef;/**/
FARPROC _PyWeakref_GetWeakrefCount;/**/
FARPROC _PyWeakref_ProxyType;/**/
FARPROC _PyWeakref_RefType;/**/
FARPROC _PyWindowsConsoleIO_Type;/**/
FARPROC Py_AddPendingCall;/**/
FARPROC Py_AtExit;/**/
FARPROC Py_BuildValue;/**/
FARPROC Py_BytesWarningFlag;/**/
FARPROC Py_CompileString;/**/
FARPROC Py_CompileStringExFlags;/**/
FARPROC Py_CompileStringFlags;/**/
FARPROC Py_CompileStringObject;/**/
FARPROC Py_DebugFlag;/**/
FARPROC Py_DecodeLocale;/**/
FARPROC Py_DecRef;/**/
FARPROC Py_DontWriteBytecodeFlag;/**/
FARPROC Py_EncodeLocale;/**/
FARPROC Py_EndInterpreter;/**/
FARPROC Py_Exit;/**/
FARPROC Py_FatalError;/**/
FARPROC Py_FdIsInteractive;/**/
FARPROC Py_FileSystemDefaultEncodeErrors;/**/
FARPROC Py_FileSystemDefaultEncoding;/**/
FARPROC Py_Finalize;/*结束解释器环境*/
FARPROC Py_FinalizeEx;/**/
FARPROC Py_FrozenFlag;/**/
FARPROC Py_GetBuildInfo;/**/
FARPROC Py_GetCompiler;/**/
FARPROC Py_GetCopyright;/**/
FARPROC Py_GetExecPrefix;/**/
FARPROC Py_GetPath;/*获取Path*/
FARPROC Py_GetPlatform;/**/
FARPROC Py_GetPrefix;/**/
FARPROC Py_GetProgramFullPath;/**/
FARPROC Py_GetProgramName;/**/
FARPROC Py_GetPythonHome;/**/
FARPROC Py_GetRecursionLimit;/**/
FARPROC Py_GetVersion;/**/
FARPROC Py_HasFileSystemDefaultEncoding;/**/
FARPROC Py_HashRandomizationFlag;/**/
FARPROC Py_hexdigits;/**/
FARPROC Py_IgnoreEnvironmentFlag;/**/
FARPROC Py_IncRef;/**/
FARPROC Py_Initialize;/**/
FARPROC Py_InitializeEx;/**/
FARPROC Py_InspectFlag;/**/
FARPROC Py_InteractiveFlag;/**/
FARPROC Py_IsInitialized;/**/
FARPROC Py_IsolatedFlag;/**/
FARPROC Py_LegacyWindowsFSEncodingFlag;/**/
FARPROC Py_LegacyWindowsStdioFlag;/**/
FARPROC Py_Main;/**/
FARPROC Py_MakePendingCalls;/**/
FARPROC Py_NewInterpreter;/**/
FARPROC Py_NoSiteFlag;/**/
FARPROC Py_NoUserSiteDirectory;/**/
FARPROC Py_OptimizeFlag;/**/
FARPROC Py_QuietFlag;/**/
FARPROC Py_ReprEnter;/**/
FARPROC Py_ReprLeave;/**/
FARPROC Py_SetPath;/**/
FARPROC Py_SetProgramName;/**/
FARPROC Py_SetPythonHome;/**/
FARPROC Py_SetRecursionLimit;/**/
FARPROC Py_SetStandardStreamEncoding;/**/
FARPROC Py_SymtableString;/**/
FARPROC Py_SymtableStringObject;/**/
FARPROC Py_UnbufferedStdioFlag;/**/
FARPROC Py_UNICODE_strcat;/**/
FARPROC Py_UNICODE_strchr;/**/
FARPROC Py_UNICODE_strcmp;/**/
FARPROC Py_UNICODE_strcpy;/**/
FARPROC Py_UNICODE_strlen;/**/
FARPROC Py_UNICODE_strncmp;/**/
FARPROC Py_UNICODE_strncpy;/**/
FARPROC Py_UNICODE_strrchr;/**/
FARPROC Py_UniversalNewlineFgets;/**/
FARPROC Py_UTF8Mode;/**/
FARPROC Py_VaBuildValue;/**/
FARPROC Py_VerboseFlag;/**/
FARPROC PyArena_AddPyObject;/**/
FARPROC PyArena_Free;/**/
FARPROC PyArena_Malloc;/**/
FARPROC PyArena_New;/**/
FARPROC PyArg_Parse;/**/
FARPROC PyArg_ParseTuple;/**/
FARPROC PyArg_ParseTupleAndKeywords;/**/
FARPROC PyArg_UnpackTuple;/**/
FARPROC PyArg_ValidateKeywordArguments;/**/
FARPROC PyArg_VaParse;/**/
FARPROC PyArg_VaParseTupleAndKeywords;/**/
FARPROC PyAST_Compile;/**/
FARPROC PyAST_CompileEx;/**/
FARPROC PyAST_CompileObject;/**/
FARPROC PyAST_FromNode;/**/
FARPROC PyAST_FromNodeObject;/**/
FARPROC PyAST_Validate;/**/
FARPROC PyAsyncGen_Fini;/**/
FARPROC PyAsyncGen_New;/**/
FARPROC PyAsyncGen_Type;/**/
FARPROC PyBaseObject_Type;/**/
FARPROC PyBool_FromLong;/**/
FARPROC PyBool_Type;/**/
FARPROC PyBuffer_FillContiguousStrides;/**/
FARPROC PyBuffer_FillInfo;/**/
FARPROC PyBuffer_FromContiguous;/**/
FARPROC PyBuffer_GetPointer;/**/
FARPROC PyBuffer_IsContiguous;/**/
FARPROC PyBuffer_Release;/**/
FARPROC PyBuffer_ToContiguous;/**/
FARPROC PyByteArray_AsString;/**/
FARPROC PyByteArray_Concat;/**/
FARPROC PyByteArray_Fini;/**/
FARPROC PyByteArray_FromObject;/**/
FARPROC PyByteArray_FromStringAndSize;/**/
FARPROC PyByteArray_Init;/**/
FARPROC PyByteArray_Resize;/**/
FARPROC PyByteArray_Size;/**/
FARPROC PyByteArray_Type;/**/
FARPROC PyByteArrayIter_Type;/**/
FARPROC PyBytes_AsString;/**/
FARPROC PyBytes_AsStringAndSize;/**/
FARPROC PyBytes_Concat;/**/
FARPROC PyBytes_ConcatAndDel;/**/
FARPROC PyBytes_DecodeEscape;/**/
FARPROC PyBytes_Fini;/**/
FARPROC PyBytes_FromFormat;/**/
FARPROC PyBytes_FromFormatV;/**/
FARPROC PyBytes_FromObject;/**/
FARPROC PyBytes_FromString;/**/
FARPROC PyBytes_FromStringAndSize;/**/
FARPROC PyBytes_Repr;/**/
FARPROC PyBytes_Size;/**/
FARPROC PyBytes_Type;/**/
FARPROC PyBytesIter_Type;/**/
FARPROC PyCallable_Check;/**/
FARPROC PyCallIter_New;/**/
FARPROC PyCallIter_Type;/**/
FARPROC PyCapsule_GetContext;/**/
FARPROC PyCapsule_GetDestructor;/**/
FARPROC PyCapsule_GetName;/**/
FARPROC PyCapsule_GetPointer;/**/
FARPROC PyCapsule_Import;/**/
FARPROC PyCapsule_IsValid;/**/
FARPROC PyCapsule_New;/**/
FARPROC PyCapsule_SetContext;/**/
FARPROC PyCapsule_SetDestructor;/**/
FARPROC PyCapsule_SetName;/**/
FARPROC PyCapsule_SetPointer;/**/
FARPROC PyCapsule_Type;/**/
FARPROC PyCell_Get;/**/
FARPROC PyCell_New;/**/
FARPROC PyCell_Set;/**/
FARPROC PyCell_Type;/**/
FARPROC PyCFunction_Call;/**/
FARPROC PyCFunction_ClearFreeList;/**/
FARPROC PyCFunction_Fini;/**/
FARPROC PyCFunction_GetFlags;/**/
FARPROC PyCFunction_GetFunction;/**/
FARPROC PyCFunction_GetSelf;/**/
FARPROC PyCFunction_New;/**/
FARPROC PyCFunction_NewEx;/**/
FARPROC PyCFunction_Type;/**/
FARPROC PyClassMethod_New;/**/
FARPROC PyClassMethod_Type;/**/
FARPROC PyClassMethodDescr_Type;/**/
FARPROC PyCode_Addr2Line;/**/
FARPROC PyCode_New;/**/
FARPROC PyCode_NewEmpty;/**/
FARPROC PyCode_Optimize;/**/
FARPROC PyCode_Type;/**/
FARPROC PyCodec_BackslashReplaceErrors;/**/
FARPROC PyCodec_Decode;/**/
FARPROC PyCodec_Decoder;/**/
FARPROC PyCodec_Encode;/**/
FARPROC PyCodec_Encoder;/**/
FARPROC PyCodec_IgnoreErrors;/**/
FARPROC PyCodec_IncrementalDecoder;/**/
FARPROC PyCodec_IncrementalEncoder;/**/
FARPROC PyCodec_KnownEncoding;/**/
FARPROC PyCodec_LookupError;/**/
FARPROC PyCodec_NameReplaceErrors;/**/
FARPROC PyCodec_Register;/**/
FARPROC PyCodec_RegisterError;/**/
FARPROC PyCodec_ReplaceErrors;/**/
FARPROC PyCodec_StreamReader;/**/
FARPROC PyCodec_StreamWriter;/**/
FARPROC PyCodec_StrictErrors;/**/
FARPROC PyCodec_XMLCharRefReplaceErrors;/**/
FARPROC PyCompile_OpcodeStackEffect;/**/
FARPROC PyComplex_AsCComplex;/**/
FARPROC PyComplex_FromCComplex;/**/
FARPROC PyComplex_FromDoubles;/**/
FARPROC PyComplex_ImagAsDouble;/**/
FARPROC PyComplex_RealAsDouble;/**/
FARPROC PyComplex_Type;/**/
FARPROC PyContext_ClearFreeList;/**/
FARPROC PyContext_Copy;/**/
FARPROC PyContext_CopyCurrent;/**/
FARPROC PyContext_Enter;/**/
FARPROC PyContext_Exit;/**/
FARPROC PyContext_New;/**/
FARPROC PyContext_Type;/**/
FARPROC PyContextToken_Type;/**/
FARPROC PyContextVar_Get;/**/
FARPROC PyContextVar_New;/**/
FARPROC PyContextVar_Reset;/**/
FARPROC PyContextVar_Set;/**/
FARPROC PyContextVar_Type;/**/
FARPROC PyCoro_New;/**/
FARPROC PyCoro_Type;/**/
FARPROC PyDescr_NewClassMethod;/**/
FARPROC PyDescr_NewGetSet;/**/
FARPROC PyDescr_NewMember;/**/
FARPROC PyDescr_NewMethod;/**/
FARPROC PyDescr_NewWrapper;/**/
FARPROC PyDict_Clear;/**/
FARPROC PyDict_ClearFreeList;/**/
FARPROC PyDict_Contains;/**/
FARPROC PyDict_Copy;/**/
FARPROC PyDict_DelItem;/**/
FARPROC PyDict_DelItemString;/**/
FARPROC PyDict_Fini;/**/
FARPROC PyDict_GetItem;/**/
FARPROC PyDict_GetItemString;/**/
FARPROC PyDict_GetItemWithError;/**/
FARPROC PyDict_Items;/**/
FARPROC PyDict_Keys;/**/
FARPROC PyDict_Merge;/**/
FARPROC PyDict_MergeFromSeq2;/**/
FARPROC PyDict_New;/**/
FARPROC PyDict_Next;/**/
FARPROC PyDict_SetDefault;/**/
FARPROC PyDict_SetItem;/**/
FARPROC PyDict_SetItemString;/**/
FARPROC PyDict_Size;/**/
FARPROC PyDict_Type;/**/
FARPROC PyDict_Update;/**/
FARPROC PyDict_Values;/**/
FARPROC PyDictItems_Type;/**/
FARPROC PyDictIterItem_Type;/**/
FARPROC PyDictIterKey_Type;/**/
FARPROC PyDictIterValue_Type;/**/
FARPROC PyDictKeys_Type;/**/
FARPROC PyDictProxy_New;/**/
FARPROC PyDictProxy_Type;/**/
FARPROC PyDictValues_Type;/**/
FARPROC PyEllipsis_Type;/**/
FARPROC PyEnum_Type;/**/
FARPROC PyErr_BadArgument;/**/
FARPROC PyErr_BadInternalCall;/**/
FARPROC PyErr_CheckSignals;/**/
FARPROC PyErr_Clear;/**/
FARPROC PyErr_Display;/**/
FARPROC PyErr_ExceptionMatches;/**/
FARPROC PyErr_Fetch;/**/
FARPROC PyErr_Format;/**/
FARPROC PyErr_FormatV;/**/
FARPROC PyErr_GetExcInfo;/**/
FARPROC PyErr_GivenExceptionMatches;/**/
FARPROC PyErr_NewException;/**/
FARPROC PyErr_NewExceptionWithDoc;/**/
FARPROC PyErr_NoMemory;/**/
FARPROC PyErr_NormalizeException;/**/
FARPROC PyErr_Occurred;/**/
FARPROC PyErr_Print;/**/
FARPROC PyErr_PrintEx;/**/
FARPROC PyErr_ProgramText;/**/
FARPROC PyErr_ProgramTextObject;/**/
FARPROC PyErr_ResourceWarning;/**/
FARPROC PyErr_Restore;/**/
FARPROC PyErr_SetExcFromWindowsErr;/**/
FARPROC PyErr_SetExcFromWindowsErrWithFilename;/**/
FARPROC PyErr_SetExcFromWindowsErrWithFilenameObject;/**/
FARPROC PyErr_SetExcFromWindowsErrWithFilenameObjects;/**/
FARPROC PyErr_SetExcFromWindowsErrWithUnicodeFilename;/**/
FARPROC PyErr_SetExcInfo;/**/
FARPROC PyErr_SetFromErrno;/**/
FARPROC PyErr_SetFromErrnoWithFilename;/**/
FARPROC PyErr_SetFromErrnoWithFilenameObject;/**/
FARPROC PyErr_SetFromErrnoWithFilenameObjects;/**/
FARPROC PyErr_SetFromErrnoWithUnicodeFilename;/**/
FARPROC PyErr_SetFromWindowsErr;/**/
FARPROC PyErr_SetFromWindowsErrWithFilename;/**/
FARPROC PyErr_SetFromWindowsErrWithUnicodeFilename;/**/
FARPROC PyErr_SetImportError;/**/
FARPROC PyErr_SetImportErrorSubclass;/**/
FARPROC PyErr_SetInterrupt;/**/
FARPROC PyErr_SetNone;/**/
FARPROC PyErr_SetObject;/**/
FARPROC PyErr_SetString;/**/
FARPROC PyErr_SyntaxLocation;/**/
FARPROC PyErr_SyntaxLocationEx;/**/
FARPROC PyErr_SyntaxLocationObject;/**/
FARPROC PyErr_Warn;/**/
FARPROC PyErr_WarnEx;/**/
FARPROC PyErr_WarnExplicit;/**/
FARPROC PyErr_WarnExplicitFormat;/**/
FARPROC PyErr_WarnExplicitObject;/**/
FARPROC PyErr_WarnFormat;/**/
FARPROC PyErr_WriteUnraisable;/**/
FARPROC PyEval_AcquireLock;/**/
FARPROC PyEval_AcquireThread;/**/
FARPROC PyEval_CallFunction;/**/
FARPROC PyEval_CallMethod;/**/
FARPROC PyEval_CallObjectWithKeywords;/**/
FARPROC PyEval_EvalCode;/**/
FARPROC PyEval_EvalCodeEx;/**/
FARPROC PyEval_EvalFrame;/**/
FARPROC PyEval_EvalFrameEx;/**/
FARPROC PyEval_GetBuiltins;/**/
FARPROC PyEval_GetFrame;/**/
FARPROC PyEval_GetFuncDesc;/**/
FARPROC PyEval_GetFuncName;/**/
FARPROC PyEval_GetGlobals;/**/
FARPROC PyEval_GetLocals;/**/
FARPROC PyEval_InitThreads;/**/
FARPROC PyEval_MergeCompilerFlags;/**/
FARPROC PyEval_ReInitThreads;/**/
FARPROC PyEval_ReleaseLock;/**/
FARPROC PyEval_ReleaseThread;/**/
FARPROC PyEval_RestoreThread;/**/
FARPROC PyEval_SaveThread;/**/
FARPROC PyEval_SetProfile;/**/
FARPROC PyEval_SetTrace;/**/
FARPROC PyEval_ThreadsInitialized;/**/
FARPROC PyExc_ArithmeticError;/**/
FARPROC PyExc_AssertionError;/**/
FARPROC PyExc_AttributeError;/**/
FARPROC PyExc_BaseException;/**/
FARPROC PyExc_BlockingIOError;/**/
FARPROC PyExc_BrokenPipeError;/**/
FARPROC PyExc_BufferError;/**/
FARPROC PyExc_BytesWarning;/**/
FARPROC PyExc_ChildProcessError;/**/
FARPROC PyExc_ConnectionAbortedError;/**/
FARPROC PyExc_ConnectionError;/**/
FARPROC PyExc_ConnectionRefusedError;/**/
FARPROC PyExc_ConnectionResetError;/**/
FARPROC PyExc_DeprecationWarning;/**/
FARPROC PyExc_EnvironmentError;/**/
FARPROC PyExc_EOFError;/**/
FARPROC PyExc_Exception;/**/
FARPROC PyExc_FileExistsError;/**/
FARPROC PyExc_FileNotFoundError;/**/
FARPROC PyExc_FloatingPointError;/**/
FARPROC PyExc_FutureWarning;/**/
FARPROC PyExc_GeneratorExit;/**/
FARPROC PyExc_ImportError;/**/
FARPROC PyExc_ImportWarning;/**/
FARPROC PyExc_IndentationError;/**/
FARPROC PyExc_IndexError;/**/
FARPROC PyExc_InterruptedError;/**/
FARPROC PyExc_IOError;/**/
FARPROC PyExc_IsADirectoryError;/**/
FARPROC PyExc_KeyboardInterrupt;/**/
FARPROC PyExc_KeyError;/**/
FARPROC PyExc_LookupError;/**/
FARPROC PyExc_MemoryError;/**/
FARPROC PyExc_ModuleNotFoundError;/**/
FARPROC PyExc_NameError;/**/
FARPROC PyExc_NotADirectoryError;/**/
FARPROC PyExc_NotImplementedError;/**/
FARPROC PyExc_OSError;/**/
FARPROC PyExc_OverflowError;/**/
FARPROC PyExc_PendingDeprecationWarning;/**/
FARPROC PyExc_PermissionError;/**/
FARPROC PyExc_ProcessLookupError;/**/
FARPROC PyExc_RecursionError;/**/
FARPROC PyExc_ReferenceError;/**/
FARPROC PyExc_ResourceWarning;/**/
FARPROC PyExc_RuntimeError;/**/
FARPROC PyExc_RuntimeWarning;/**/
FARPROC PyExc_StopAsyncIteration;/**/
FARPROC PyExc_StopIteration;/**/
FARPROC PyExc_SyntaxError;/**/
FARPROC PyExc_SyntaxWarning;/**/
FARPROC PyExc_SystemError;/**/
FARPROC PyExc_SystemExit;/**/
FARPROC PyExc_TabError;/**/
FARPROC PyExc_TimeoutError;/**/
FARPROC PyExc_TypeError;/**/
FARPROC PyExc_UnboundLocalError;/**/
FARPROC PyExc_UnicodeDecodeError;/**/
FARPROC PyExc_UnicodeEncodeError;/**/
FARPROC PyExc_UnicodeError;/**/
FARPROC PyExc_UnicodeTranslateError;/**/
FARPROC PyExc_UnicodeWarning;/**/
FARPROC PyExc_UserWarning;/**/
FARPROC PyExc_ValueError;/**/
FARPROC PyExc_Warning;/**/
FARPROC PyExc_WindowsError;/**/
FARPROC PyExc_ZeroDivisionError;/**/
FARPROC PyException_GetCause;/**/
FARPROC PyException_GetContext;/**/
FARPROC PyException_GetTraceback;/**/
FARPROC PyException_SetCause;/**/
FARPROC PyException_SetContext;/**/
FARPROC PyException_SetTraceback;/**/
FARPROC PyFile_FromFd;/**/
FARPROC PyFile_GetLine;/**/
FARPROC PyFile_NewStdPrinter;/**/
FARPROC PyFile_WriteObject;/**/
FARPROC PyFile_WriteString;/**/
FARPROC PyFilter_Type;/**/
FARPROC PyFloat_AsDouble;/**/
FARPROC PyFloat_ClearFreeList;/**/
FARPROC PyFloat_Fini;/**/
FARPROC PyFloat_FromDouble;/**/
FARPROC PyFloat_FromString;/**/
FARPROC PyFloat_GetInfo;/**/
FARPROC PyFloat_GetMax;/**/
FARPROC PyFloat_GetMin;/**/
FARPROC PyFloat_Type;/**/
FARPROC PyFrame_BlockPop;/**/
FARPROC PyFrame_BlockSetup;/**/
FARPROC PyFrame_ClearFreeList;/**/
FARPROC PyFrame_FastToLocals;/**/
FARPROC PyFrame_FastToLocalsWithError;/**/
FARPROC PyFrame_Fini;/**/
FARPROC PyFrame_GetLineNumber;/**/
FARPROC PyFrame_LocalsToFast;/**/
FARPROC PyFrame_New;/**/
FARPROC PyFrame_Type;/**/
FARPROC PyFrozenSet_New;/**/
FARPROC PyFrozenSet_Type;/**/
FARPROC PyFunction_GetAnnotations;/**/
FARPROC PyFunction_GetClosure;/**/
FARPROC PyFunction_GetCode;/**/
FARPROC PyFunction_GetDefaults;/**/
FARPROC PyFunction_GetGlobals;/**/
FARPROC PyFunction_GetKwDefaults;/**/
FARPROC PyFunction_GetModule;/**/
FARPROC PyFunction_New;/**/
FARPROC PyFunction_NewWithQualName;/**/
FARPROC PyFunction_SetAnnotations;/**/
FARPROC PyFunction_SetClosure;/**/
FARPROC PyFunction_SetDefaults;/**/
FARPROC PyFunction_SetKwDefaults;/**/
FARPROC PyFunction_Type;/**/
FARPROC PyFuture_FromAST;/**/
FARPROC PyFuture_FromASTObject;/**/
FARPROC PyGC_Collect;/**/
FARPROC PyGen_NeedsFinalizing;/**/
FARPROC PyGen_New;/**/
FARPROC PyGen_NewWithQualName;/**/
FARPROC PyGen_Type;/**/
FARPROC PyGetSetDescr_Type;/**/
FARPROC PyGILState_Check;/**/
FARPROC PyGILState_Ensure;/**/
FARPROC PyGILState_GetThisThreadState;/**/
FARPROC PyGILState_Release;/**/
FARPROC PyHash_GetFuncDef;/**/
FARPROC PyImport_AddModule;/**/
FARPROC PyImport_AddModuleObject;/**/
FARPROC PyImport_AppendInittab;/**/
FARPROC PyImport_Cleanup;/**/
FARPROC PyImport_ExecCodeModule;/**/
FARPROC PyImport_ExecCodeModuleEx;/**/
FARPROC PyImport_ExecCodeModuleObject;/**/
FARPROC PyImport_ExecCodeModuleWithPathnames;/**/
FARPROC PyImport_ExtendInittab;/**/
FARPROC PyImport_FrozenModules;/**/
FARPROC PyImport_GetImporter;/**/
FARPROC PyImport_GetMagicNumber;/**/
FARPROC PyImport_GetMagicTag;/**/
FARPROC PyImport_GetModule;/**/
FARPROC PyImport_GetModuleDict;/**/
FARPROC PyImport_Import;/**/
FARPROC PyImport_ImportFrozenModule;/**/
FARPROC PyImport_ImportFrozenModuleObject;/**/
FARPROC PyImport_ImportModule;/**/
FARPROC PyImport_ImportModuleLevel;/**/
FARPROC PyImport_ImportModuleLevelObject;/**/
FARPROC PyImport_ImportModuleNoBlock;/**/
FARPROC PyImport_Inittab;/**/
FARPROC PyImport_ReloadModule;/**/
FARPROC PyInstanceMethod_Function;/**/
FARPROC PyInstanceMethod_New;/**/
FARPROC PyInstanceMethod_Type;/**/
FARPROC PyInterpreterState_Clear;/**/
FARPROC PyInterpreterState_Delete;/**/
FARPROC PyInterpreterState_GetID;/**/
FARPROC PyInterpreterState_Head;/**/
FARPROC PyInterpreterState_Main;/**/
FARPROC PyInterpreterState_New;/**/
FARPROC PyInterpreterState_Next;/**/
FARPROC PyInterpreterState_ThreadHead;/**/
FARPROC PyIter_Next;/**/
FARPROC PyList_Append;/**/
FARPROC PyList_AsTuple;/**/
FARPROC PyList_ClearFreeList;/**/
FARPROC PyList_Fini;/**/
FARPROC PyList_GetItem;/**/
FARPROC PyList_GetSlice;/**/
FARPROC PyList_Insert;/**/
FARPROC PyList_New;/**/
FARPROC PyList_Reverse;/**/
FARPROC PyList_SetItem;/**/
FARPROC PyList_SetSlice;/**/
FARPROC PyList_Size;/**/
FARPROC PyList_Sort;/**/
FARPROC PyList_Type;/**/
FARPROC PyListIter_Type;/**/
FARPROC PyListRevIter_Type;/**/
FARPROC PyLong_AsDouble;/**/
FARPROC PyLong_AsLong;/**/
FARPROC PyLong_AsLongAndOverflow;/**/
FARPROC PyLong_AsLongLong;/**/
FARPROC PyLong_AsLongLongAndOverflow;/**/
FARPROC PyLong_AsSize_t;/**/
FARPROC PyLong_AsSsize_t;/**/
FARPROC PyLong_AsUnsignedLong;/**/
FARPROC PyLong_AsUnsignedLongLong;/**/
FARPROC PyLong_AsUnsignedLongLongMask;/**/
FARPROC PyLong_AsUnsignedLongMask;/**/
FARPROC PyLong_AsVoidPtr;/**/
FARPROC PyLong_FromDouble;/**/
FARPROC PyLong_FromLong;/**/
FARPROC PyLong_FromLongLong;/**/
FARPROC PyLong_FromSize_t;/**/
FARPROC PyLong_FromSsize_t;/**/
FARPROC PyLong_FromString;/**/
FARPROC PyLong_FromUnicode;/**/
FARPROC PyLong_FromUnicodeObject;/**/
FARPROC PyLong_FromUnsignedLong;/**/
FARPROC PyLong_FromUnsignedLongLong;/**/
FARPROC PyLong_FromVoidPtr;/**/
FARPROC PyLong_GetInfo;/**/
FARPROC PyLong_Type;/**/
FARPROC PyLongRangeIter_Type;/**/
FARPROC PyMap_Type;/**/
FARPROC PyMapping_Check;/**/
FARPROC PyMapping_GetItemString;/**/
FARPROC PyMapping_HasKey;/**/
FARPROC PyMapping_HasKeyString;/**/
FARPROC PyMapping_Items;/**/
FARPROC PyMapping_Keys;/**/
FARPROC PyMapping_Length;/**/
FARPROC PyMapping_SetItemString;/**/
FARPROC PyMapping_Size;/**/
FARPROC PyMapping_Values;/**/
FARPROC PyMarshal_ReadLastObjectFromFile;/**/
FARPROC PyMarshal_ReadLongFromFile;/**/
FARPROC PyMarshal_ReadObjectFromFile;/**/
FARPROC PyMarshal_ReadObjectFromString;/**/
FARPROC PyMarshal_ReadShortFromFile;/**/
FARPROC PyMarshal_WriteLongToFile;/**/
FARPROC PyMarshal_WriteObjectToFile;/**/
FARPROC PyMarshal_WriteObjectToString;/**/
FARPROC PyMem_Calloc;/**/
FARPROC PyMem_Free;/**/
FARPROC PyMem_GetAllocator;/**/
FARPROC PyMem_Malloc;/**/
FARPROC PyMem_RawCalloc;/**/
FARPROC PyMem_RawFree;/**/
FARPROC PyMem_RawMalloc;/**/
FARPROC PyMem_RawRealloc;/**/
FARPROC PyMem_Realloc;/**/
FARPROC PyMem_SetAllocator;/**/
FARPROC PyMem_SetupDebugHooks;/**/
FARPROC PyMember_GetOne;/**/
FARPROC PyMember_SetOne;/**/
FARPROC PyMemberDescr_Type;/**/
FARPROC PyMemoryView_FromBuffer;/**/
FARPROC PyMemoryView_FromMemory;/**/
FARPROC PyMemoryView_FromObject;/**/
FARPROC PyMemoryView_GetContiguous;/**/
FARPROC PyMemoryView_Type;/**/
FARPROC PyMethod_ClearFreeList;/**/
FARPROC PyMethod_Fini;/**/
FARPROC PyMethod_Function;/**/
FARPROC PyMethod_New;/**/
FARPROC PyMethod_Self;/**/
FARPROC PyMethod_Type;/**/
FARPROC PyMethodDescr_Type;/**/
FARPROC PyModule_AddFunctions;/**/
FARPROC PyModule_AddIntConstant;/**/
FARPROC PyModule_AddObject;/**/
FARPROC PyModule_AddStringConstant;/**/
FARPROC PyModule_Create2;/**/
FARPROC PyModule_ExecDef;/**/
FARPROC PyModule_FromDefAndSpec2;/**/
FARPROC PyModule_GetDef;/**/
FARPROC PyModule_GetDict;/**/
FARPROC PyModule_GetFilename;/**/
FARPROC PyModule_GetFilenameObject;/**/
FARPROC PyModule_GetName;/**/
FARPROC PyModule_GetNameObject;/**/
FARPROC PyModule_GetState;/**/
FARPROC PyModule_New;/**/
FARPROC PyModule_NewObject;/**/
FARPROC PyModule_SetDocString;/**/
FARPROC PyModule_Type;/**/
FARPROC PyModuleDef_Init;/**/
FARPROC PyModuleDef_Type;/**/
FARPROC PyNode_AddChild;/**/
FARPROC PyNode_Compile;/**/
FARPROC PyNode_Free;/**/
FARPROC PyNode_ListTree;/**/
FARPROC PyNode_New;/**/
FARPROC PyNumber_Absolute;/**/
FARPROC PyNumber_Add;/**/
FARPROC PyNumber_And;/**/
FARPROC PyNumber_AsSsize_t;/**/
FARPROC PyNumber_Check;/**/
FARPROC PyNumber_Divmod;/**/
FARPROC PyNumber_Float;/**/
FARPROC PyNumber_FloorDivide;/**/
FARPROC PyNumber_Index;/**/
FARPROC PyNumber_InPlaceAdd;/**/
FARPROC PyNumber_InPlaceAnd;/**/
FARPROC PyNumber_InPlaceFloorDivide;/**/
FARPROC PyNumber_InPlaceLshift;/**/
FARPROC PyNumber_InPlaceMatrixMultiply;/**/
FARPROC PyNumber_InPlaceMultiply;/**/
FARPROC PyNumber_InPlaceOr;/**/
FARPROC PyNumber_InPlacePower;/**/
FARPROC PyNumber_InPlaceRemainder;/**/
FARPROC PyNumber_InPlaceRshift;/**/
FARPROC PyNumber_InPlaceSubtract;/**/
FARPROC PyNumber_InPlaceTrueDivide;/**/
FARPROC PyNumber_InPlaceXor;/**/
FARPROC PyNumber_Invert;/**/
FARPROC PyNumber_Long;/**/
FARPROC PyNumber_Lshift;/**/
FARPROC PyNumber_MatrixMultiply;/**/
FARPROC PyNumber_Multiply;/**/
FARPROC PyNumber_Negative;/**/
FARPROC PyNumber_Or;/**/
FARPROC PyNumber_Positive;/**/
FARPROC PyNumber_Power;/**/
FARPROC PyNumber_Remainder;/**/
FARPROC PyNumber_Rshift;/**/
FARPROC PyNumber_Subtract;/**/
FARPROC PyNumber_ToBase;/**/
FARPROC PyNumber_TrueDivide;/**/
FARPROC PyNumber_Xor;/**/
FARPROC PyObject_AsCharBuffer;/**/
FARPROC PyObject_ASCII;/**/
FARPROC PyObject_AsFileDescriptor;/**/
FARPROC PyObject_AsReadBuffer;/**/
FARPROC PyObject_AsWriteBuffer;/**/
FARPROC PyObject_Bytes;/**/
FARPROC PyObject_Call;/**/
FARPROC PyObject_CallFinalizer;/**/
FARPROC PyObject_CallFinalizerFromDealloc;/**/
FARPROC PyObject_CallFunction;/**/
FARPROC PyObject_CallFunctionObjArgs;/**/
FARPROC PyObject_CallMethod;/**/
FARPROC PyObject_CallMethodObjArgs;/**/
FARPROC PyObject_CallObject;/**/
FARPROC PyObject_Calloc;/**/
FARPROC PyObject_CheckReadBuffer;/**/
FARPROC PyObject_ClearWeakRefs;/**/
FARPROC PyObject_CopyData;/**/
FARPROC PyObject_DelItem;/**/
FARPROC PyObject_DelItemString;/**/
FARPROC PyObject_Dir;/**/
FARPROC PyObject_Format;/**/
FARPROC PyObject_Free;/**/
FARPROC PyObject_GC_Del;/**/
FARPROC PyObject_GC_Track;/**/
FARPROC PyObject_GC_UnTrack;/**/
FARPROC PyObject_GenericGetAttr;/**/
FARPROC PyObject_GenericGetDict;/**/
FARPROC PyObject_GenericSetAttr;/**/
FARPROC PyObject_GenericSetDict;/**/
FARPROC PyObject_GetArenaAllocator;/**/
FARPROC PyObject_GetAttr;/**/
FARPROC PyObject_GetAttrString;/**/
FARPROC PyObject_GetBuffer;/**/
FARPROC PyObject_GetItem;/**/
FARPROC PyObject_GetIter;/**/
FARPROC PyObject_HasAttr;/**/
FARPROC PyObject_HasAttrString;/**/
FARPROC PyObject_Hash;/**/
FARPROC PyObject_HashNotImplemented;/**/
FARPROC PyObject_Init;/**/
FARPROC PyObject_InitVar;/**/
FARPROC PyObject_IsInstance;/**/
FARPROC PyObject_IsSubclass;/**/
FARPROC PyObject_IsTrue;/**/
FARPROC PyObject_Length;/**/
FARPROC PyObject_LengthHint;/**/
FARPROC PyObject_Malloc;/**/
FARPROC PyObject_Not;/**/
FARPROC PyObject_Print;/**/
FARPROC PyObject_Realloc;/**/
FARPROC PyObject_Repr;/**/
FARPROC PyObject_RichCompare;/**/
FARPROC PyObject_RichCompareBool;/**/
FARPROC PyObject_SelfIter;/**/
FARPROC PyObject_SetArenaAllocator;/**/
FARPROC PyObject_SetAttr;/**/
FARPROC PyObject_SetAttrString;/**/
FARPROC PyObject_SetItem;/**/
FARPROC PyObject_Size;/**/
FARPROC PyObject_Str;/**/
FARPROC PyObject_Type;/**/
FARPROC PyODict_DelItem;/**/
FARPROC PyODict_New;/**/
FARPROC PyODict_SetItem;/**/
FARPROC PyODict_Type;/**/
FARPROC PyODictItems_Type;/**/
FARPROC PyODictIter_Type;/**/
FARPROC PyODictKeys_Type;/**/
FARPROC PyODictValues_Type;/**/
FARPROC PyOS_AfterFork;/**/
FARPROC PyOS_CheckStack;/**/
FARPROC PyOS_double_to_string;/**/
FARPROC PyOS_FiniInterrupts;/**/
FARPROC PyOS_FSPath;/**/
FARPROC PyOS_getsig;/**/
FARPROC PyOS_InitInterrupts;/**/
FARPROC PyOS_InputHook;/**/
FARPROC PyOS_InterruptOccurred;/**/
FARPROC PyOS_mystricmp;/**/
FARPROC PyOS_mystrnicmp;/**/
FARPROC PyOS_Readline;/**/
FARPROC PyOS_ReadlineFunctionPointer;/**/
FARPROC PyOS_setsig;/**/
FARPROC PyOS_snprintf;/**/
FARPROC PyOS_string_to_double;/**/
FARPROC PyOS_strtol;/**/
FARPROC PyOS_strtoul;/**/
FARPROC PyOS_vsnprintf;/**/
FARPROC PyParser_ASTFromFile;/**/
FARPROC PyParser_ASTFromFileObject;/**/
FARPROC PyParser_ASTFromString;/**/
FARPROC PyParser_ASTFromStringObject;/**/
FARPROC PyParser_ClearError;/**/
FARPROC PyParser_ParseFile;/**/
FARPROC PyParser_ParseFileFlags;/**/
FARPROC PyParser_ParseFileFlagsEx;/**/
FARPROC PyParser_ParseFileObject;/**/
FARPROC PyParser_ParseString;/**/
FARPROC PyParser_ParseStringFlags;/**/
FARPROC PyParser_ParseStringFlagsFilename;/**/
FARPROC PyParser_ParseStringFlagsFilenameEx;/**/
FARPROC PyParser_ParseStringObject;/**/
FARPROC PyParser_SetError;/**/
FARPROC PyParser_SimpleParseFile;/**/
FARPROC PyParser_SimpleParseFileFlags;/**/
FARPROC PyParser_SimpleParseString;/**/
FARPROC PyParser_SimpleParseStringFlags;/**/
FARPROC PyParser_SimpleParseStringFlagsFilename;/**/
FARPROC PyProperty_Type;/**/
FARPROC PyRange_Type;/**/
FARPROC PyRangeIter_Type;/**/
FARPROC PyReversed_Type;/**/
FARPROC PyRun_AnyFile;/**/
FARPROC PyRun_AnyFileEx;/**/
FARPROC PyRun_AnyFileExFlags;/**/
FARPROC PyRun_AnyFileFlags;/**/
FARPROC PyRun_File;/**/
FARPROC PyRun_FileEx;/**/
FARPROC PyRun_FileExFlags;/**/
FARPROC PyRun_FileFlags;/**/
FARPROC PyRun_InteractiveLoop;/**/
FARPROC PyRun_InteractiveLoopFlags;/**/
FARPROC PyRun_InteractiveOne;/**/
FARPROC PyRun_InteractiveOneFlags;/**/
FARPROC PyRun_InteractiveOneObject;/**/
FARPROC PyRun_SimpleFile;/**/
FARPROC PyRun_SimpleFileEx;/**/
FARPROC PyRun_SimpleFileExFlags;/**/
FARPROC PyRun_SimpleString;/**/
FARPROC PyRun_SimpleStringFlags;/**/
FARPROC PyRun_String;/**/
FARPROC PyRun_StringFlags;/**/
FARPROC PySeqIter_New;/**/
FARPROC PySeqIter_Type;/**/
FARPROC PySequence_Check;/**/
FARPROC PySequence_Concat;/**/
FARPROC PySequence_Contains;/**/
FARPROC PySequence_Count;/**/
FARPROC PySequence_DelItem;/**/
FARPROC PySequence_DelSlice;/**/
FARPROC PySequence_Fast;/**/
FARPROC PySequence_GetItem;/**/
FARPROC PySequence_GetSlice;/**/
FARPROC PySequence_In;/**/
FARPROC PySequence_Index;/**/
FARPROC PySequence_InPlaceConcat;/**/
FARPROC PySequence_InPlaceRepeat;/**/
FARPROC PySequence_Length;/**/
FARPROC PySequence_List;/**/
FARPROC PySequence_Repeat;/**/
FARPROC PySequence_SetItem;/**/
FARPROC PySequence_SetSlice;/**/
FARPROC PySequence_Size;/**/
FARPROC PySequence_Tuple;/**/
FARPROC PySet_Add;/**/
FARPROC PySet_Clear;/**/
FARPROC PySet_ClearFreeList;/**/
FARPROC PySet_Contains;/**/
FARPROC PySet_Discard;/**/
FARPROC PySet_Fini;/**/
FARPROC PySet_New;/**/
FARPROC PySet_Pop;/**/
FARPROC PySet_Size;/**/
FARPROC PySet_Type;/**/
FARPROC PySetIter_Type;/**/
FARPROC PySlice_AdjustIndices;/**/
FARPROC PySlice_Fini;/**/
FARPROC PySlice_GetIndices;/**/
FARPROC PySlice_GetIndicesEx;/**/
FARPROC PySlice_New;/**/
FARPROC PySlice_Type;/**/
FARPROC PySlice_Unpack;/**/
FARPROC PyST_GetScope;/**/
FARPROC PyState_AddModule;/**/
FARPROC PyState_FindModule;/**/
FARPROC PyState_RemoveModule;/**/
FARPROC PyStaticMethod_New;/**/
FARPROC PyStaticMethod_Type;/**/
FARPROC PyStdPrinter_Type;/**/
FARPROC PySTEntry_Type;/**/
FARPROC PyStructSequence_GetItem;/**/
FARPROC PyStructSequence_InitType;/**/
FARPROC PyStructSequence_InitType2;/**/
FARPROC PyStructSequence_New;/**/
FARPROC PyStructSequence_NewType;/**/
FARPROC PyStructSequence_SetItem;/**/
FARPROC PySuper_Type;/**/
FARPROC PySymtable_Build;/**/
FARPROC PySymtable_BuildObject;/**/
FARPROC PySymtable_Free;/**/
FARPROC PySymtable_Lookup;/**/
FARPROC PySys_AddWarnOption;/**/
FARPROC PySys_AddWarnOptionUnicode;/**/
FARPROC PySys_AddXOption;/**/
FARPROC PySys_FormatStderr;/**/
FARPROC PySys_FormatStdout;/**/
FARPROC PySys_GetObject;/**/
FARPROC PySys_GetXOptions;/**/
FARPROC PySys_HasWarnOptions;/**/
FARPROC PySys_ResetWarnOptions;/**/
FARPROC PySys_SetArgv;/**/
FARPROC PySys_SetArgvEx;/**/
FARPROC PySys_SetObject;/**/
FARPROC PySys_SetPath;/**/
FARPROC PySys_WriteStderr;/**/
FARPROC PySys_WriteStdout;/**/
FARPROC PyThread_acquire_lock;/**/
FARPROC PyThread_acquire_lock_timed;/**/
FARPROC PyThread_allocate_lock;/**/
FARPROC PyThread_create_key;/**/
FARPROC PyThread_delete_key;/**/
FARPROC PyThread_delete_key_value;/**/
FARPROC PyThread_exit_thread;/**/
FARPROC PyThread_free_lock;/**/
FARPROC PyThread_get_key_value;/**/
FARPROC PyThread_get_stacksize;/**/
FARPROC PyThread_get_thread_ident;/**/
FARPROC PyThread_GetInfo;/**/
FARPROC PyThread_init_thread;/**/
FARPROC PyThread_ReInitTLS;/**/
FARPROC PyThread_release_lock;/**/
FARPROC PyThread_set_key_value;/**/
FARPROC PyThread_set_stacksize;/**/
FARPROC PyThread_start_new_thread;/**/
FARPROC PyThread_tss_alloc;/**/
FARPROC PyThread_tss_create;/**/
FARPROC PyThread_tss_delete;/**/
FARPROC PyThread_tss_free;/**/
FARPROC PyThread_tss_get;/**/
FARPROC PyThread_tss_is_created;/**/
FARPROC PyThread_tss_set;/**/
FARPROC PyThreadState_Clear;/**/
FARPROC PyThreadState_Delete;/**/
FARPROC PyThreadState_DeleteCurrent;/**/
FARPROC PyThreadState_Get;/**/
FARPROC PyThreadState_GetDict;/**/
FARPROC PyThreadState_New;/**/
FARPROC PyThreadState_Next;/**/
FARPROC PyThreadState_SetAsyncExc;/**/
FARPROC PyThreadState_Swap;/**/
FARPROC PyToken_OneChar;/**/
FARPROC PyToken_ThreeChars;/**/
FARPROC PyToken_TwoChars;/**/
FARPROC PyTraceBack_Here;/**/
FARPROC PyTraceBack_Print;/**/
FARPROC PyTraceBack_Type;/**/
FARPROC PyTraceMalloc_Track;/**/
FARPROC PyTraceMalloc_Untrack;/**/
FARPROC PyTuple_ClearFreeList;/**/
FARPROC PyTuple_Fini;/**/
FARPROC PyTuple_GetItem;/**/
FARPROC PyTuple_GetSlice;/**/
FARPROC PyTuple_New;/**/
FARPROC PyTuple_Pack;/**/
FARPROC PyTuple_SetItem;/**/
FARPROC PyTuple_Size;/**/
FARPROC PyTuple_Type;/**/
FARPROC PyTupleIter_Type;/**/
FARPROC PyType_ClearCache;/**/
FARPROC PyType_FromSpec;/**/
FARPROC PyType_FromSpecWithBases;/**/
FARPROC PyType_GenericAlloc;/**/
FARPROC PyType_GenericNew;/**/
FARPROC PyType_GetFlags;/**/
FARPROC PyType_GetSlot;/**/
FARPROC PyType_IsSubtype;/**/
FARPROC PyType_Modified;/**/
FARPROC PyType_Ready;/**/
FARPROC PyType_Type;/**/
FARPROC PyUnicode_Append;/**/
FARPROC PyUnicode_AppendAndDel;/**/
FARPROC PyUnicode_AsASCIIString;/**/
FARPROC PyUnicode_AsCharmapString;/**/
FARPROC PyUnicode_AsDecodedObject;/**/
FARPROC PyUnicode_AsDecodedUnicode;/**/
FARPROC PyUnicode_AsEncodedObject;/**/
FARPROC PyUnicode_AsEncodedString;/**/
FARPROC PyUnicode_AsEncodedUnicode;/**/
FARPROC PyUnicode_AsLatin1String;/**/
FARPROC PyUnicode_AsMBCSString;/**/
FARPROC PyUnicode_AsRawUnicodeEscapeString;/**/
FARPROC PyUnicode_AsUCS4;/**/
FARPROC PyUnicode_AsUCS4Copy;/**/
FARPROC PyUnicode_AsUnicode;/**/
FARPROC PyUnicode_AsUnicodeAndSize;/**/
FARPROC PyUnicode_AsUnicodeCopy;/**/
FARPROC PyUnicode_AsUnicodeEscapeString;/**/
FARPROC PyUnicode_AsUTF16String;/**/
FARPROC PyUnicode_AsUTF32String;/**/
FARPROC PyUnicode_AsUTF8;/**/
FARPROC PyUnicode_AsUTF8AndSize;/**/
FARPROC PyUnicode_AsUTF8String;/**/
FARPROC PyUnicode_AsWideChar;/**/
FARPROC PyUnicode_AsWideCharString;/**/
FARPROC PyUnicode_BuildEncodingMap;/**/
FARPROC PyUnicode_ClearFreeList;/**/
FARPROC PyUnicode_Compare;/**/
FARPROC PyUnicode_CompareWithASCIIString;/**/
FARPROC PyUnicode_Concat;/**/
FARPROC PyUnicode_Contains;/**/
FARPROC PyUnicode_CopyCharacters;/**/
FARPROC PyUnicode_Count;/**/
FARPROC PyUnicode_Decode;/**/
FARPROC PyUnicode_DecodeASCII;/**/
FARPROC PyUnicode_DecodeCharmap;/**/
FARPROC PyUnicode_DecodeCodePageStateful;/**/
FARPROC PyUnicode_DecodeFSDefault;/**/
FARPROC PyUnicode_DecodeFSDefaultAndSize;/**/
FARPROC PyUnicode_DecodeLatin1;/**/
FARPROC PyUnicode_DecodeLocale;/**/
FARPROC PyUnicode_DecodeLocaleAndSize;/**/
FARPROC PyUnicode_DecodeMBCS;/**/
FARPROC PyUnicode_DecodeMBCSStateful;/**/
FARPROC PyUnicode_DecodeRawUnicodeEscape;/**/
FARPROC PyUnicode_DecodeUnicodeEscape;/**/
FARPROC PyUnicode_DecodeUTF16;/**/
FARPROC PyUnicode_DecodeUTF16Stateful;/**/
FARPROC PyUnicode_DecodeUTF32;/**/
FARPROC PyUnicode_DecodeUTF32Stateful;/**/
FARPROC PyUnicode_DecodeUTF7;/**/
FARPROC PyUnicode_DecodeUTF7Stateful;/**/
FARPROC PyUnicode_DecodeUTF8;/**/
FARPROC PyUnicode_DecodeUTF8Stateful;/**/
FARPROC PyUnicode_Encode;/**/
FARPROC PyUnicode_EncodeASCII;/**/
FARPROC PyUnicode_EncodeCharmap;/**/
FARPROC PyUnicode_EncodeCodePage;/**/
FARPROC PyUnicode_EncodeDecimal;/**/
FARPROC PyUnicode_EncodeFSDefault;/**/
FARPROC PyUnicode_EncodeLatin1;/**/
FARPROC PyUnicode_EncodeLocale;/**/
FARPROC PyUnicode_EncodeMBCS;/**/
FARPROC PyUnicode_EncodeRawUnicodeEscape;/**/
FARPROC PyUnicode_EncodeUnicodeEscape;/**/
FARPROC PyUnicode_EncodeUTF16;/**/
FARPROC PyUnicode_EncodeUTF32;/**/
FARPROC PyUnicode_EncodeUTF7;/**/
FARPROC PyUnicode_EncodeUTF8;/**/
FARPROC PyUnicode_Fill;/**/
FARPROC PyUnicode_Find;/**/
FARPROC PyUnicode_FindChar;/**/
FARPROC PyUnicode_Format;/**/
FARPROC PyUnicode_FromEncodedObject;/**/
FARPROC PyUnicode_FromFormat;/**/
FARPROC PyUnicode_FromFormatV;/**/
FARPROC PyUnicode_FromKindAndData;/**/
FARPROC PyUnicode_FromObject;/**/
FARPROC PyUnicode_FromOrdinal;/**/
FARPROC PyUnicode_FromString;/**/
FARPROC PyUnicode_FromStringAndSize;/**/
FARPROC PyUnicode_FromUnicode;/**/
FARPROC PyUnicode_FromWideChar;/**/
FARPROC PyUnicode_FSConverter;/**/
FARPROC PyUnicode_FSDecoder;/**/
FARPROC PyUnicode_GetDefaultEncoding;/**/
FARPROC PyUnicode_GetLength;/**/
FARPROC PyUnicode_GetMax;/**/
FARPROC PyUnicode_GetSize;/**/
FARPROC PyUnicode_InternFromString;/**/
FARPROC PyUnicode_InternImmortal;/**/
FARPROC PyUnicode_InternInPlace;/**/
FARPROC PyUnicode_IsIdentifier;/**/
FARPROC PyUnicode_Join;/**/
FARPROC PyUnicode_New;/**/
FARPROC PyUnicode_Partition;/**/
FARPROC PyUnicode_ReadChar;/**/
FARPROC PyUnicode_Replace;/**/
FARPROC PyUnicode_Resize;/**/
FARPROC PyUnicode_RichCompare;/**/
FARPROC PyUnicode_RPartition;/**/
FARPROC PyUnicode_RSplit;/**/
FARPROC PyUnicode_Split;/**/
FARPROC PyUnicode_Splitlines;/**/
FARPROC PyUnicode_Substring;/**/
FARPROC PyUnicode_Tailmatch;/**/
FARPROC PyUnicode_TransformDecimalToASCII;/**/
FARPROC PyUnicode_Translate;/**/
FARPROC PyUnicode_TranslateCharmap;/**/
FARPROC PyUnicode_Type;/**/
FARPROC PyUnicode_WriteChar;/**/
FARPROC PyUnicodeDecodeError_Create;/**/
FARPROC PyUnicodeDecodeError_GetEncoding;/**/
FARPROC PyUnicodeDecodeError_GetEnd;/**/
FARPROC PyUnicodeDecodeError_GetObject;/**/
FARPROC PyUnicodeDecodeError_GetReason;/**/
FARPROC PyUnicodeDecodeError_GetStart;/**/
FARPROC PyUnicodeDecodeError_SetEnd;/**/
FARPROC PyUnicodeDecodeError_SetReason;/**/
FARPROC PyUnicodeDecodeError_SetStart;/**/
FARPROC PyUnicodeEncodeError_Create;/**/
FARPROC PyUnicodeEncodeError_GetEncoding;/**/
FARPROC PyUnicodeEncodeError_GetEnd;/**/
FARPROC PyUnicodeEncodeError_GetObject;/**/
FARPROC PyUnicodeEncodeError_GetReason;/**/
FARPROC PyUnicodeEncodeError_GetStart;/**/
FARPROC PyUnicodeEncodeError_SetEnd;/**/
FARPROC PyUnicodeEncodeError_SetReason;/**/
FARPROC PyUnicodeEncodeError_SetStart;/**/
FARPROC PyUnicodeIter_Type;/**/
FARPROC PyUnicodeTranslateError_Create;/**/
FARPROC PyUnicodeTranslateError_GetEnd;/**/
FARPROC PyUnicodeTranslateError_GetObject;/**/
FARPROC PyUnicodeTranslateError_GetReason;/**/
FARPROC PyUnicodeTranslateError_GetStart;/**/
FARPROC PyUnicodeTranslateError_SetEnd;/**/
FARPROC PyUnicodeTranslateError_SetReason;/**/
FARPROC PyUnicodeTranslateError_SetStart;/**/
FARPROC PyWeakref_GetObject;/**/
FARPROC PyWeakref_NewProxy;/**/
FARPROC PyWeakref_NewRef;/**/
FARPROC PyWrapper_New;/**/
FARPROC PyWrapperDescr_Type;/**/
FARPROC PyZip_Type;/**/

bool LoadPythonFunctions() {
	if (IsNull(PythonLib)) {
		printf("[!] Library could not be loaded: PythonBasicLib\n");
		return false;
	}
	else {
		_Py_add_one_to_index_C = PythonFunction("_Py_add_one_to_index_C");
		_Py_add_one_to_index_F = PythonFunction("_Py_add_one_to_index_F");
		_Py_ascii_whitespace = PythonFunction("_Py_ascii_whitespace");
		_Py_BreakPoint = PythonFunction("_Py_BreakPoint");
		_Py_BuildValue_SizeT = PythonFunction("_Py_BuildValue_SizeT");
		_Py_c_abs = PythonFunction("_Py_c_abs");
		_Py_c_diff = PythonFunction("_Py_c_diff");
		_Py_c_neg = PythonFunction("_Py_c_neg");
		_Py_c_pow = PythonFunction("_Py_c_pow");
		_Py_c_prod = PythonFunction("_Py_c_prod");
		_Py_c_quot = PythonFunction("_Py_c_quot");
		_Py_c_sum = PythonFunction("_Py_c_sum");
		_Py_CheckFunctionResult = PythonFunction("_Py_CheckFunctionResult");
		_Py_CheckRecursionLimit = PythonFunction("_Py_CheckRecursionLimit");
		_Py_CheckRecursiveCall = PythonFunction("_Py_CheckRecursiveCall");
		_Py_CoerceLegacyLocale = PythonFunction("_Py_CoerceLegacyLocale");
		_Py_convert_optional_to_ssize_t = PythonFunction("_Py_convert_optional_to_ssize_t");
		_Py_ctype_table = PythonFunction("_Py_ctype_table");
		_Py_ctype_tolower = PythonFunction("_Py_ctype_tolower");
		_Py_ctype_toupper = PythonFunction("_Py_ctype_toupper");
		_Py_Dealloc = PythonFunction("_Py_Dealloc");
		_Py_DecodeLocaleEx = PythonFunction("_Py_DecodeLocaleEx");
		_Py_DecodeUTF8_surrogateescape = PythonFunction("_Py_DecodeUTF8_surrogateescape");
		_Py_DecodeUTF8Ex = PythonFunction("_Py_DecodeUTF8Ex");
		_Py_device_encoding = PythonFunction("_Py_device_encoding");
		_Py_dg_dtoa = PythonFunction("_Py_dg_dtoa");
		_Py_dg_freedtoa = PythonFunction("_Py_dg_freedtoa");
		_Py_dg_infinity = PythonFunction("_Py_dg_infinity");
		_Py_dg_stdnan = PythonFunction("_Py_dg_stdnan");
		_Py_dg_strtod = PythonFunction("_Py_dg_strtod");
		_Py_DisplaySourceLine = PythonFunction("_Py_DisplaySourceLine");
		_Py_DumpASCII = PythonFunction("_Py_DumpASCII");
		_Py_DumpDecimal = PythonFunction("_Py_DumpDecimal");
		_Py_DumpHexadecimal = PythonFunction("_Py_DumpHexadecimal");
		_Py_DumpTraceback = PythonFunction("_Py_DumpTraceback");
		_Py_DumpTracebackThreads = PythonFunction("_Py_DumpTracebackThreads");
		_Py_dup = PythonFunction("_Py_dup");
		_Py_EllipsisObject = PythonFunction("_Py_EllipsisObject");
		_Py_EncodeLocaleEx = PythonFunction("_Py_EncodeLocaleEx");
		_Py_EncodeLocaleRaw = PythonFunction("_Py_EncodeLocaleRaw");
		_Py_EncodeUTF8Ex = PythonFunction("_Py_EncodeUTF8Ex");
		_Py_FalseStruct = PythonFunction("_Py_FalseStruct");
		_Py_FatalInitError = PythonFunction("_Py_FatalInitError");
		_Py_FindEnvConfigValue = PythonFunction("_Py_FindEnvConfigValue");
		_Py_fopen = PythonFunction("_Py_fopen");
		_Py_fopen_obj = PythonFunction("_Py_fopen_obj");
		_Py_FreeCharPArray = PythonFunction("_Py_FreeCharPArray");
		_Py_fstat = PythonFunction("_Py_fstat");
		_Py_fstat_noraise = PythonFunction("_Py_fstat_noraise");
		_Py_get_inheritable = PythonFunction("_Py_get_inheritable");
		_Py_GetAllocatedBlocks = PythonFunction("_Py_GetAllocatedBlocks");
		_Py_GetForceASCII = PythonFunction("_Py_GetForceASCII");
		_Py_GetGlobalVariablesAsDict = PythonFunction("_Py_GetGlobalVariablesAsDict");
		_Py_GetLocaleconvNumeric = PythonFunction("_Py_GetLocaleconvNumeric");
		_Py_gitidentifier = PythonFunction("_Py_gitidentifier");
		_Py_gitversion = PythonFunction("_Py_gitversion");
		_Py_HashBytes = PythonFunction("_Py_HashBytes");
		_Py_HashDouble = PythonFunction("_Py_HashDouble");
		_Py_HashPointer = PythonFunction("_Py_HashPointer");
		_Py_HashRandomization_Fini = PythonFunction("_Py_HashRandomization_Fini");
		_Py_HashRandomization_Init = PythonFunction("_Py_HashRandomization_Init");
		_Py_HashSecret = PythonFunction("_Py_HashSecret");
		_Py_hashtable_clear = PythonFunction("_Py_hashtable_clear");
		_Py_hashtable_compare_direct = PythonFunction("_Py_hashtable_compare_direct");
		_Py_hashtable_copy = PythonFunction("_Py_hashtable_copy");
		_Py_hashtable_destroy = PythonFunction("_Py_hashtable_destroy");
		_Py_hashtable_foreach = PythonFunction("_Py_hashtable_foreach");
		_Py_hashtable_get = PythonFunction("_Py_hashtable_get");
		_Py_hashtable_get_entry = PythonFunction("_Py_hashtable_get_entry");
		_Py_hashtable_hash_ptr = PythonFunction("_Py_hashtable_hash_ptr");
		_Py_hashtable_new = PythonFunction("_Py_hashtable_new");
		_Py_hashtable_new_full = PythonFunction("_Py_hashtable_new_full");
		_Py_hashtable_pop = PythonFunction("_Py_hashtable_pop");
		_Py_hashtable_set = PythonFunction("_Py_hashtable_set");
		_Py_hashtable_size = PythonFunction("_Py_hashtable_size");
		_Py_Initialize_ReadEnvVarsNoAlloc = PythonFunction("_Py_Initialize_ReadEnvVarsNoAlloc");
		_Py_InitializeCore = PythonFunction("_Py_InitializeCore");
		_Py_InitializeFromConfig = PythonFunction("_Py_InitializeFromConfig");
		_Py_InitializeMainInterpreter = PythonFunction("_Py_InitializeMainInterpreter");
		_Py_IsCoreInitialized = PythonFunction("_Py_IsCoreInitialized");
		_Py_IsFinalizing = PythonFunction("_Py_IsFinalizing");
		_Py_LegacyLocaleDetected = PythonFunction("_Py_LegacyLocaleDetected");
		_Py_Mangle = PythonFunction("_Py_Mangle");
		_Py_NoneStruct = PythonFunction("_Py_NoneStruct");
		_Py_NotImplementedStruct = PythonFunction("_Py_NotImplementedStruct");
		_Py_open = PythonFunction("_Py_open");
		_Py_open_noraise = PythonFunction("_Py_open_noraise");
		_Py_PackageContext = PythonFunction("_Py_PackageContext");
		_Py_parse_inf_or_nan = PythonFunction("_Py_parse_inf_or_nan");
		_Py_path_config = PythonFunction("_Py_path_config");
		_Py_PyAtExit = PythonFunction("_Py_PyAtExit");
		_Py_read = PythonFunction("_Py_read");
		_Py_ReadHashSeed = PythonFunction("_Py_ReadHashSeed");
		_Py_ReleaseInternedUnicodeStrings = PythonFunction("_Py_ReleaseInternedUnicodeStrings");
		_Py_ResetForceASCII = PythonFunction("_Py_ResetForceASCII");
		_Py_RestoreSignals = PythonFunction("_Py_RestoreSignals");
		_Py_set_inheritable = PythonFunction("_Py_set_inheritable");
		_Py_set_inheritable_async_safe = PythonFunction("_Py_set_inheritable_async_safe");
		_Py_SetLocaleFromEnv = PythonFunction("_Py_SetLocaleFromEnv");
		_Py_SetProgramFullPath = PythonFunction("_Py_SetProgramFullPath");
		_Py_stat = PythonFunction("_Py_stat");
		_Py_strhex = PythonFunction("_Py_strhex");
		_Py_strhex_bytes = PythonFunction("_Py_strhex_bytes");
		_Py_string_to_number_with_underscores = PythonFunction("_Py_string_to_number_with_underscores");
		_Py_SwappedOp = PythonFunction("_Py_SwappedOp");
		_Py_TrueStruct = PythonFunction("_Py_TrueStruct");
		_Py_UnixMain = PythonFunction("_Py_UnixMain");
		_Py_VaBuildStack = PythonFunction("_Py_VaBuildStack");
		_Py_VaBuildStack_SizeT = PythonFunction("_Py_VaBuildStack_SizeT");
		_Py_VaBuildValue_SizeT = PythonFunction("_Py_VaBuildValue_SizeT");
		_Py_wfopen = PythonFunction("_Py_wfopen");
		_Py_wgetcwd = PythonFunction("_Py_wgetcwd");
		_Py_write = PythonFunction("_Py_write");
		_Py_write_noraise = PythonFunction("_Py_write_noraise");
		_PyAccu_Accumulate = PythonFunction("_PyAccu_Accumulate");
		_PyAccu_Destroy = PythonFunction("_PyAccu_Destroy");
		_PyAccu_Finish = PythonFunction("_PyAccu_Finish");
		_PyAccu_FinishAsList = PythonFunction("_PyAccu_FinishAsList");
		_PyAccu_Init = PythonFunction("_PyAccu_Init");
		_PyArg_NoKeywords = PythonFunction("_PyArg_NoKeywords");
		_PyArg_NoPositional = PythonFunction("_PyArg_NoPositional");
		_PyArg_Parse_SizeT = PythonFunction("_PyArg_Parse_SizeT");
		_PyArg_ParseStack = PythonFunction("_PyArg_ParseStack");
		_PyArg_ParseStack_SizeT = PythonFunction("_PyArg_ParseStack_SizeT");
		_PyArg_ParseStackAndKeywords = PythonFunction("_PyArg_ParseStackAndKeywords");
		_PyArg_ParseStackAndKeywords_SizeT = PythonFunction("_PyArg_ParseStackAndKeywords_SizeT");
		_PyArg_ParseTuple_SizeT = PythonFunction("_PyArg_ParseTuple_SizeT");
		_PyArg_ParseTupleAndKeywords_SizeT = PythonFunction("_PyArg_ParseTupleAndKeywords_SizeT");
		_PyArg_ParseTupleAndKeywordsFast = PythonFunction("_PyArg_ParseTupleAndKeywordsFast");
		_PyArg_ParseTupleAndKeywordsFast_SizeT = PythonFunction("_PyArg_ParseTupleAndKeywordsFast_SizeT");
		_PyArg_UnpackStack = PythonFunction("_PyArg_UnpackStack");
		_PyArg_VaParse_SizeT = PythonFunction("_PyArg_VaParse_SizeT");
		_PyArg_VaParseTupleAndKeywords_SizeT = PythonFunction("_PyArg_VaParseTupleAndKeywords_SizeT");
		_PyArg_VaParseTupleAndKeywordsFast = PythonFunction("_PyArg_VaParseTupleAndKeywordsFast");
		_PyArg_VaParseTupleAndKeywordsFast_SizeT = PythonFunction("_PyArg_VaParseTupleAndKeywordsFast_SizeT");
		_PyAST_Optimize = PythonFunction("_PyAST_Optimize");
		_PyAsyncGenASend_Type = PythonFunction("_PyAsyncGenASend_Type");
		_PyAsyncGenAThrow_Type = PythonFunction("_PyAsyncGenAThrow_Type");
		_PyAsyncGenWrappedValue_Type = PythonFunction("_PyAsyncGenWrappedValue_Type");
		_PyBuiltin_Init = PythonFunction("_PyBuiltin_Init");
		_PyByteArray_empty_string = PythonFunction("_PyByteArray_empty_string");
		_PyBytes_DecodeEscape = PythonFunction("_PyBytes_DecodeEscape");
		_PyBytes_FormatEx = PythonFunction("_PyBytes_FormatEx");
		_PyBytes_FromHex = PythonFunction("_PyBytes_FromHex");
		_PyBytes_Join = PythonFunction("_PyBytes_Join");
		_PyBytes_Resize = PythonFunction("_PyBytes_Resize");
		_PyBytesWriter_Alloc = PythonFunction("_PyBytesWriter_Alloc");
		_PyBytesWriter_Dealloc = PythonFunction("_PyBytesWriter_Dealloc");
		_PyBytesWriter_Finish = PythonFunction("_PyBytesWriter_Finish");
		_PyBytesWriter_Init = PythonFunction("_PyBytesWriter_Init");
		_PyBytesWriter_Prepare = PythonFunction("_PyBytesWriter_Prepare");
		_PyBytesWriter_Resize = PythonFunction("_PyBytesWriter_Resize");
		_PyBytesWriter_WriteBytes = PythonFunction("_PyBytesWriter_WriteBytes");
		_PyCFunction_DebugMallocStats = PythonFunction("_PyCFunction_DebugMallocStats");
		_PyCFunction_FastCallDict = PythonFunction("_PyCFunction_FastCallDict");
		_PyCFunction_FastCallKeywords = PythonFunction("_PyCFunction_FastCallKeywords");
		_PyCode_CheckLineNumber = PythonFunction("_PyCode_CheckLineNumber");
		_PyCode_ConstantKey = PythonFunction("_PyCode_ConstantKey");
		_PyCode_GetExtra = PythonFunction("_PyCode_GetExtra");
		_PyCode_SetExtra = PythonFunction("_PyCode_SetExtra");
		_PyCodec_DecodeText = PythonFunction("_PyCodec_DecodeText");
		_PyCodec_EncodeText = PythonFunction("_PyCodec_EncodeText");
		_PyCodec_Forget = PythonFunction("_PyCodec_Forget");
		_PyCodec_Lookup = PythonFunction("_PyCodec_Lookup");
		_PyCodec_LookupTextEncoding = PythonFunction("_PyCodec_LookupTextEncoding");
		_PyCodecInfo_GetIncrementalDecoder = PythonFunction("_PyCodecInfo_GetIncrementalDecoder");
		_PyCodecInfo_GetIncrementalEncoder = PythonFunction("_PyCodecInfo_GetIncrementalEncoder");
		_PyComplex_FormatAdvancedWriter = PythonFunction("_PyComplex_FormatAdvancedWriter");
		_PyContext_NewHamtForTests = PythonFunction("_PyContext_NewHamtForTests");
		_PyCoreConfig_AsDict = PythonFunction("_PyCoreConfig_AsDict");
		_PyCoreConfig_Clear = PythonFunction("_PyCoreConfig_Clear");
		_PyCoreConfig_Copy = PythonFunction("_PyCoreConfig_Copy");
		_PyCoreConfig_Read = PythonFunction("_PyCoreConfig_Read");
		_PyCoreConfig_SetGlobalConfig = PythonFunction("_PyCoreConfig_SetGlobalConfig");
		_PyCoroWrapper_Type = PythonFunction("_PyCoroWrapper_Type");
		_PyDebugAllocatorStats = PythonFunction("_PyDebugAllocatorStats");
		_PyDict_Contains = PythonFunction("_PyDict_Contains");
		_PyDict_DebugMallocStats = PythonFunction("_PyDict_DebugMallocStats");
		_PyDict_DelItem_KnownHash = PythonFunction("_PyDict_DelItem_KnownHash");
		_PyDict_DelItemId = PythonFunction("_PyDict_DelItemId");
		_PyDict_DelItemIf = PythonFunction("_PyDict_DelItemIf");
		_PyDict_GetItem_KnownHash = PythonFunction("_PyDict_GetItem_KnownHash");
		_PyDict_GetItemId = PythonFunction("_PyDict_GetItemId");
		_PyDict_GetItemIdWithError = PythonFunction("_PyDict_GetItemIdWithError");
		_PyDict_HasOnlyStringKeys = PythonFunction("_PyDict_HasOnlyStringKeys");
		_PyDict_MaybeUntrack = PythonFunction("_PyDict_MaybeUntrack");
		_PyDict_MergeEx = PythonFunction("_PyDict_MergeEx");
		_PyDict_NewPresized = PythonFunction("_PyDict_NewPresized");
		_PyDict_Next = PythonFunction("_PyDict_Next");
		_PyDict_Pop = PythonFunction("_PyDict_Pop");
		_PyDict_SetItem_KnownHash = PythonFunction("_PyDict_SetItem_KnownHash");
		_PyDict_SetItemId = PythonFunction("_PyDict_SetItemId");
		_PyDict_SizeOf = PythonFunction("_PyDict_SizeOf");
		_PyDictView_Intersect = PythonFunction("_PyDictView_Intersect");
		_PyErr_BadInternalCall = PythonFunction("_PyErr_BadInternalCall");
		_PyErr_ChainExceptions = PythonFunction("_PyErr_ChainExceptions");
		_PyErr_FormatFromCause = PythonFunction("_PyErr_FormatFromCause");
		_PyErr_SetKeyError = PythonFunction("_PyErr_SetKeyError");
		_PyErr_TrySetFromCause = PythonFunction("_PyErr_TrySetFromCause");
		_PyEval_CallTracing = PythonFunction("_PyEval_CallTracing");
		_PyEval_EvalCodeWithName = PythonFunction("_PyEval_EvalCodeWithName");
		_PyEval_EvalFrameDefault = PythonFunction("_PyEval_EvalFrameDefault");
		_PyEval_FiniThreads = PythonFunction("_PyEval_FiniThreads");
		_PyEval_GetAsyncGenFinalizer = PythonFunction("_PyEval_GetAsyncGenFinalizer");
		_PyEval_GetAsyncGenFirstiter = PythonFunction("_PyEval_GetAsyncGenFirstiter");
		_PyEval_GetBuiltinId = PythonFunction("_PyEval_GetBuiltinId");
		_PyEval_GetCoroutineOriginTrackingDepth = PythonFunction("_PyEval_GetCoroutineOriginTrackingDepth");
		_PyEval_GetCoroutineWrapper = PythonFunction("_PyEval_GetCoroutineWrapper");
		_PyEval_GetSwitchInterval = PythonFunction("_PyEval_GetSwitchInterval");
		_PyEval_Initialize = PythonFunction("_PyEval_Initialize");
		_PyEval_RequestCodeExtraIndex = PythonFunction("_PyEval_RequestCodeExtraIndex");
		_PyEval_SetAsyncGenFinalizer = PythonFunction("_PyEval_SetAsyncGenFinalizer");
		_PyEval_SetAsyncGenFirstiter = PythonFunction("_PyEval_SetAsyncGenFirstiter");
		_PyEval_SetCoroutineOriginTrackingDepth = PythonFunction("_PyEval_SetCoroutineOriginTrackingDepth");
		_PyEval_SetCoroutineWrapper = PythonFunction("_PyEval_SetCoroutineWrapper");
		_PyEval_SetSwitchInterval = PythonFunction("_PyEval_SetSwitchInterval");
		_PyEval_SignalAsyncExc = PythonFunction("_PyEval_SignalAsyncExc");
		_PyEval_SignalReceived = PythonFunction("_PyEval_SignalReceived");
		_PyEval_SliceIndex = PythonFunction("_PyEval_SliceIndex");
		_PyEval_SliceIndexNotNone = PythonFunction("_PyEval_SliceIndexNotNone");
		_PyExc_Fini = PythonFunction("_PyExc_Fini");
		_PyExc_Init = PythonFunction("_PyExc_Init");
		_PyFloat_DebugMallocStats = PythonFunction("_PyFloat_DebugMallocStats");
		_PyFloat_FormatAdvancedWriter = PythonFunction("_PyFloat_FormatAdvancedWriter");
		_PyFloat_Init = PythonFunction("_PyFloat_Init");
		_PyFloat_Pack2 = PythonFunction("_PyFloat_Pack2");
		_PyFloat_Pack4 = PythonFunction("_PyFloat_Pack4");
		_PyFloat_Pack8 = PythonFunction("_PyFloat_Pack8");
		_PyFloat_Unpack2 = PythonFunction("_PyFloat_Unpack2");
		_PyFloat_Unpack4 = PythonFunction("_PyFloat_Unpack4");
		_PyFloat_Unpack8 = PythonFunction("_PyFloat_Unpack8");
		_PyFrame_DebugMallocStats = PythonFunction("_PyFrame_DebugMallocStats");
		_PyFrame_Init = PythonFunction("_PyFrame_Init");
		_PyFunction_FastCallDict = PythonFunction("_PyFunction_FastCallDict");
		_PyFunction_FastCallKeywords = PythonFunction("_PyFunction_FastCallKeywords");
		_PyGC_CollectIfEnabled = PythonFunction("_PyGC_CollectIfEnabled");
		_PyGC_CollectNoFail = PythonFunction("_PyGC_CollectNoFail");
		_PyGC_DumpShutdownStats = PythonFunction("_PyGC_DumpShutdownStats");
		_PyGC_Fini = PythonFunction("_PyGC_Fini");
		_PyGC_Initialize = PythonFunction("_PyGC_Initialize");
		_PyGen_FetchStopIterationValue = PythonFunction("_PyGen_FetchStopIterationValue");
		_PyGen_Finalize = PythonFunction("_PyGen_Finalize");
		_PyGen_Send = PythonFunction("_PyGen_Send");
		_PyGen_SetStopIterationValue = PythonFunction("_PyGen_SetStopIterationValue");
		_PyGILState_GetInterpreterStateUnsafe = PythonFunction("_PyGILState_GetInterpreterStateUnsafe");
		_PyGILState_Reinit = PythonFunction("_PyGILState_Reinit");
		_PyHamt_ArrayNode_Type = PythonFunction("_PyHamt_ArrayNode_Type");
		_PyHamt_BitmapNode_Type = PythonFunction("_PyHamt_BitmapNode_Type");
		_PyHamt_CollisionNode_Type = PythonFunction("_PyHamt_CollisionNode_Type");
		_PyHamt_Type = PythonFunction("_PyHamt_Type");
		_PyHamtItems_Type = PythonFunction("_PyHamtItems_Type");
		_PyHamtKeys_Type = PythonFunction("_PyHamtKeys_Type");
		_PyHamtValues_Type = PythonFunction("_PyHamtValues_Type");
		_PyImport_AcquireLock = PythonFunction("_PyImport_AcquireLock");
		_PyImport_AddModuleObject = PythonFunction("_PyImport_AddModuleObject");
		_PyImport_FindBuiltin = PythonFunction("_PyImport_FindBuiltin");
		_PyImport_FindExtensionObject = PythonFunction("_PyImport_FindExtensionObject");
		_PyImport_FindExtensionObjectEx = PythonFunction("_PyImport_FindExtensionObjectEx");
		_PyImport_Fini = PythonFunction("_PyImport_Fini");
		_PyImport_Fini2 = PythonFunction("_PyImport_Fini2");
		_PyImport_FixupBuiltin = PythonFunction("_PyImport_FixupBuiltin");
		_PyImport_FixupExtensionObject = PythonFunction("_PyImport_FixupExtensionObject");
		_PyImport_GetModuleId = PythonFunction("_PyImport_GetModuleId");
		_PyImport_Init = PythonFunction("_PyImport_Init");
		_PyImport_IsInitialized = PythonFunction("_PyImport_IsInitialized");
		_PyImport_ReInitLock = PythonFunction("_PyImport_ReInitLock");
		_PyImport_ReleaseLock = PythonFunction("_PyImport_ReleaseLock");
		_PyImport_SetModule = PythonFunction("_PyImport_SetModule");
		_PyImport_SetModuleString = PythonFunction("_PyImport_SetModuleString");
		_PyImportHooks_Init = PythonFunction("_PyImportHooks_Init");
		_PyImportZip_Init = PythonFunction("_PyImportZip_Init");
		_PyInterpreterState_Enable = PythonFunction("_PyInterpreterState_Enable");
		_PyInterpreterState_IDDecref = PythonFunction("_PyInterpreterState_IDDecref");
		_PyInterpreterState_IDIncref = PythonFunction("_PyInterpreterState_IDIncref");
		_PyInterpreterState_IDInitref = PythonFunction("_PyInterpreterState_IDInitref");
		_PyInterpreterState_LookUpID = PythonFunction("_PyInterpreterState_LookUpID");
		_PyList_DebugMallocStats = PythonFunction("_PyList_DebugMallocStats");
		_PyList_Extend = PythonFunction("_PyList_Extend");
		_PyLong_AsByteArray = PythonFunction("_PyLong_AsByteArray");
		_PyLong_AsInt = PythonFunction("_PyLong_AsInt");
		_PyLong_AsTime_t = PythonFunction("_PyLong_AsTime_t");
		_PyLong_Copy = PythonFunction("_PyLong_Copy");
		_PyLong_DigitValue = PythonFunction("_PyLong_DigitValue");
		_PyLong_DivmodNear = PythonFunction("_PyLong_DivmodNear");
		_PyLong_Format = PythonFunction("_PyLong_Format");
		_PyLong_FormatAdvancedWriter = PythonFunction("_PyLong_FormatAdvancedWriter");
		_PyLong_FormatBytesWriter = PythonFunction("_PyLong_FormatBytesWriter");
		_PyLong_FormatWriter = PythonFunction("_PyLong_FormatWriter");
		_PyLong_Frexp = PythonFunction("_PyLong_Frexp");
		_PyLong_FromByteArray = PythonFunction("_PyLong_FromByteArray");
		_PyLong_FromBytes = PythonFunction("_PyLong_FromBytes");
		_PyLong_FromNbInt = PythonFunction("_PyLong_FromNbInt");
		_PyLong_FromTime_t = PythonFunction("_PyLong_FromTime_t");
		_PyLong_GCD = PythonFunction("_PyLong_GCD");
		_PyLong_New = PythonFunction("_PyLong_New");
		_PyLong_NumBits = PythonFunction("_PyLong_NumBits");
		_PyLong_One = PythonFunction("_PyLong_One");
		_PyLong_Sign = PythonFunction("_PyLong_Sign");
		_PyLong_Zero = PythonFunction("_PyLong_Zero");
		_PyMainInterpreterConfig_AsDict = PythonFunction("_PyMainInterpreterConfig_AsDict");
		_PyMainInterpreterConfig_Clear = PythonFunction("_PyMainInterpreterConfig_Clear");
		_PyMainInterpreterConfig_Copy = PythonFunction("_PyMainInterpreterConfig_Copy");
		_PyMainInterpreterConfig_Read = PythonFunction("_PyMainInterpreterConfig_Read");
		_PyManagedBuffer_Type = PythonFunction("_PyManagedBuffer_Type");
		_PyMem_GetAllocatorsName = PythonFunction("_PyMem_GetAllocatorsName");
		_PyMem_RawStrdup = PythonFunction("_PyMem_RawStrdup");
		_PyMem_RawWcsdup = PythonFunction("_PyMem_RawWcsdup");
		_PyMem_SetDefaultAllocator = PythonFunction("_PyMem_SetDefaultAllocator");
		_PyMem_SetupAllocators = PythonFunction("_PyMem_SetupAllocators");
		_PyMem_Strdup = PythonFunction("_PyMem_Strdup");
		_PyMethod_DebugMallocStats = PythonFunction("_PyMethod_DebugMallocStats");
		_PyMethodDef_RawFastCallDict = PythonFunction("_PyMethodDef_RawFastCallDict");
		_PyMethodDef_RawFastCallKeywords = PythonFunction("_PyMethodDef_RawFastCallKeywords");
		_PyMethodDescr_FastCallKeywords = PythonFunction("_PyMethodDescr_FastCallKeywords");
		_PyMethodWrapper_Type = PythonFunction("_PyMethodWrapper_Type");
		_PyModule_Clear = PythonFunction("_PyModule_Clear");
		_PyModule_ClearDict = PythonFunction("_PyModule_ClearDict");
		_PyModule_CreateInitialized = PythonFunction("_PyModule_CreateInitialized");
		_PyNamespace_New = PythonFunction("_PyNamespace_New");
		_PyNamespace_Type = PythonFunction("_PyNamespace_Type");
		_PyNode_SizeOf = PythonFunction("_PyNode_SizeOf");
		_PyNone_Type = PythonFunction("_PyNone_Type");
		_PyNotImplemented_Type = PythonFunction("_PyNotImplemented_Type");
		_PyObject_Call_Prepend = PythonFunction("_PyObject_Call_Prepend");
		_PyObject_CallFunction_SizeT = PythonFunction("_PyObject_CallFunction_SizeT");
		_PyObject_CallMethod_SizeT = PythonFunction("_PyObject_CallMethod_SizeT");
		_PyObject_CallMethodId = PythonFunction("_PyObject_CallMethodId");
		_PyObject_CallMethodId_SizeT = PythonFunction("_PyObject_CallMethodId_SizeT");
		_PyObject_CallMethodIdObjArgs = PythonFunction("_PyObject_CallMethodIdObjArgs");
		_PyObject_DebugMallocStats = PythonFunction("_PyObject_DebugMallocStats");
		_PyObject_DebugTypeStats = PythonFunction("_PyObject_DebugTypeStats");
		_PyObject_Dump = PythonFunction("_PyObject_Dump");
		_PyObject_FastCall_Prepend = PythonFunction("_PyObject_FastCall_Prepend");
		_PyObject_FastCallDict = PythonFunction("_PyObject_FastCallDict");
		_PyObject_FastCallKeywords = PythonFunction("_PyObject_FastCallKeywords");
		_PyObject_GC_Calloc = PythonFunction("_PyObject_GC_Calloc");
		_PyObject_GC_Malloc = PythonFunction("_PyObject_GC_Malloc");
		_PyObject_GC_New = PythonFunction("_PyObject_GC_New");
		_PyObject_GC_NewVar = PythonFunction("_PyObject_GC_NewVar");
		_PyObject_GC_Resize = PythonFunction("_PyObject_GC_Resize");
		_PyObject_GenericGetAttrWithDict = PythonFunction("_PyObject_GenericGetAttrWithDict");
		_PyObject_GenericSetAttrWithDict = PythonFunction("_PyObject_GenericSetAttrWithDict");
		_PyObject_GetAttrId = PythonFunction("_PyObject_GetAttrId");
		_PyObject_GetBuiltin = PythonFunction("_PyObject_GetBuiltin");
		_PyObject_GetDictPtr = PythonFunction("_PyObject_GetDictPtr");
		_PyObject_HasAttrId = PythonFunction("_PyObject_HasAttrId");
		_PyObject_HasFastCall = PythonFunction("_PyObject_HasFastCall");
		_PyObject_HasLen = PythonFunction("_PyObject_HasLen");
		_PyObject_IsAbstract = PythonFunction("_PyObject_IsAbstract");
		_PyObject_IsFreed = PythonFunction("_PyObject_IsFreed");
		_PyObject_LookupAttr = PythonFunction("_PyObject_LookupAttr");
		_PyObject_LookupAttrId = PythonFunction("_PyObject_LookupAttrId");
		_PyObject_LookupSpecial = PythonFunction("_PyObject_LookupSpecial");
		_PyObject_New = PythonFunction("_PyObject_New");
		_PyObject_NewVar = PythonFunction("_PyObject_NewVar");
		_PyObject_NextNotImplemented = PythonFunction("_PyObject_NextNotImplemented");
		_PyObject_RealIsInstance = PythonFunction("_PyObject_RealIsInstance");
		_PyObject_RealIsSubclass = PythonFunction("_PyObject_RealIsSubclass");
		_PyObject_SetAttrId = PythonFunction("_PyObject_SetAttrId");
		_PyOS_IsMainThread = PythonFunction("_PyOS_IsMainThread");
		_PyOS_ReadlineTState = PythonFunction("_PyOS_ReadlineTState");
		_PyOS_SigintEvent = PythonFunction("_PyOS_SigintEvent");
		_PyOS_URandom = PythonFunction("_PyOS_URandom");
		_PyOS_URandomNonblock = PythonFunction("_PyOS_URandomNonblock");
		_PyParser_Grammar = PythonFunction("_PyParser_Grammar");
		_PyParser_TokenNames = PythonFunction("_PyParser_TokenNames");
		_PyPathConfig_Calculate = PythonFunction("_PyPathConfig_Calculate");
		_PyPathConfig_Clear = PythonFunction("_PyPathConfig_Clear");
		_PyPathConfig_ComputeArgv0 = PythonFunction("_PyPathConfig_ComputeArgv0");
		_PyPathConfig_Init = PythonFunction("_PyPathConfig_Init");
		_PyRuntime = PythonFunction("_PyRuntime");
		_PyRuntime_Finalize = PythonFunction("_PyRuntime_Finalize");
		_PyRuntime_Initialize = PythonFunction("_PyRuntime_Initialize");
		_PyRuntimeState_Fini = PythonFunction("_PyRuntimeState_Fini");
		_PyRuntimeState_Init = PythonFunction("_PyRuntimeState_Init");
		_PySequence_BytesToCharpArray = PythonFunction("_PySequence_BytesToCharpArray");
		_PySequence_IterSearch = PythonFunction("_PySequence_IterSearch");
		_PySet_Dummy = PythonFunction("_PySet_Dummy");
		_PySet_NextEntry = PythonFunction("_PySet_NextEntry");
		_PySet_Update = PythonFunction("_PySet_Update");
		_PySignal_AfterFork = PythonFunction("_PySignal_AfterFork");
		_PySlice_FromIndices = PythonFunction("_PySlice_FromIndices");
		_PySlice_GetLongIndices = PythonFunction("_PySlice_GetLongIndices");
		_PyStack_AsDict = PythonFunction("_PyStack_AsDict");
		_PyStack_AsTuple = PythonFunction("_PyStack_AsTuple");
		_PyStack_AsTupleSlice = PythonFunction("_PyStack_AsTupleSlice");
		_PyStack_UnpackDict = PythonFunction("_PyStack_UnpackDict");
		_PyState_AddModule = PythonFunction("_PyState_AddModule");
		_PyState_ClearModules = PythonFunction("_PyState_ClearModules");
		_PySys_AddWarnOptionWithError = PythonFunction("_PySys_AddWarnOptionWithError");
		_PySys_AddXOptionWithError = PythonFunction("_PySys_AddXOptionWithError");
		_PySys_BeginInit = PythonFunction("_PySys_BeginInit");
		_PySys_EndInit = PythonFunction("_PySys_EndInit");
		_PySys_GetObjectId = PythonFunction("_PySys_GetObjectId");
		_PySys_GetSizeOf = PythonFunction("_PySys_GetSizeOf");
		_PySys_SetObjectId = PythonFunction("_PySys_SetObjectId");
		_PyThread_CurrentFrames = PythonFunction("_PyThread_CurrentFrames");
		_PyThreadState_DeleteExcept = PythonFunction("_PyThreadState_DeleteExcept");
		_PyThreadState_Init = PythonFunction("_PyThreadState_Init");
		_PyThreadState_Prealloc = PythonFunction("_PyThreadState_Prealloc");
		_PyThreadState_UncheckedGet = PythonFunction("_PyThreadState_UncheckedGet");
		_PyTime_AsMicroseconds = PythonFunction("_PyTime_AsMicroseconds");
		_PyTime_AsMilliseconds = PythonFunction("_PyTime_AsMilliseconds");
		_PyTime_AsNanosecondsObject = PythonFunction("_PyTime_AsNanosecondsObject");
		_PyTime_AsSecondsDouble = PythonFunction("_PyTime_AsSecondsDouble");
		_PyTime_AsTimeval = PythonFunction("_PyTime_AsTimeval");
		_PyTime_AsTimeval_noraise = PythonFunction("_PyTime_AsTimeval_noraise");
		_PyTime_AsTimevalTime_t = PythonFunction("_PyTime_AsTimevalTime_t");
		_PyTime_FromMillisecondsObject = PythonFunction("_PyTime_FromMillisecondsObject");
		_PyTime_FromNanoseconds = PythonFunction("_PyTime_FromNanoseconds");
		_PyTime_FromNanosecondsObject = PythonFunction("_PyTime_FromNanosecondsObject");
		_PyTime_FromSeconds = PythonFunction("_PyTime_FromSeconds");
		_PyTime_FromSecondsObject = PythonFunction("_PyTime_FromSecondsObject");
		_PyTime_GetMonotonicClock = PythonFunction("_PyTime_GetMonotonicClock");
		_PyTime_GetMonotonicClockWithInfo = PythonFunction("_PyTime_GetMonotonicClockWithInfo");
		_PyTime_GetPerfCounter = PythonFunction("_PyTime_GetPerfCounter");
		_PyTime_GetPerfCounterWithInfo = PythonFunction("_PyTime_GetPerfCounterWithInfo");
		_PyTime_GetSystemClock = PythonFunction("_PyTime_GetSystemClock");
		_PyTime_GetSystemClockWithInfo = PythonFunction("_PyTime_GetSystemClockWithInfo");
		_PyTime_gmtime = PythonFunction("_PyTime_gmtime");
		_PyTime_Init = PythonFunction("_PyTime_Init");
		_PyTime_localtime = PythonFunction("_PyTime_localtime");
		_PyTime_MulDiv = PythonFunction("_PyTime_MulDiv");
		_PyTime_ObjectToTime_t = PythonFunction("_PyTime_ObjectToTime_t");
		_PyTime_ObjectToTimespec = PythonFunction("_PyTime_ObjectToTimespec");
		_PyTime_ObjectToTimeval = PythonFunction("_PyTime_ObjectToTimeval");
		_PyTraceback_Add = PythonFunction("_PyTraceback_Add");
		_PyTraceMalloc_GetTraceback = PythonFunction("_PyTraceMalloc_GetTraceback");
		_PyTrash_deposit_object = PythonFunction("_PyTrash_deposit_object");
		_PyTrash_destroy_chain = PythonFunction("_PyTrash_destroy_chain");
		_PyTrash_thread_deposit_object = PythonFunction("_PyTrash_thread_deposit_object");
		_PyTrash_thread_destroy_chain = PythonFunction("_PyTrash_thread_destroy_chain");
		_PyTuple_DebugMallocStats = PythonFunction("_PyTuple_DebugMallocStats");
		_PyTuple_MaybeUntrack = PythonFunction("_PyTuple_MaybeUntrack");
		_PyTuple_Resize = PythonFunction("_PyTuple_Resize");
		_PyType_CalculateMetaclass = PythonFunction("_PyType_CalculateMetaclass");
		_PyType_Fini = PythonFunction("_PyType_Fini");
		_PyType_GetDocFromInternalDoc = PythonFunction("_PyType_GetDocFromInternalDoc");
		_PyType_GetTextSignatureFromInternalDoc = PythonFunction("_PyType_GetTextSignatureFromInternalDoc");
		_PyType_Lookup = PythonFunction("_PyType_Lookup");
		_PyType_LookupId = PythonFunction("_PyType_LookupId");
		_PyType_Name = PythonFunction("_PyType_Name");
		_PyUnicode_AsASCIIString = PythonFunction("_PyUnicode_AsASCIIString");
		_PyUnicode_AsKind = PythonFunction("_PyUnicode_AsKind");
		_PyUnicode_AsLatin1String = PythonFunction("_PyUnicode_AsLatin1String");
		_PyUnicode_AsUnicode = PythonFunction("_PyUnicode_AsUnicode");
		_PyUnicode_AsUTF8String = PythonFunction("_PyUnicode_AsUTF8String");
		_PyUnicode_ClearStaticStrings = PythonFunction("_PyUnicode_ClearStaticStrings");
		_PyUnicode_Copy = PythonFunction("_PyUnicode_Copy");
		_PyUnicode_DecodeUnicodeEscape = PythonFunction("_PyUnicode_DecodeUnicodeEscape");
		_PyUnicode_EncodeCharmap = PythonFunction("_PyUnicode_EncodeCharmap");
		_PyUnicode_EncodeUTF16 = PythonFunction("_PyUnicode_EncodeUTF16");
		_PyUnicode_EncodeUTF32 = PythonFunction("_PyUnicode_EncodeUTF32");
		_PyUnicode_EncodeUTF7 = PythonFunction("_PyUnicode_EncodeUTF7");
		_PyUnicode_EQ = PythonFunction("_PyUnicode_EQ");
		_PyUnicode_EqualToASCIIId = PythonFunction("_PyUnicode_EqualToASCIIId");
		_PyUnicode_EqualToASCIIString = PythonFunction("_PyUnicode_EqualToASCIIString");
		_PyUnicode_FastCopyCharacters = PythonFunction("_PyUnicode_FastCopyCharacters");
		_PyUnicode_FastFill = PythonFunction("_PyUnicode_FastFill");
		_PyUnicode_FindMaxChar = PythonFunction("_PyUnicode_FindMaxChar");
		_PyUnicode_FormatAdvancedWriter = PythonFunction("_PyUnicode_FormatAdvancedWriter");
		_PyUnicode_FormatLong = PythonFunction("_PyUnicode_FormatLong");
		_PyUnicode_FromASCII = PythonFunction("_PyUnicode_FromASCII");
		_PyUnicode_FromId = PythonFunction("_PyUnicode_FromId");
		_PyUnicode_InsertThousandsGrouping = PythonFunction("_PyUnicode_InsertThousandsGrouping");
		_PyUnicode_IsAlpha = PythonFunction("_PyUnicode_IsAlpha");
		_PyUnicode_IsCased = PythonFunction("_PyUnicode_IsCased");
		_PyUnicode_IsCaseIgnorable = PythonFunction("_PyUnicode_IsCaseIgnorable");
		_PyUnicode_IsDecimalDigit = PythonFunction("_PyUnicode_IsDecimalDigit");
		_PyUnicode_IsDigit = PythonFunction("_PyUnicode_IsDigit");
		_PyUnicode_IsLinebreak = PythonFunction("_PyUnicode_IsLinebreak");
		_PyUnicode_IsLowercase = PythonFunction("_PyUnicode_IsLowercase");
		_PyUnicode_IsNumeric = PythonFunction("_PyUnicode_IsNumeric");
		_PyUnicode_IsPrintable = PythonFunction("_PyUnicode_IsPrintable");
		_PyUnicode_IsTitlecase = PythonFunction("_PyUnicode_IsTitlecase");
		_PyUnicode_IsUppercase = PythonFunction("_PyUnicode_IsUppercase");
		_PyUnicode_IsWhitespace = PythonFunction("_PyUnicode_IsWhitespace");
		_PyUnicode_IsXidContinue = PythonFunction("_PyUnicode_IsXidContinue");
		_PyUnicode_IsXidStart = PythonFunction("_PyUnicode_IsXidStart");
		_PyUnicode_JoinArray = PythonFunction("_PyUnicode_JoinArray");
		_PyUnicode_Ready = PythonFunction("_PyUnicode_Ready");
		_PyUnicode_ToDecimalDigit = PythonFunction("_PyUnicode_ToDecimalDigit");
		_PyUnicode_ToDigit = PythonFunction("_PyUnicode_ToDigit");
		_PyUnicode_ToFoldedFull = PythonFunction("_PyUnicode_ToFoldedFull");
		_PyUnicode_ToLowercase = PythonFunction("_PyUnicode_ToLowercase");
		_PyUnicode_ToLowerFull = PythonFunction("_PyUnicode_ToLowerFull");
		_PyUnicode_ToNumeric = PythonFunction("_PyUnicode_ToNumeric");
		_PyUnicode_ToTitlecase = PythonFunction("_PyUnicode_ToTitlecase");
		_PyUnicode_ToTitleFull = PythonFunction("_PyUnicode_ToTitleFull");
		_PyUnicode_ToUppercase = PythonFunction("_PyUnicode_ToUppercase");
		_PyUnicode_ToUpperFull = PythonFunction("_PyUnicode_ToUpperFull");
		_PyUnicode_TransformDecimalAndSpaceToASCII = PythonFunction("_PyUnicode_TransformDecimalAndSpaceToASCII");
		_PyUnicode_XStrip = PythonFunction("_PyUnicode_XStrip");
		_PyUnicodeTranslateError_Create = PythonFunction("_PyUnicodeTranslateError_Create");
		_PyUnicodeWriter_Dealloc = PythonFunction("_PyUnicodeWriter_Dealloc");
		_PyUnicodeWriter_Finish = PythonFunction("_PyUnicodeWriter_Finish");
		_PyUnicodeWriter_Init = PythonFunction("_PyUnicodeWriter_Init");
		_PyUnicodeWriter_PrepareInternal = PythonFunction("_PyUnicodeWriter_PrepareInternal");
		_PyUnicodeWriter_PrepareKindInternal = PythonFunction("_PyUnicodeWriter_PrepareKindInternal");
		_PyUnicodeWriter_WriteASCIIString = PythonFunction("_PyUnicodeWriter_WriteASCIIString");
		_PyUnicodeWriter_WriteChar = PythonFunction("_PyUnicodeWriter_WriteChar");
		_PyUnicodeWriter_WriteLatin1String = PythonFunction("_PyUnicodeWriter_WriteLatin1String");
		_PyUnicodeWriter_WriteStr = PythonFunction("_PyUnicodeWriter_WriteStr");
		_PyUnicodeWriter_WriteSubstring = PythonFunction("_PyUnicodeWriter_WriteSubstring");
		_PyWarnings_Init = PythonFunction("_PyWarnings_Init");
		_PyWeakref_CallableProxyType = PythonFunction("_PyWeakref_CallableProxyType");
		_PyWeakref_ClearRef = PythonFunction("_PyWeakref_ClearRef");
		_PyWeakref_GetWeakrefCount = PythonFunction("_PyWeakref_GetWeakrefCount");
		_PyWeakref_ProxyType = PythonFunction("_PyWeakref_ProxyType");
		_PyWeakref_RefType = PythonFunction("_PyWeakref_RefType");
		_PyWindowsConsoleIO_Type = PythonFunction("_PyWindowsConsoleIO_Type");
		Py_AddPendingCall = PythonFunction("Py_AddPendingCall");
		Py_AtExit = PythonFunction("Py_AtExit");
		Py_BuildValue = PythonFunction("Py_BuildValue");
		Py_BytesWarningFlag = PythonFunction("Py_BytesWarningFlag");
		Py_CompileString = PythonFunction("Py_CompileString");
		Py_CompileStringExFlags = PythonFunction("Py_CompileStringExFlags");
		Py_CompileStringFlags = PythonFunction("Py_CompileStringFlags");
		Py_CompileStringObject = PythonFunction("Py_CompileStringObject");
		Py_DebugFlag = PythonFunction("Py_DebugFlag");
		Py_DecodeLocale = PythonFunction("Py_DecodeLocale");
		Py_DecRef = PythonFunction("Py_DecRef");
		Py_DontWriteBytecodeFlag = PythonFunction("Py_DontWriteBytecodeFlag");
		Py_EncodeLocale = PythonFunction("Py_EncodeLocale");
		Py_EndInterpreter = PythonFunction("Py_EndInterpreter");
		Py_Exit = PythonFunction("Py_Exit");
		Py_FatalError = PythonFunction("Py_FatalError");
		Py_FdIsInteractive = PythonFunction("Py_FdIsInteractive");
		Py_FileSystemDefaultEncodeErrors = PythonFunction("Py_FileSystemDefaultEncodeErrors");
		Py_FileSystemDefaultEncoding = PythonFunction("Py_FileSystemDefaultEncoding");
		Py_Finalize = PythonFunction("Py_Finalize");
		Py_FinalizeEx = PythonFunction("Py_FinalizeEx");
		Py_FrozenFlag = PythonFunction("Py_FrozenFlag");
		Py_GetBuildInfo = PythonFunction("Py_GetBuildInfo");
		Py_GetCompiler = PythonFunction("Py_GetCompiler");
		Py_GetCopyright = PythonFunction("Py_GetCopyright");
		Py_GetExecPrefix = PythonFunction("Py_GetExecPrefix");
		Py_GetPath = PythonFunction("Py_GetPath");
		Py_GetPlatform = PythonFunction("Py_GetPlatform");
		Py_GetPrefix = PythonFunction("Py_GetPrefix");
		Py_GetProgramFullPath = PythonFunction("Py_GetProgramFullPath");
		Py_GetProgramName = PythonFunction("Py_GetProgramName");
		Py_GetPythonHome = PythonFunction("Py_GetPythonHome");
		Py_GetRecursionLimit = PythonFunction("Py_GetRecursionLimit");
		Py_GetVersion = PythonFunction("Py_GetVersion");
		Py_HasFileSystemDefaultEncoding = PythonFunction("Py_HasFileSystemDefaultEncoding");
		Py_HashRandomizationFlag = PythonFunction("Py_HashRandomizationFlag");
		Py_hexdigits = PythonFunction("Py_hexdigits");
		Py_IgnoreEnvironmentFlag = PythonFunction("Py_IgnoreEnvironmentFlag");
		Py_IncRef = PythonFunction("Py_IncRef");
		Py_Initialize = PythonFunction("Py_Initialize");
		Py_InitializeEx = PythonFunction("Py_InitializeEx");
		Py_InspectFlag = PythonFunction("Py_InspectFlag");
		Py_InteractiveFlag = PythonFunction("Py_InteractiveFlag");
		Py_IsInitialized = PythonFunction("Py_IsInitialized");
		Py_IsolatedFlag = PythonFunction("Py_IsolatedFlag");
		Py_LegacyWindowsFSEncodingFlag = PythonFunction("Py_LegacyWindowsFSEncodingFlag");
		Py_LegacyWindowsStdioFlag = PythonFunction("Py_LegacyWindowsStdioFlag");
		Py_Main = PythonFunction("Py_Main");
		Py_MakePendingCalls = PythonFunction("Py_MakePendingCalls");
		Py_NewInterpreter = PythonFunction("Py_NewInterpreter");
		Py_NoSiteFlag = PythonFunction("Py_NoSiteFlag");
		Py_NoUserSiteDirectory = PythonFunction("Py_NoUserSiteDirectory");
		Py_OptimizeFlag = PythonFunction("Py_OptimizeFlag");
		Py_QuietFlag = PythonFunction("Py_QuietFlag");
		Py_ReprEnter = PythonFunction("Py_ReprEnter");
		Py_ReprLeave = PythonFunction("Py_ReprLeave");
		Py_SetPath = PythonFunction("Py_SetPath");
		Py_SetProgramName = PythonFunction("Py_SetProgramName");
		Py_SetPythonHome = PythonFunction("Py_SetPythonHome");
		Py_SetRecursionLimit = PythonFunction("Py_SetRecursionLimit");
		Py_SetStandardStreamEncoding = PythonFunction("Py_SetStandardStreamEncoding");
		Py_SymtableString = PythonFunction("Py_SymtableString");
		Py_SymtableStringObject = PythonFunction("Py_SymtableStringObject");
		Py_UnbufferedStdioFlag = PythonFunction("Py_UnbufferedStdioFlag");
		Py_UNICODE_strcat = PythonFunction("Py_UNICODE_strcat");
		Py_UNICODE_strchr = PythonFunction("Py_UNICODE_strchr");
		Py_UNICODE_strcmp = PythonFunction("Py_UNICODE_strcmp");
		Py_UNICODE_strcpy = PythonFunction("Py_UNICODE_strcpy");
		Py_UNICODE_strlen = PythonFunction("Py_UNICODE_strlen");
		Py_UNICODE_strncmp = PythonFunction("Py_UNICODE_strncmp");
		Py_UNICODE_strncpy = PythonFunction("Py_UNICODE_strncpy");
		Py_UNICODE_strrchr = PythonFunction("Py_UNICODE_strrchr");
		Py_UniversalNewlineFgets = PythonFunction("Py_UniversalNewlineFgets");
		Py_UTF8Mode = PythonFunction("Py_UTF8Mode");
		Py_VaBuildValue = PythonFunction("Py_VaBuildValue");
		Py_VerboseFlag = PythonFunction("Py_VerboseFlag");
		PyArena_AddPyObject = PythonFunction("PyArena_AddPyObject");
		PyArena_Free = PythonFunction("PyArena_Free");
		PyArena_Malloc = PythonFunction("PyArena_Malloc");
		PyArena_New = PythonFunction("PyArena_New");
		PyArg_Parse = PythonFunction("PyArg_Parse");
		PyArg_ParseTuple = PythonFunction("PyArg_ParseTuple");
		PyArg_ParseTupleAndKeywords = PythonFunction("PyArg_ParseTupleAndKeywords");
		PyArg_UnpackTuple = PythonFunction("PyArg_UnpackTuple");
		PyArg_ValidateKeywordArguments = PythonFunction("PyArg_ValidateKeywordArguments");
		PyArg_VaParse = PythonFunction("PyArg_VaParse");
		PyArg_VaParseTupleAndKeywords = PythonFunction("PyArg_VaParseTupleAndKeywords");
		PyAST_Compile = PythonFunction("PyAST_Compile");
		PyAST_CompileEx = PythonFunction("PyAST_CompileEx");
		PyAST_CompileObject = PythonFunction("PyAST_CompileObject");
		PyAST_FromNode = PythonFunction("PyAST_FromNode");
		PyAST_FromNodeObject = PythonFunction("PyAST_FromNodeObject");
		PyAST_Validate = PythonFunction("PyAST_Validate");
		PyAsyncGen_Fini = PythonFunction("PyAsyncGen_Fini");
		PyAsyncGen_New = PythonFunction("PyAsyncGen_New");
		PyAsyncGen_Type = PythonFunction("PyAsyncGen_Type");
		PyBaseObject_Type = PythonFunction("PyBaseObject_Type");
		PyBool_FromLong = PythonFunction("PyBool_FromLong");
		PyBool_Type = PythonFunction("PyBool_Type");
		PyBuffer_FillContiguousStrides = PythonFunction("PyBuffer_FillContiguousStrides");
		PyBuffer_FillInfo = PythonFunction("PyBuffer_FillInfo");
		PyBuffer_FromContiguous = PythonFunction("PyBuffer_FromContiguous");
		PyBuffer_GetPointer = PythonFunction("PyBuffer_GetPointer");
		PyBuffer_IsContiguous = PythonFunction("PyBuffer_IsContiguous");
		PyBuffer_Release = PythonFunction("PyBuffer_Release");
		PyBuffer_ToContiguous = PythonFunction("PyBuffer_ToContiguous");
		PyByteArray_AsString = PythonFunction("PyByteArray_AsString");
		PyByteArray_Concat = PythonFunction("PyByteArray_Concat");
		PyByteArray_Fini = PythonFunction("PyByteArray_Fini");
		PyByteArray_FromObject = PythonFunction("PyByteArray_FromObject");
		PyByteArray_FromStringAndSize = PythonFunction("PyByteArray_FromStringAndSize");
		PyByteArray_Init = PythonFunction("PyByteArray_Init");
		PyByteArray_Resize = PythonFunction("PyByteArray_Resize");
		PyByteArray_Size = PythonFunction("PyByteArray_Size");
		PyByteArray_Type = PythonFunction("PyByteArray_Type");
		PyByteArrayIter_Type = PythonFunction("PyByteArrayIter_Type");
		PyBytes_AsString = PythonFunction("PyBytes_AsString");
		PyBytes_AsStringAndSize = PythonFunction("PyBytes_AsStringAndSize");
		PyBytes_Concat = PythonFunction("PyBytes_Concat");
		PyBytes_ConcatAndDel = PythonFunction("PyBytes_ConcatAndDel");
		PyBytes_DecodeEscape = PythonFunction("PyBytes_DecodeEscape");
		PyBytes_Fini = PythonFunction("PyBytes_Fini");
		PyBytes_FromFormat = PythonFunction("PyBytes_FromFormat");
		PyBytes_FromFormatV = PythonFunction("PyBytes_FromFormatV");
		PyBytes_FromObject = PythonFunction("PyBytes_FromObject");
		PyBytes_FromString = PythonFunction("PyBytes_FromString");
		PyBytes_FromStringAndSize = PythonFunction("PyBytes_FromStringAndSize");
		PyBytes_Repr = PythonFunction("PyBytes_Repr");
		PyBytes_Size = PythonFunction("PyBytes_Size");
		PyBytes_Type = PythonFunction("PyBytes_Type");
		PyBytesIter_Type = PythonFunction("PyBytesIter_Type");
		PyCallable_Check = PythonFunction("PyCallable_Check");
		PyCallIter_New = PythonFunction("PyCallIter_New");
		PyCallIter_Type = PythonFunction("PyCallIter_Type");
		PyCapsule_GetContext = PythonFunction("PyCapsule_GetContext");
		PyCapsule_GetDestructor = PythonFunction("PyCapsule_GetDestructor");
		PyCapsule_GetName = PythonFunction("PyCapsule_GetName");
		PyCapsule_GetPointer = PythonFunction("PyCapsule_GetPointer");
		PyCapsule_Import = PythonFunction("PyCapsule_Import");
		PyCapsule_IsValid = PythonFunction("PyCapsule_IsValid");
		PyCapsule_New = PythonFunction("PyCapsule_New");
		PyCapsule_SetContext = PythonFunction("PyCapsule_SetContext");
		PyCapsule_SetDestructor = PythonFunction("PyCapsule_SetDestructor");
		PyCapsule_SetName = PythonFunction("PyCapsule_SetName");
		PyCapsule_SetPointer = PythonFunction("PyCapsule_SetPointer");
		PyCapsule_Type = PythonFunction("PyCapsule_Type");
		PyCell_Get = PythonFunction("PyCell_Get");
		PyCell_New = PythonFunction("PyCell_New");
		PyCell_Set = PythonFunction("PyCell_Set");
		PyCell_Type = PythonFunction("PyCell_Type");
		PyCFunction_Call = PythonFunction("PyCFunction_Call");
		PyCFunction_ClearFreeList = PythonFunction("PyCFunction_ClearFreeList");
		PyCFunction_Fini = PythonFunction("PyCFunction_Fini");
		PyCFunction_GetFlags = PythonFunction("PyCFunction_GetFlags");
		PyCFunction_GetFunction = PythonFunction("PyCFunction_GetFunction");
		PyCFunction_GetSelf = PythonFunction("PyCFunction_GetSelf");
		PyCFunction_New = PythonFunction("PyCFunction_New");
		PyCFunction_NewEx = PythonFunction("PyCFunction_NewEx");
		PyCFunction_Type = PythonFunction("PyCFunction_Type");
		PyClassMethod_New = PythonFunction("PyClassMethod_New");
		PyClassMethod_Type = PythonFunction("PyClassMethod_Type");
		PyClassMethodDescr_Type = PythonFunction("PyClassMethodDescr_Type");
		PyCode_Addr2Line = PythonFunction("PyCode_Addr2Line");
		PyCode_New = PythonFunction("PyCode_New");
		PyCode_NewEmpty = PythonFunction("PyCode_NewEmpty");
		PyCode_Optimize = PythonFunction("PyCode_Optimize");
		PyCode_Type = PythonFunction("PyCode_Type");
		PyCodec_BackslashReplaceErrors = PythonFunction("PyCodec_BackslashReplaceErrors");
		PyCodec_Decode = PythonFunction("PyCodec_Decode");
		PyCodec_Decoder = PythonFunction("PyCodec_Decoder");
		PyCodec_Encode = PythonFunction("PyCodec_Encode");
		PyCodec_Encoder = PythonFunction("PyCodec_Encoder");
		PyCodec_IgnoreErrors = PythonFunction("PyCodec_IgnoreErrors");
		PyCodec_IncrementalDecoder = PythonFunction("PyCodec_IncrementalDecoder");
		PyCodec_IncrementalEncoder = PythonFunction("PyCodec_IncrementalEncoder");
		PyCodec_KnownEncoding = PythonFunction("PyCodec_KnownEncoding");
		PyCodec_LookupError = PythonFunction("PyCodec_LookupError");
		PyCodec_NameReplaceErrors = PythonFunction("PyCodec_NameReplaceErrors");
		PyCodec_Register = PythonFunction("PyCodec_Register");
		PyCodec_RegisterError = PythonFunction("PyCodec_RegisterError");
		PyCodec_ReplaceErrors = PythonFunction("PyCodec_ReplaceErrors");
		PyCodec_StreamReader = PythonFunction("PyCodec_StreamReader");
		PyCodec_StreamWriter = PythonFunction("PyCodec_StreamWriter");
		PyCodec_StrictErrors = PythonFunction("PyCodec_StrictErrors");
		PyCodec_XMLCharRefReplaceErrors = PythonFunction("PyCodec_XMLCharRefReplaceErrors");
		PyCompile_OpcodeStackEffect = PythonFunction("PyCompile_OpcodeStackEffect");
		PyComplex_AsCComplex = PythonFunction("PyComplex_AsCComplex");
		PyComplex_FromCComplex = PythonFunction("PyComplex_FromCComplex");
		PyComplex_FromDoubles = PythonFunction("PyComplex_FromDoubles");
		PyComplex_ImagAsDouble = PythonFunction("PyComplex_ImagAsDouble");
		PyComplex_RealAsDouble = PythonFunction("PyComplex_RealAsDouble");
		PyComplex_Type = PythonFunction("PyComplex_Type");
		PyContext_ClearFreeList = PythonFunction("PyContext_ClearFreeList");
		PyContext_Copy = PythonFunction("PyContext_Copy");
		PyContext_CopyCurrent = PythonFunction("PyContext_CopyCurrent");
		PyContext_Enter = PythonFunction("PyContext_Enter");
		PyContext_Exit = PythonFunction("PyContext_Exit");
		PyContext_New = PythonFunction("PyContext_New");
		PyContext_Type = PythonFunction("PyContext_Type");
		PyContextToken_Type = PythonFunction("PyContextToken_Type");
		PyContextVar_Get = PythonFunction("PyContextVar_Get");
		PyContextVar_New = PythonFunction("PyContextVar_New");
		PyContextVar_Reset = PythonFunction("PyContextVar_Reset");
		PyContextVar_Set = PythonFunction("PyContextVar_Set");
		PyContextVar_Type = PythonFunction("PyContextVar_Type");
		PyCoro_New = PythonFunction("PyCoro_New");
		PyCoro_Type = PythonFunction("PyCoro_Type");
		PyDescr_NewClassMethod = PythonFunction("PyDescr_NewClassMethod");
		PyDescr_NewGetSet = PythonFunction("PyDescr_NewGetSet");
		PyDescr_NewMember = PythonFunction("PyDescr_NewMember");
		PyDescr_NewMethod = PythonFunction("PyDescr_NewMethod");
		PyDescr_NewWrapper = PythonFunction("PyDescr_NewWrapper");
		PyDict_Clear = PythonFunction("PyDict_Clear");
		PyDict_ClearFreeList = PythonFunction("PyDict_ClearFreeList");
		PyDict_Contains = PythonFunction("PyDict_Contains");
		PyDict_Copy = PythonFunction("PyDict_Copy");
		PyDict_DelItem = PythonFunction("PyDict_DelItem");
		PyDict_DelItemString = PythonFunction("PyDict_DelItemString");
		PyDict_Fini = PythonFunction("PyDict_Fini");
		PyDict_GetItem = PythonFunction("PyDict_GetItem");
		PyDict_GetItemString = PythonFunction("PyDict_GetItemString");
		PyDict_GetItemWithError = PythonFunction("PyDict_GetItemWithError");
		PyDict_Items = PythonFunction("PyDict_Items");
		PyDict_Keys = PythonFunction("PyDict_Keys");
		PyDict_Merge = PythonFunction("PyDict_Merge");
		PyDict_MergeFromSeq2 = PythonFunction("PyDict_MergeFromSeq2");
		PyDict_New = PythonFunction("PyDict_New");
		PyDict_Next = PythonFunction("PyDict_Next");
		PyDict_SetDefault = PythonFunction("PyDict_SetDefault");
		PyDict_SetItem = PythonFunction("PyDict_SetItem");
		PyDict_SetItemString = PythonFunction("PyDict_SetItemString");
		PyDict_Size = PythonFunction("PyDict_Size");
		PyDict_Type = PythonFunction("PyDict_Type");
		PyDict_Update = PythonFunction("PyDict_Update");
		PyDict_Values = PythonFunction("PyDict_Values");
		PyDictItems_Type = PythonFunction("PyDictItems_Type");
		PyDictIterItem_Type = PythonFunction("PyDictIterItem_Type");
		PyDictIterKey_Type = PythonFunction("PyDictIterKey_Type");
		PyDictIterValue_Type = PythonFunction("PyDictIterValue_Type");
		PyDictKeys_Type = PythonFunction("PyDictKeys_Type");
		PyDictProxy_New = PythonFunction("PyDictProxy_New");
		PyDictProxy_Type = PythonFunction("PyDictProxy_Type");
		PyDictValues_Type = PythonFunction("PyDictValues_Type");
		PyEllipsis_Type = PythonFunction("PyEllipsis_Type");
		PyEnum_Type = PythonFunction("PyEnum_Type");
		PyErr_BadArgument = PythonFunction("PyErr_BadArgument");
		PyErr_BadInternalCall = PythonFunction("PyErr_BadInternalCall");
		PyErr_CheckSignals = PythonFunction("PyErr_CheckSignals");
		PyErr_Clear = PythonFunction("PyErr_Clear");
		PyErr_Display = PythonFunction("PyErr_Display");
		PyErr_ExceptionMatches = PythonFunction("PyErr_ExceptionMatches");
		PyErr_Fetch = PythonFunction("PyErr_Fetch");
		PyErr_Format = PythonFunction("PyErr_Format");
		PyErr_FormatV = PythonFunction("PyErr_FormatV");
		PyErr_GetExcInfo = PythonFunction("PyErr_GetExcInfo");
		PyErr_GivenExceptionMatches = PythonFunction("PyErr_GivenExceptionMatches");
		PyErr_NewException = PythonFunction("PyErr_NewException");
		PyErr_NewExceptionWithDoc = PythonFunction("PyErr_NewExceptionWithDoc");
		PyErr_NoMemory = PythonFunction("PyErr_NoMemory");
		PyErr_NormalizeException = PythonFunction("PyErr_NormalizeException");
		PyErr_Occurred = PythonFunction("PyErr_Occurred");
		PyErr_Print = PythonFunction("PyErr_Print");
		PyErr_PrintEx = PythonFunction("PyErr_PrintEx");
		PyErr_ProgramText = PythonFunction("PyErr_ProgramText");
		PyErr_ProgramTextObject = PythonFunction("PyErr_ProgramTextObject");
		PyErr_ResourceWarning = PythonFunction("PyErr_ResourceWarning");
		PyErr_Restore = PythonFunction("PyErr_Restore");
		PyErr_SetExcFromWindowsErr = PythonFunction("PyErr_SetExcFromWindowsErr");
		PyErr_SetExcFromWindowsErrWithFilename = PythonFunction("PyErr_SetExcFromWindowsErrWithFilename");
		PyErr_SetExcFromWindowsErrWithFilenameObject = PythonFunction("PyErr_SetExcFromWindowsErrWithFilenameObject");
		PyErr_SetExcFromWindowsErrWithFilenameObjects = PythonFunction("PyErr_SetExcFromWindowsErrWithFilenameObjects");
		PyErr_SetExcFromWindowsErrWithUnicodeFilename = PythonFunction("PyErr_SetExcFromWindowsErrWithUnicodeFilename");
		PyErr_SetExcInfo = PythonFunction("PyErr_SetExcInfo");
		PyErr_SetFromErrno = PythonFunction("PyErr_SetFromErrno");
		PyErr_SetFromErrnoWithFilename = PythonFunction("PyErr_SetFromErrnoWithFilename");
		PyErr_SetFromErrnoWithFilenameObject = PythonFunction("PyErr_SetFromErrnoWithFilenameObject");
		PyErr_SetFromErrnoWithFilenameObjects = PythonFunction("PyErr_SetFromErrnoWithFilenameObjects");
		PyErr_SetFromErrnoWithUnicodeFilename = PythonFunction("PyErr_SetFromErrnoWithUnicodeFilename");
		PyErr_SetFromWindowsErr = PythonFunction("PyErr_SetFromWindowsErr");
		PyErr_SetFromWindowsErrWithFilename = PythonFunction("PyErr_SetFromWindowsErrWithFilename");
		PyErr_SetFromWindowsErrWithUnicodeFilename = PythonFunction("PyErr_SetFromWindowsErrWithUnicodeFilename");
		PyErr_SetImportError = PythonFunction("PyErr_SetImportError");
		PyErr_SetImportErrorSubclass = PythonFunction("PyErr_SetImportErrorSubclass");
		PyErr_SetInterrupt = PythonFunction("PyErr_SetInterrupt");
		PyErr_SetNone = PythonFunction("PyErr_SetNone");
		PyErr_SetObject = PythonFunction("PyErr_SetObject");
		PyErr_SetString = PythonFunction("PyErr_SetString");
		PyErr_SyntaxLocation = PythonFunction("PyErr_SyntaxLocation");
		PyErr_SyntaxLocationEx = PythonFunction("PyErr_SyntaxLocationEx");
		PyErr_SyntaxLocationObject = PythonFunction("PyErr_SyntaxLocationObject");
		PyErr_Warn = PythonFunction("PyErr_Warn");
		PyErr_WarnEx = PythonFunction("PyErr_WarnEx");
		PyErr_WarnExplicit = PythonFunction("PyErr_WarnExplicit");
		PyErr_WarnExplicitFormat = PythonFunction("PyErr_WarnExplicitFormat");
		PyErr_WarnExplicitObject = PythonFunction("PyErr_WarnExplicitObject");
		PyErr_WarnFormat = PythonFunction("PyErr_WarnFormat");
		PyErr_WriteUnraisable = PythonFunction("PyErr_WriteUnraisable");
		PyEval_AcquireLock = PythonFunction("PyEval_AcquireLock");
		PyEval_AcquireThread = PythonFunction("PyEval_AcquireThread");
		PyEval_CallFunction = PythonFunction("PyEval_CallFunction");
		PyEval_CallMethod = PythonFunction("PyEval_CallMethod");
		PyEval_CallObjectWithKeywords = PythonFunction("PyEval_CallObjectWithKeywords");
		PyEval_EvalCode = PythonFunction("PyEval_EvalCode");
		PyEval_EvalCodeEx = PythonFunction("PyEval_EvalCodeEx");
		PyEval_EvalFrame = PythonFunction("PyEval_EvalFrame");
		PyEval_EvalFrameEx = PythonFunction("PyEval_EvalFrameEx");
		PyEval_GetBuiltins = PythonFunction("PyEval_GetBuiltins");
		PyEval_GetFrame = PythonFunction("PyEval_GetFrame");
		PyEval_GetFuncDesc = PythonFunction("PyEval_GetFuncDesc");
		PyEval_GetFuncName = PythonFunction("PyEval_GetFuncName");
		PyEval_GetGlobals = PythonFunction("PyEval_GetGlobals");
		PyEval_GetLocals = PythonFunction("PyEval_GetLocals");
		PyEval_InitThreads = PythonFunction("PyEval_InitThreads");
		PyEval_MergeCompilerFlags = PythonFunction("PyEval_MergeCompilerFlags");
		PyEval_ReInitThreads = PythonFunction("PyEval_ReInitThreads");
		PyEval_ReleaseLock = PythonFunction("PyEval_ReleaseLock");
		PyEval_ReleaseThread = PythonFunction("PyEval_ReleaseThread");
		PyEval_RestoreThread = PythonFunction("PyEval_RestoreThread");
		PyEval_SaveThread = PythonFunction("PyEval_SaveThread");
		PyEval_SetProfile = PythonFunction("PyEval_SetProfile");
		PyEval_SetTrace = PythonFunction("PyEval_SetTrace");
		PyEval_ThreadsInitialized = PythonFunction("PyEval_ThreadsInitialized");
		PyExc_ArithmeticError = PythonFunction("PyExc_ArithmeticError");
		PyExc_AssertionError = PythonFunction("PyExc_AssertionError");
		PyExc_AttributeError = PythonFunction("PyExc_AttributeError");
		PyExc_BaseException = PythonFunction("PyExc_BaseException");
		PyExc_BlockingIOError = PythonFunction("PyExc_BlockingIOError");
		PyExc_BrokenPipeError = PythonFunction("PyExc_BrokenPipeError");
		PyExc_BufferError = PythonFunction("PyExc_BufferError");
		PyExc_BytesWarning = PythonFunction("PyExc_BytesWarning");
		PyExc_ChildProcessError = PythonFunction("PyExc_ChildProcessError");
		PyExc_ConnectionAbortedError = PythonFunction("PyExc_ConnectionAbortedError");
		PyExc_ConnectionError = PythonFunction("PyExc_ConnectionError");
		PyExc_ConnectionRefusedError = PythonFunction("PyExc_ConnectionRefusedError");
		PyExc_ConnectionResetError = PythonFunction("PyExc_ConnectionResetError");
		PyExc_DeprecationWarning = PythonFunction("PyExc_DeprecationWarning");
		PyExc_EnvironmentError = PythonFunction("PyExc_EnvironmentError");
		PyExc_EOFError = PythonFunction("PyExc_EOFError");
		PyExc_Exception = PythonFunction("PyExc_Exception");
		PyExc_FileExistsError = PythonFunction("PyExc_FileExistsError");
		PyExc_FileNotFoundError = PythonFunction("PyExc_FileNotFoundError");
		PyExc_FloatingPointError = PythonFunction("PyExc_FloatingPointError");
		PyExc_FutureWarning = PythonFunction("PyExc_FutureWarning");
		PyExc_GeneratorExit = PythonFunction("PyExc_GeneratorExit");
		PyExc_ImportError = PythonFunction("PyExc_ImportError");
		PyExc_ImportWarning = PythonFunction("PyExc_ImportWarning");
		PyExc_IndentationError = PythonFunction("PyExc_IndentationError");
		PyExc_IndexError = PythonFunction("PyExc_IndexError");
		PyExc_InterruptedError = PythonFunction("PyExc_InterruptedError");
		PyExc_IOError = PythonFunction("PyExc_IOError");
		PyExc_IsADirectoryError = PythonFunction("PyExc_IsADirectoryError");
		PyExc_KeyboardInterrupt = PythonFunction("PyExc_KeyboardInterrupt");
		PyExc_KeyError = PythonFunction("PyExc_KeyError");
		PyExc_LookupError = PythonFunction("PyExc_LookupError");
		PyExc_MemoryError = PythonFunction("PyExc_MemoryError");
		PyExc_ModuleNotFoundError = PythonFunction("PyExc_ModuleNotFoundError");
		PyExc_NameError = PythonFunction("PyExc_NameError");
		PyExc_NotADirectoryError = PythonFunction("PyExc_NotADirectoryError");
		PyExc_NotImplementedError = PythonFunction("PyExc_NotImplementedError");
		PyExc_OSError = PythonFunction("PyExc_OSError");
		PyExc_OverflowError = PythonFunction("PyExc_OverflowError");
		PyExc_PendingDeprecationWarning = PythonFunction("PyExc_PendingDeprecationWarning");
		PyExc_PermissionError = PythonFunction("PyExc_PermissionError");
		PyExc_ProcessLookupError = PythonFunction("PyExc_ProcessLookupError");
		PyExc_RecursionError = PythonFunction("PyExc_RecursionError");
		PyExc_ReferenceError = PythonFunction("PyExc_ReferenceError");
		PyExc_ResourceWarning = PythonFunction("PyExc_ResourceWarning");
		PyExc_RuntimeError = PythonFunction("PyExc_RuntimeError");
		PyExc_RuntimeWarning = PythonFunction("PyExc_RuntimeWarning");
		PyExc_StopAsyncIteration = PythonFunction("PyExc_StopAsyncIteration");
		PyExc_StopIteration = PythonFunction("PyExc_StopIteration");
		PyExc_SyntaxError = PythonFunction("PyExc_SyntaxError");
		PyExc_SyntaxWarning = PythonFunction("PyExc_SyntaxWarning");
		PyExc_SystemError = PythonFunction("PyExc_SystemError");
		PyExc_SystemExit = PythonFunction("PyExc_SystemExit");
		PyExc_TabError = PythonFunction("PyExc_TabError");
		PyExc_TimeoutError = PythonFunction("PyExc_TimeoutError");
		PyExc_TypeError = PythonFunction("PyExc_TypeError");
		PyExc_UnboundLocalError = PythonFunction("PyExc_UnboundLocalError");
		PyExc_UnicodeDecodeError = PythonFunction("PyExc_UnicodeDecodeError");
		PyExc_UnicodeEncodeError = PythonFunction("PyExc_UnicodeEncodeError");
		PyExc_UnicodeError = PythonFunction("PyExc_UnicodeError");
		PyExc_UnicodeTranslateError = PythonFunction("PyExc_UnicodeTranslateError");
		PyExc_UnicodeWarning = PythonFunction("PyExc_UnicodeWarning");
		PyExc_UserWarning = PythonFunction("PyExc_UserWarning");
		PyExc_ValueError = PythonFunction("PyExc_ValueError");
		PyExc_Warning = PythonFunction("PyExc_Warning");
		PyExc_WindowsError = PythonFunction("PyExc_WindowsError");
		PyExc_ZeroDivisionError = PythonFunction("PyExc_ZeroDivisionError");
		PyException_GetCause = PythonFunction("PyException_GetCause");
		PyException_GetContext = PythonFunction("PyException_GetContext");
		PyException_GetTraceback = PythonFunction("PyException_GetTraceback");
		PyException_SetCause = PythonFunction("PyException_SetCause");
		PyException_SetContext = PythonFunction("PyException_SetContext");
		PyException_SetTraceback = PythonFunction("PyException_SetTraceback");
		PyFile_FromFd = PythonFunction("PyFile_FromFd");
		PyFile_GetLine = PythonFunction("PyFile_GetLine");
		PyFile_NewStdPrinter = PythonFunction("PyFile_NewStdPrinter");
		PyFile_WriteObject = PythonFunction("PyFile_WriteObject");
		PyFile_WriteString = PythonFunction("PyFile_WriteString");
		PyFilter_Type = PythonFunction("PyFilter_Type");
		PyFloat_AsDouble = PythonFunction("PyFloat_AsDouble");
		PyFloat_ClearFreeList = PythonFunction("PyFloat_ClearFreeList");
		PyFloat_Fini = PythonFunction("PyFloat_Fini");
		PyFloat_FromDouble = PythonFunction("PyFloat_FromDouble");
		PyFloat_FromString = PythonFunction("PyFloat_FromString");
		PyFloat_GetInfo = PythonFunction("PyFloat_GetInfo");
		PyFloat_GetMax = PythonFunction("PyFloat_GetMax");
		PyFloat_GetMin = PythonFunction("PyFloat_GetMin");
		PyFloat_Type = PythonFunction("PyFloat_Type");
		PyFrame_BlockPop = PythonFunction("PyFrame_BlockPop");
		PyFrame_BlockSetup = PythonFunction("PyFrame_BlockSetup");
		PyFrame_ClearFreeList = PythonFunction("PyFrame_ClearFreeList");
		PyFrame_FastToLocals = PythonFunction("PyFrame_FastToLocals");
		PyFrame_FastToLocalsWithError = PythonFunction("PyFrame_FastToLocalsWithError");
		PyFrame_Fini = PythonFunction("PyFrame_Fini");
		PyFrame_GetLineNumber = PythonFunction("PyFrame_GetLineNumber");
		PyFrame_LocalsToFast = PythonFunction("PyFrame_LocalsToFast");
		PyFrame_New = PythonFunction("PyFrame_New");
		PyFrame_Type = PythonFunction("PyFrame_Type");
		PyFrozenSet_New = PythonFunction("PyFrozenSet_New");
		PyFrozenSet_Type = PythonFunction("PyFrozenSet_Type");
		PyFunction_GetAnnotations = PythonFunction("PyFunction_GetAnnotations");
		PyFunction_GetClosure = PythonFunction("PyFunction_GetClosure");
		PyFunction_GetCode = PythonFunction("PyFunction_GetCode");
		PyFunction_GetDefaults = PythonFunction("PyFunction_GetDefaults");
		PyFunction_GetGlobals = PythonFunction("PyFunction_GetGlobals");
		PyFunction_GetKwDefaults = PythonFunction("PyFunction_GetKwDefaults");
		PyFunction_GetModule = PythonFunction("PyFunction_GetModule");
		PyFunction_New = PythonFunction("PyFunction_New");
		PyFunction_NewWithQualName = PythonFunction("PyFunction_NewWithQualName");
		PyFunction_SetAnnotations = PythonFunction("PyFunction_SetAnnotations");
		PyFunction_SetClosure = PythonFunction("PyFunction_SetClosure");
		PyFunction_SetDefaults = PythonFunction("PyFunction_SetDefaults");
		PyFunction_SetKwDefaults = PythonFunction("PyFunction_SetKwDefaults");
		PyFunction_Type = PythonFunction("PyFunction_Type");
		PyFuture_FromAST = PythonFunction("PyFuture_FromAST");
		PyFuture_FromASTObject = PythonFunction("PyFuture_FromASTObject");
		PyGC_Collect = PythonFunction("PyGC_Collect");
		PyGen_NeedsFinalizing = PythonFunction("PyGen_NeedsFinalizing");
		PyGen_New = PythonFunction("PyGen_New");
		PyGen_NewWithQualName = PythonFunction("PyGen_NewWithQualName");
		PyGen_Type = PythonFunction("PyGen_Type");
		PyGetSetDescr_Type = PythonFunction("PyGetSetDescr_Type");
		PyGILState_Check = PythonFunction("PyGILState_Check");
		PyGILState_Ensure = PythonFunction("PyGILState_Ensure");
		PyGILState_GetThisThreadState = PythonFunction("PyGILState_GetThisThreadState");
		PyGILState_Release = PythonFunction("PyGILState_Release");
		PyHash_GetFuncDef = PythonFunction("PyHash_GetFuncDef");
		PyImport_AddModule = PythonFunction("PyImport_AddModule");
		PyImport_AddModuleObject = PythonFunction("PyImport_AddModuleObject");
		PyImport_AppendInittab = PythonFunction("PyImport_AppendInittab");
		PyImport_Cleanup = PythonFunction("PyImport_Cleanup");
		PyImport_ExecCodeModule = PythonFunction("PyImport_ExecCodeModule");
		PyImport_ExecCodeModuleEx = PythonFunction("PyImport_ExecCodeModuleEx");
		PyImport_ExecCodeModuleObject = PythonFunction("PyImport_ExecCodeModuleObject");
		PyImport_ExecCodeModuleWithPathnames = PythonFunction("PyImport_ExecCodeModuleWithPathnames");
		PyImport_ExtendInittab = PythonFunction("PyImport_ExtendInittab");
		PyImport_FrozenModules = PythonFunction("PyImport_FrozenModules");
		PyImport_GetImporter = PythonFunction("PyImport_GetImporter");
		PyImport_GetMagicNumber = PythonFunction("PyImport_GetMagicNumber");
		PyImport_GetMagicTag = PythonFunction("PyImport_GetMagicTag");
		PyImport_GetModule = PythonFunction("PyImport_GetModule");
		PyImport_GetModuleDict = PythonFunction("PyImport_GetModuleDict");
		PyImport_Import = PythonFunction("PyImport_Import");
		PyImport_ImportFrozenModule = PythonFunction("PyImport_ImportFrozenModule");
		PyImport_ImportFrozenModuleObject = PythonFunction("PyImport_ImportFrozenModuleObject");
		PyImport_ImportModule = PythonFunction("PyImport_ImportModule");
		PyImport_ImportModuleLevel = PythonFunction("PyImport_ImportModuleLevel");
		PyImport_ImportModuleLevelObject = PythonFunction("PyImport_ImportModuleLevelObject");
		PyImport_ImportModuleNoBlock = PythonFunction("PyImport_ImportModuleNoBlock");
		PyImport_Inittab = PythonFunction("PyImport_Inittab");
		PyImport_ReloadModule = PythonFunction("PyImport_ReloadModule");
		PyInstanceMethod_Function = PythonFunction("PyInstanceMethod_Function");
		PyInstanceMethod_New = PythonFunction("PyInstanceMethod_New");
		PyInstanceMethod_Type = PythonFunction("PyInstanceMethod_Type");
		PyInterpreterState_Clear = PythonFunction("PyInterpreterState_Clear");
		PyInterpreterState_Delete = PythonFunction("PyInterpreterState_Delete");
		PyInterpreterState_GetID = PythonFunction("PyInterpreterState_GetID");
		PyInterpreterState_Head = PythonFunction("PyInterpreterState_Head");
		PyInterpreterState_Main = PythonFunction("PyInterpreterState_Main");
		PyInterpreterState_New = PythonFunction("PyInterpreterState_New");
		PyInterpreterState_Next = PythonFunction("PyInterpreterState_Next");
		PyInterpreterState_ThreadHead = PythonFunction("PyInterpreterState_ThreadHead");
		PyIter_Next = PythonFunction("PyIter_Next");
		PyList_Append = PythonFunction("PyList_Append");
		PyList_AsTuple = PythonFunction("PyList_AsTuple");
		PyList_ClearFreeList = PythonFunction("PyList_ClearFreeList");
		PyList_Fini = PythonFunction("PyList_Fini");
		PyList_GetItem = PythonFunction("PyList_GetItem");
		PyList_GetSlice = PythonFunction("PyList_GetSlice");
		PyList_Insert = PythonFunction("PyList_Insert");
		PyList_New = PythonFunction("PyList_New");
		PyList_Reverse = PythonFunction("PyList_Reverse");
		PyList_SetItem = PythonFunction("PyList_SetItem");
		PyList_SetSlice = PythonFunction("PyList_SetSlice");
		PyList_Size = PythonFunction("PyList_Size");
		PyList_Sort = PythonFunction("PyList_Sort");
		PyList_Type = PythonFunction("PyList_Type");
		PyListIter_Type = PythonFunction("PyListIter_Type");
		PyListRevIter_Type = PythonFunction("PyListRevIter_Type");
		PyLong_AsDouble = PythonFunction("PyLong_AsDouble");
		PyLong_AsLong = PythonFunction("PyLong_AsLong");
		PyLong_AsLongAndOverflow = PythonFunction("PyLong_AsLongAndOverflow");
		PyLong_AsLongLong = PythonFunction("PyLong_AsLongLong");
		PyLong_AsLongLongAndOverflow = PythonFunction("PyLong_AsLongLongAndOverflow");
		PyLong_AsSize_t = PythonFunction("PyLong_AsSize_t");
		PyLong_AsSsize_t = PythonFunction("PyLong_AsSsize_t");
		PyLong_AsUnsignedLong = PythonFunction("PyLong_AsUnsignedLong");
		PyLong_AsUnsignedLongLong = PythonFunction("PyLong_AsUnsignedLongLong");
		PyLong_AsUnsignedLongLongMask = PythonFunction("PyLong_AsUnsignedLongLongMask");
		PyLong_AsUnsignedLongMask = PythonFunction("PyLong_AsUnsignedLongMask");
		PyLong_AsVoidPtr = PythonFunction("PyLong_AsVoidPtr");
		PyLong_FromDouble = PythonFunction("PyLong_FromDouble");
		PyLong_FromLong = PythonFunction("PyLong_FromLong");
		PyLong_FromLongLong = PythonFunction("PyLong_FromLongLong");
		PyLong_FromSize_t = PythonFunction("PyLong_FromSize_t");
		PyLong_FromSsize_t = PythonFunction("PyLong_FromSsize_t");
		PyLong_FromString = PythonFunction("PyLong_FromString");
		PyLong_FromUnicode = PythonFunction("PyLong_FromUnicode");
		PyLong_FromUnicodeObject = PythonFunction("PyLong_FromUnicodeObject");
		PyLong_FromUnsignedLong = PythonFunction("PyLong_FromUnsignedLong");
		PyLong_FromUnsignedLongLong = PythonFunction("PyLong_FromUnsignedLongLong");
		PyLong_FromVoidPtr = PythonFunction("PyLong_FromVoidPtr");
		PyLong_GetInfo = PythonFunction("PyLong_GetInfo");
		PyLong_Type = PythonFunction("PyLong_Type");
		PyLongRangeIter_Type = PythonFunction("PyLongRangeIter_Type");
		PyMap_Type = PythonFunction("PyMap_Type");
		PyMapping_Check = PythonFunction("PyMapping_Check");
		PyMapping_GetItemString = PythonFunction("PyMapping_GetItemString");
		PyMapping_HasKey = PythonFunction("PyMapping_HasKey");
		PyMapping_HasKeyString = PythonFunction("PyMapping_HasKeyString");
		PyMapping_Items = PythonFunction("PyMapping_Items");
		PyMapping_Keys = PythonFunction("PyMapping_Keys");
		PyMapping_Length = PythonFunction("PyMapping_Length");
		PyMapping_SetItemString = PythonFunction("PyMapping_SetItemString");
		PyMapping_Size = PythonFunction("PyMapping_Size");
		PyMapping_Values = PythonFunction("PyMapping_Values");
		PyMarshal_ReadLastObjectFromFile = PythonFunction("PyMarshal_ReadLastObjectFromFile");
		PyMarshal_ReadLongFromFile = PythonFunction("PyMarshal_ReadLongFromFile");
		PyMarshal_ReadObjectFromFile = PythonFunction("PyMarshal_ReadObjectFromFile");
		PyMarshal_ReadObjectFromString = PythonFunction("PyMarshal_ReadObjectFromString");
		PyMarshal_ReadShortFromFile = PythonFunction("PyMarshal_ReadShortFromFile");
		PyMarshal_WriteLongToFile = PythonFunction("PyMarshal_WriteLongToFile");
		PyMarshal_WriteObjectToFile = PythonFunction("PyMarshal_WriteObjectToFile");
		PyMarshal_WriteObjectToString = PythonFunction("PyMarshal_WriteObjectToString");
		PyMem_Calloc = PythonFunction("PyMem_Calloc");
		PyMem_Free = PythonFunction("PyMem_Free");
		PyMem_GetAllocator = PythonFunction("PyMem_GetAllocator");
		PyMem_Malloc = PythonFunction("PyMem_Malloc");
		PyMem_RawCalloc = PythonFunction("PyMem_RawCalloc");
		PyMem_RawFree = PythonFunction("PyMem_RawFree");
		PyMem_RawMalloc = PythonFunction("PyMem_RawMalloc");
		PyMem_RawRealloc = PythonFunction("PyMem_RawRealloc");
		PyMem_Realloc = PythonFunction("PyMem_Realloc");
		PyMem_SetAllocator = PythonFunction("PyMem_SetAllocator");
		PyMem_SetupDebugHooks = PythonFunction("PyMem_SetupDebugHooks");
		PyMember_GetOne = PythonFunction("PyMember_GetOne");
		PyMember_SetOne = PythonFunction("PyMember_SetOne");
		PyMemberDescr_Type = PythonFunction("PyMemberDescr_Type");
		PyMemoryView_FromBuffer = PythonFunction("PyMemoryView_FromBuffer");
		PyMemoryView_FromMemory = PythonFunction("PyMemoryView_FromMemory");
		PyMemoryView_FromObject = PythonFunction("PyMemoryView_FromObject");
		PyMemoryView_GetContiguous = PythonFunction("PyMemoryView_GetContiguous");
		PyMemoryView_Type = PythonFunction("PyMemoryView_Type");
		PyMethod_ClearFreeList = PythonFunction("PyMethod_ClearFreeList");
		PyMethod_Fini = PythonFunction("PyMethod_Fini");
		PyMethod_Function = PythonFunction("PyMethod_Function");
		PyMethod_New = PythonFunction("PyMethod_New");
		PyMethod_Self = PythonFunction("PyMethod_Self");
		PyMethod_Type = PythonFunction("PyMethod_Type");
		PyMethodDescr_Type = PythonFunction("PyMethodDescr_Type");
		PyModule_AddFunctions = PythonFunction("PyModule_AddFunctions");
		PyModule_AddIntConstant = PythonFunction("PyModule_AddIntConstant");
		PyModule_AddObject = PythonFunction("PyModule_AddObject");
		PyModule_AddStringConstant = PythonFunction("PyModule_AddStringConstant");
		PyModule_Create2 = PythonFunction("PyModule_Create2");
		PyModule_ExecDef = PythonFunction("PyModule_ExecDef");
		PyModule_FromDefAndSpec2 = PythonFunction("PyModule_FromDefAndSpec2");
		PyModule_GetDef = PythonFunction("PyModule_GetDef");
		PyModule_GetDict = PythonFunction("PyModule_GetDict");
		PyModule_GetFilename = PythonFunction("PyModule_GetFilename");
		PyModule_GetFilenameObject = PythonFunction("PyModule_GetFilenameObject");
		PyModule_GetName = PythonFunction("PyModule_GetName");
		PyModule_GetNameObject = PythonFunction("PyModule_GetNameObject");
		PyModule_GetState = PythonFunction("PyModule_GetState");
		PyModule_New = PythonFunction("PyModule_New");
		PyModule_NewObject = PythonFunction("PyModule_NewObject");
		PyModule_SetDocString = PythonFunction("PyModule_SetDocString");
		PyModule_Type = PythonFunction("PyModule_Type");
		PyModuleDef_Init = PythonFunction("PyModuleDef_Init");
		PyModuleDef_Type = PythonFunction("PyModuleDef_Type");
		PyNode_AddChild = PythonFunction("PyNode_AddChild");
		PyNode_Compile = PythonFunction("PyNode_Compile");
		PyNode_Free = PythonFunction("PyNode_Free");
		PyNode_ListTree = PythonFunction("PyNode_ListTree");
		PyNode_New = PythonFunction("PyNode_New");
		PyNumber_Absolute = PythonFunction("PyNumber_Absolute");
		PyNumber_Add = PythonFunction("PyNumber_Add");
		PyNumber_And = PythonFunction("PyNumber_And");
		PyNumber_AsSsize_t = PythonFunction("PyNumber_AsSsize_t");
		PyNumber_Check = PythonFunction("PyNumber_Check");
		PyNumber_Divmod = PythonFunction("PyNumber_Divmod");
		PyNumber_Float = PythonFunction("PyNumber_Float");
		PyNumber_FloorDivide = PythonFunction("PyNumber_FloorDivide");
		PyNumber_Index = PythonFunction("PyNumber_Index");
		PyNumber_InPlaceAdd = PythonFunction("PyNumber_InPlaceAdd");
		PyNumber_InPlaceAnd = PythonFunction("PyNumber_InPlaceAnd");
		PyNumber_InPlaceFloorDivide = PythonFunction("PyNumber_InPlaceFloorDivide");
		PyNumber_InPlaceLshift = PythonFunction("PyNumber_InPlaceLshift");
		PyNumber_InPlaceMatrixMultiply = PythonFunction("PyNumber_InPlaceMatrixMultiply");
		PyNumber_InPlaceMultiply = PythonFunction("PyNumber_InPlaceMultiply");
		PyNumber_InPlaceOr = PythonFunction("PyNumber_InPlaceOr");
		PyNumber_InPlacePower = PythonFunction("PyNumber_InPlacePower");
		PyNumber_InPlaceRemainder = PythonFunction("PyNumber_InPlaceRemainder");
		PyNumber_InPlaceRshift = PythonFunction("PyNumber_InPlaceRshift");
		PyNumber_InPlaceSubtract = PythonFunction("PyNumber_InPlaceSubtract");
		PyNumber_InPlaceTrueDivide = PythonFunction("PyNumber_InPlaceTrueDivide");
		PyNumber_InPlaceXor = PythonFunction("PyNumber_InPlaceXor");
		PyNumber_Invert = PythonFunction("PyNumber_Invert");
		PyNumber_Long = PythonFunction("PyNumber_Long");
		PyNumber_Lshift = PythonFunction("PyNumber_Lshift");
		PyNumber_MatrixMultiply = PythonFunction("PyNumber_MatrixMultiply");
		PyNumber_Multiply = PythonFunction("PyNumber_Multiply");
		PyNumber_Negative = PythonFunction("PyNumber_Negative");
		PyNumber_Or = PythonFunction("PyNumber_Or");
		PyNumber_Positive = PythonFunction("PyNumber_Positive");
		PyNumber_Power = PythonFunction("PyNumber_Power");
		PyNumber_Remainder = PythonFunction("PyNumber_Remainder");
		PyNumber_Rshift = PythonFunction("PyNumber_Rshift");
		PyNumber_Subtract = PythonFunction("PyNumber_Subtract");
		PyNumber_ToBase = PythonFunction("PyNumber_ToBase");
		PyNumber_TrueDivide = PythonFunction("PyNumber_TrueDivide");
		PyNumber_Xor = PythonFunction("PyNumber_Xor");
		PyObject_AsCharBuffer = PythonFunction("PyObject_AsCharBuffer");
		PyObject_ASCII = PythonFunction("PyObject_ASCII");
		PyObject_AsFileDescriptor = PythonFunction("PyObject_AsFileDescriptor");
		PyObject_AsReadBuffer = PythonFunction("PyObject_AsReadBuffer");
		PyObject_AsWriteBuffer = PythonFunction("PyObject_AsWriteBuffer");
		PyObject_Bytes = PythonFunction("PyObject_Bytes");
		PyObject_Call = PythonFunction("PyObject_Call");
		PyObject_CallFinalizer = PythonFunction("PyObject_CallFinalizer");
		PyObject_CallFinalizerFromDealloc = PythonFunction("PyObject_CallFinalizerFromDealloc");
		PyObject_CallFunction = PythonFunction("PyObject_CallFunction");
		PyObject_CallFunctionObjArgs = PythonFunction("PyObject_CallFunctionObjArgs");
		PyObject_CallMethod = PythonFunction("PyObject_CallMethod");
		PyObject_CallMethodObjArgs = PythonFunction("PyObject_CallMethodObjArgs");
		PyObject_CallObject = PythonFunction("PyObject_CallObject");
		PyObject_Calloc = PythonFunction("PyObject_Calloc");
		PyObject_CheckReadBuffer = PythonFunction("PyObject_CheckReadBuffer");
		PyObject_ClearWeakRefs = PythonFunction("PyObject_ClearWeakRefs");
		PyObject_CopyData = PythonFunction("PyObject_CopyData");
		PyObject_DelItem = PythonFunction("PyObject_DelItem");
		PyObject_DelItemString = PythonFunction("PyObject_DelItemString");
		PyObject_Dir = PythonFunction("PyObject_Dir");
		PyObject_Format = PythonFunction("PyObject_Format");
		PyObject_Free = PythonFunction("PyObject_Free");
		PyObject_GC_Del = PythonFunction("PyObject_GC_Del");
		PyObject_GC_Track = PythonFunction("PyObject_GC_Track");
		PyObject_GC_UnTrack = PythonFunction("PyObject_GC_UnTrack");
		PyObject_GenericGetAttr = PythonFunction("PyObject_GenericGetAttr");
		PyObject_GenericGetDict = PythonFunction("PyObject_GenericGetDict");
		PyObject_GenericSetAttr = PythonFunction("PyObject_GenericSetAttr");
		PyObject_GenericSetDict = PythonFunction("PyObject_GenericSetDict");
		PyObject_GetArenaAllocator = PythonFunction("PyObject_GetArenaAllocator");
		PyObject_GetAttr = PythonFunction("PyObject_GetAttr");
		PyObject_GetAttrString = PythonFunction("PyObject_GetAttrString");
		PyObject_GetBuffer = PythonFunction("PyObject_GetBuffer");
		PyObject_GetItem = PythonFunction("PyObject_GetItem");
		PyObject_GetIter = PythonFunction("PyObject_GetIter");
		PyObject_HasAttr = PythonFunction("PyObject_HasAttr");
		PyObject_HasAttrString = PythonFunction("PyObject_HasAttrString");
		PyObject_Hash = PythonFunction("PyObject_Hash");
		PyObject_HashNotImplemented = PythonFunction("PyObject_HashNotImplemented");
		PyObject_Init = PythonFunction("PyObject_Init");
		PyObject_InitVar = PythonFunction("PyObject_InitVar");
		PyObject_IsInstance = PythonFunction("PyObject_IsInstance");
		PyObject_IsSubclass = PythonFunction("PyObject_IsSubclass");
		PyObject_IsTrue = PythonFunction("PyObject_IsTrue");
		PyObject_Length = PythonFunction("PyObject_Length");
		PyObject_LengthHint = PythonFunction("PyObject_LengthHint");
		PyObject_Malloc = PythonFunction("PyObject_Malloc");
		PyObject_Not = PythonFunction("PyObject_Not");
		PyObject_Print = PythonFunction("PyObject_Print");
		PyObject_Realloc = PythonFunction("PyObject_Realloc");
		PyObject_Repr = PythonFunction("PyObject_Repr");
		PyObject_RichCompare = PythonFunction("PyObject_RichCompare");
		PyObject_RichCompareBool = PythonFunction("PyObject_RichCompareBool");
		PyObject_SelfIter = PythonFunction("PyObject_SelfIter");
		PyObject_SetArenaAllocator = PythonFunction("PyObject_SetArenaAllocator");
		PyObject_SetAttr = PythonFunction("PyObject_SetAttr");
		PyObject_SetAttrString = PythonFunction("PyObject_SetAttrString");
		PyObject_SetItem = PythonFunction("PyObject_SetItem");
		PyObject_Size = PythonFunction("PyObject_Size");
		PyObject_Str = PythonFunction("PyObject_Str");
		PyObject_Type = PythonFunction("PyObject_Type");
		PyODict_DelItem = PythonFunction("PyODict_DelItem");
		PyODict_New = PythonFunction("PyODict_New");
		PyODict_SetItem = PythonFunction("PyODict_SetItem");
		PyODict_Type = PythonFunction("PyODict_Type");
		PyODictItems_Type = PythonFunction("PyODictItems_Type");
		PyODictIter_Type = PythonFunction("PyODictIter_Type");
		PyODictKeys_Type = PythonFunction("PyODictKeys_Type");
		PyODictValues_Type = PythonFunction("PyODictValues_Type");
		PyOS_AfterFork = PythonFunction("PyOS_AfterFork");
		PyOS_CheckStack = PythonFunction("PyOS_CheckStack");
		PyOS_double_to_string = PythonFunction("PyOS_double_to_string");
		PyOS_FiniInterrupts = PythonFunction("PyOS_FiniInterrupts");
		PyOS_FSPath = PythonFunction("PyOS_FSPath");
		PyOS_getsig = PythonFunction("PyOS_getsig");
		PyOS_InitInterrupts = PythonFunction("PyOS_InitInterrupts");
		PyOS_InputHook = PythonFunction("PyOS_InputHook");
		PyOS_InterruptOccurred = PythonFunction("PyOS_InterruptOccurred");
		PyOS_mystricmp = PythonFunction("PyOS_mystricmp");
		PyOS_mystrnicmp = PythonFunction("PyOS_mystrnicmp");
		PyOS_Readline = PythonFunction("PyOS_Readline");
		PyOS_ReadlineFunctionPointer = PythonFunction("PyOS_ReadlineFunctionPointer");
		PyOS_setsig = PythonFunction("PyOS_setsig");
		PyOS_snprintf = PythonFunction("PyOS_snprintf");
		PyOS_string_to_double = PythonFunction("PyOS_string_to_double");
		PyOS_strtol = PythonFunction("PyOS_strtol");
		PyOS_strtoul = PythonFunction("PyOS_strtoul");
		PyOS_vsnprintf = PythonFunction("PyOS_vsnprintf");
		PyParser_ASTFromFile = PythonFunction("PyParser_ASTFromFile");
		PyParser_ASTFromFileObject = PythonFunction("PyParser_ASTFromFileObject");
		PyParser_ASTFromString = PythonFunction("PyParser_ASTFromString");
		PyParser_ASTFromStringObject = PythonFunction("PyParser_ASTFromStringObject");
		PyParser_ClearError = PythonFunction("PyParser_ClearError");
		PyParser_ParseFile = PythonFunction("PyParser_ParseFile");
		PyParser_ParseFileFlags = PythonFunction("PyParser_ParseFileFlags");
		PyParser_ParseFileFlagsEx = PythonFunction("PyParser_ParseFileFlagsEx");
		PyParser_ParseFileObject = PythonFunction("PyParser_ParseFileObject");
		PyParser_ParseString = PythonFunction("PyParser_ParseString");
		PyParser_ParseStringFlags = PythonFunction("PyParser_ParseStringFlags");
		PyParser_ParseStringFlagsFilename = PythonFunction("PyParser_ParseStringFlagsFilename");
		PyParser_ParseStringFlagsFilenameEx = PythonFunction("PyParser_ParseStringFlagsFilenameEx");
		PyParser_ParseStringObject = PythonFunction("PyParser_ParseStringObject");
		PyParser_SetError = PythonFunction("PyParser_SetError");
		PyParser_SimpleParseFile = PythonFunction("PyParser_SimpleParseFile");
		PyParser_SimpleParseFileFlags = PythonFunction("PyParser_SimpleParseFileFlags");
		PyParser_SimpleParseString = PythonFunction("PyParser_SimpleParseString");
		PyParser_SimpleParseStringFlags = PythonFunction("PyParser_SimpleParseStringFlags");
		PyParser_SimpleParseStringFlagsFilename = PythonFunction("PyParser_SimpleParseStringFlagsFilename");
		PyProperty_Type = PythonFunction("PyProperty_Type");
		PyRange_Type = PythonFunction("PyRange_Type");
		PyRangeIter_Type = PythonFunction("PyRangeIter_Type");
		PyReversed_Type = PythonFunction("PyReversed_Type");
		PyRun_AnyFile = PythonFunction("PyRun_AnyFile");
		PyRun_AnyFileEx = PythonFunction("PyRun_AnyFileEx");
		PyRun_AnyFileExFlags = PythonFunction("PyRun_AnyFileExFlags");
		PyRun_AnyFileFlags = PythonFunction("PyRun_AnyFileFlags");
		PyRun_File = PythonFunction("PyRun_File");
		PyRun_FileEx = PythonFunction("PyRun_FileEx");
		PyRun_FileExFlags = PythonFunction("PyRun_FileExFlags");
		PyRun_FileFlags = PythonFunction("PyRun_FileFlags");
		PyRun_InteractiveLoop = PythonFunction("PyRun_InteractiveLoop");
		PyRun_InteractiveLoopFlags = PythonFunction("PyRun_InteractiveLoopFlags");
		PyRun_InteractiveOne = PythonFunction("PyRun_InteractiveOne");
		PyRun_InteractiveOneFlags = PythonFunction("PyRun_InteractiveOneFlags");
		PyRun_InteractiveOneObject = PythonFunction("PyRun_InteractiveOneObject");
		PyRun_SimpleFile = PythonFunction("PyRun_SimpleFile");
		PyRun_SimpleFileEx = PythonFunction("PyRun_SimpleFileEx");
		PyRun_SimpleFileExFlags = PythonFunction("PyRun_SimpleFileExFlags");
		PyRun_SimpleString = PythonFunction("PyRun_SimpleString");
		PyRun_SimpleStringFlags = PythonFunction("PyRun_SimpleStringFlags");
		PyRun_String = PythonFunction("PyRun_String");
		PyRun_StringFlags = PythonFunction("PyRun_StringFlags");
		PySeqIter_New = PythonFunction("PySeqIter_New");
		PySeqIter_Type = PythonFunction("PySeqIter_Type");
		PySequence_Check = PythonFunction("PySequence_Check");
		PySequence_Concat = PythonFunction("PySequence_Concat");
		PySequence_Contains = PythonFunction("PySequence_Contains");
		PySequence_Count = PythonFunction("PySequence_Count");
		PySequence_DelItem = PythonFunction("PySequence_DelItem");
		PySequence_DelSlice = PythonFunction("PySequence_DelSlice");
		PySequence_Fast = PythonFunction("PySequence_Fast");
		PySequence_GetItem = PythonFunction("PySequence_GetItem");
		PySequence_GetSlice = PythonFunction("PySequence_GetSlice");
		PySequence_In = PythonFunction("PySequence_In");
		PySequence_Index = PythonFunction("PySequence_Index");
		PySequence_InPlaceConcat = PythonFunction("PySequence_InPlaceConcat");
		PySequence_InPlaceRepeat = PythonFunction("PySequence_InPlaceRepeat");
		PySequence_Length = PythonFunction("PySequence_Length");
		PySequence_List = PythonFunction("PySequence_List");
		PySequence_Repeat = PythonFunction("PySequence_Repeat");
		PySequence_SetItem = PythonFunction("PySequence_SetItem");
		PySequence_SetSlice = PythonFunction("PySequence_SetSlice");
		PySequence_Size = PythonFunction("PySequence_Size");
		PySequence_Tuple = PythonFunction("PySequence_Tuple");
		PySet_Add = PythonFunction("PySet_Add");
		PySet_Clear = PythonFunction("PySet_Clear");
		PySet_ClearFreeList = PythonFunction("PySet_ClearFreeList");
		PySet_Contains = PythonFunction("PySet_Contains");
		PySet_Discard = PythonFunction("PySet_Discard");
		PySet_Fini = PythonFunction("PySet_Fini");
		PySet_New = PythonFunction("PySet_New");
		PySet_Pop = PythonFunction("PySet_Pop");
		PySet_Size = PythonFunction("PySet_Size");
		PySet_Type = PythonFunction("PySet_Type");
		PySetIter_Type = PythonFunction("PySetIter_Type");
		PySlice_AdjustIndices = PythonFunction("PySlice_AdjustIndices");
		PySlice_Fini = PythonFunction("PySlice_Fini");
		PySlice_GetIndices = PythonFunction("PySlice_GetIndices");
		PySlice_GetIndicesEx = PythonFunction("PySlice_GetIndicesEx");
		PySlice_New = PythonFunction("PySlice_New");
		PySlice_Type = PythonFunction("PySlice_Type");
		PySlice_Unpack = PythonFunction("PySlice_Unpack");
		PyST_GetScope = PythonFunction("PyST_GetScope");
		PyState_AddModule = PythonFunction("PyState_AddModule");
		PyState_FindModule = PythonFunction("PyState_FindModule");
		PyState_RemoveModule = PythonFunction("PyState_RemoveModule");
		PyStaticMethod_New = PythonFunction("PyStaticMethod_New");
		PyStaticMethod_Type = PythonFunction("PyStaticMethod_Type");
		PyStdPrinter_Type = PythonFunction("PyStdPrinter_Type");
		PySTEntry_Type = PythonFunction("PySTEntry_Type");
		PyStructSequence_GetItem = PythonFunction("PyStructSequence_GetItem");
		PyStructSequence_InitType = PythonFunction("PyStructSequence_InitType");
		PyStructSequence_InitType2 = PythonFunction("PyStructSequence_InitType2");
		PyStructSequence_New = PythonFunction("PyStructSequence_New");
		PyStructSequence_NewType = PythonFunction("PyStructSequence_NewType");
		PyStructSequence_SetItem = PythonFunction("PyStructSequence_SetItem");
		PySuper_Type = PythonFunction("PySuper_Type");
		PySymtable_Build = PythonFunction("PySymtable_Build");
		PySymtable_BuildObject = PythonFunction("PySymtable_BuildObject");
		PySymtable_Free = PythonFunction("PySymtable_Free");
		PySymtable_Lookup = PythonFunction("PySymtable_Lookup");
		PySys_AddWarnOption = PythonFunction("PySys_AddWarnOption");
		PySys_AddWarnOptionUnicode = PythonFunction("PySys_AddWarnOptionUnicode");
		PySys_AddXOption = PythonFunction("PySys_AddXOption");
		PySys_FormatStderr = PythonFunction("PySys_FormatStderr");
		PySys_FormatStdout = PythonFunction("PySys_FormatStdout");
		PySys_GetObject = PythonFunction("PySys_GetObject");
		PySys_GetXOptions = PythonFunction("PySys_GetXOptions");
		PySys_HasWarnOptions = PythonFunction("PySys_HasWarnOptions");
		PySys_ResetWarnOptions = PythonFunction("PySys_ResetWarnOptions");
		PySys_SetArgv = PythonFunction("PySys_SetArgv");
		PySys_SetArgvEx = PythonFunction("PySys_SetArgvEx");
		PySys_SetObject = PythonFunction("PySys_SetObject");
		PySys_SetPath = PythonFunction("PySys_SetPath");
		PySys_WriteStderr = PythonFunction("PySys_WriteStderr");
		PySys_WriteStdout = PythonFunction("PySys_WriteStdout");
		PyThread_acquire_lock = PythonFunction("PyThread_acquire_lock");
		PyThread_acquire_lock_timed = PythonFunction("PyThread_acquire_lock_timed");
		PyThread_allocate_lock = PythonFunction("PyThread_allocate_lock");
		PyThread_create_key = PythonFunction("PyThread_create_key");
		PyThread_delete_key = PythonFunction("PyThread_delete_key");
		PyThread_delete_key_value = PythonFunction("PyThread_delete_key_value");
		PyThread_exit_thread = PythonFunction("PyThread_exit_thread");
		PyThread_free_lock = PythonFunction("PyThread_free_lock");
		PyThread_get_key_value = PythonFunction("PyThread_get_key_value");
		PyThread_get_stacksize = PythonFunction("PyThread_get_stacksize");
		PyThread_get_thread_ident = PythonFunction("PyThread_get_thread_ident");
		PyThread_GetInfo = PythonFunction("PyThread_GetInfo");
		PyThread_init_thread = PythonFunction("PyThread_init_thread");
		PyThread_ReInitTLS = PythonFunction("PyThread_ReInitTLS");
		PyThread_release_lock = PythonFunction("PyThread_release_lock");
		PyThread_set_key_value = PythonFunction("PyThread_set_key_value");
		PyThread_set_stacksize = PythonFunction("PyThread_set_stacksize");
		PyThread_start_new_thread = PythonFunction("PyThread_start_new_thread");
		PyThread_tss_alloc = PythonFunction("PyThread_tss_alloc");
		PyThread_tss_create = PythonFunction("PyThread_tss_create");
		PyThread_tss_delete = PythonFunction("PyThread_tss_delete");
		PyThread_tss_free = PythonFunction("PyThread_tss_free");
		PyThread_tss_get = PythonFunction("PyThread_tss_get");
		PyThread_tss_is_created = PythonFunction("PyThread_tss_is_created");
		PyThread_tss_set = PythonFunction("PyThread_tss_set");
		PyThreadState_Clear = PythonFunction("PyThreadState_Clear");
		PyThreadState_Delete = PythonFunction("PyThreadState_Delete");
		PyThreadState_DeleteCurrent = PythonFunction("PyThreadState_DeleteCurrent");
		PyThreadState_Get = PythonFunction("PyThreadState_Get");
		PyThreadState_GetDict = PythonFunction("PyThreadState_GetDict");
		PyThreadState_New = PythonFunction("PyThreadState_New");
		PyThreadState_Next = PythonFunction("PyThreadState_Next");
		PyThreadState_SetAsyncExc = PythonFunction("PyThreadState_SetAsyncExc");
		PyThreadState_Swap = PythonFunction("PyThreadState_Swap");
		PyToken_OneChar = PythonFunction("PyToken_OneChar");
		PyToken_ThreeChars = PythonFunction("PyToken_ThreeChars");
		PyToken_TwoChars = PythonFunction("PyToken_TwoChars");
		PyTraceBack_Here = PythonFunction("PyTraceBack_Here");
		PyTraceBack_Print = PythonFunction("PyTraceBack_Print");
		PyTraceBack_Type = PythonFunction("PyTraceBack_Type");
		PyTraceMalloc_Track = PythonFunction("PyTraceMalloc_Track");
		PyTraceMalloc_Untrack = PythonFunction("PyTraceMalloc_Untrack");
		PyTuple_ClearFreeList = PythonFunction("PyTuple_ClearFreeList");
		PyTuple_Fini = PythonFunction("PyTuple_Fini");
		PyTuple_GetItem = PythonFunction("PyTuple_GetItem");
		PyTuple_GetSlice = PythonFunction("PyTuple_GetSlice");
		PyTuple_New = PythonFunction("PyTuple_New");
		PyTuple_Pack = PythonFunction("PyTuple_Pack");
		PyTuple_SetItem = PythonFunction("PyTuple_SetItem");
		PyTuple_Size = PythonFunction("PyTuple_Size");
		PyTuple_Type = PythonFunction("PyTuple_Type");
		PyTupleIter_Type = PythonFunction("PyTupleIter_Type");
		PyType_ClearCache = PythonFunction("PyType_ClearCache");
		PyType_FromSpec = PythonFunction("PyType_FromSpec");
		PyType_FromSpecWithBases = PythonFunction("PyType_FromSpecWithBases");
		PyType_GenericAlloc = PythonFunction("PyType_GenericAlloc");
		PyType_GenericNew = PythonFunction("PyType_GenericNew");
		PyType_GetFlags = PythonFunction("PyType_GetFlags");
		PyType_GetSlot = PythonFunction("PyType_GetSlot");
		PyType_IsSubtype = PythonFunction("PyType_IsSubtype");
		PyType_Modified = PythonFunction("PyType_Modified");
		PyType_Ready = PythonFunction("PyType_Ready");
		PyType_Type = PythonFunction("PyType_Type");
		PyUnicode_Append = PythonFunction("PyUnicode_Append");
		PyUnicode_AppendAndDel = PythonFunction("PyUnicode_AppendAndDel");
		PyUnicode_AsASCIIString = PythonFunction("PyUnicode_AsASCIIString");
		PyUnicode_AsCharmapString = PythonFunction("PyUnicode_AsCharmapString");
		PyUnicode_AsDecodedObject = PythonFunction("PyUnicode_AsDecodedObject");
		PyUnicode_AsDecodedUnicode = PythonFunction("PyUnicode_AsDecodedUnicode");
		PyUnicode_AsEncodedObject = PythonFunction("PyUnicode_AsEncodedObject");
		PyUnicode_AsEncodedString = PythonFunction("PyUnicode_AsEncodedString");
		PyUnicode_AsEncodedUnicode = PythonFunction("PyUnicode_AsEncodedUnicode");
		PyUnicode_AsLatin1String = PythonFunction("PyUnicode_AsLatin1String");
		PyUnicode_AsMBCSString = PythonFunction("PyUnicode_AsMBCSString");
		PyUnicode_AsRawUnicodeEscapeString = PythonFunction("PyUnicode_AsRawUnicodeEscapeString");
		PyUnicode_AsUCS4 = PythonFunction("PyUnicode_AsUCS4");
		PyUnicode_AsUCS4Copy = PythonFunction("PyUnicode_AsUCS4Copy");
		PyUnicode_AsUnicode = PythonFunction("PyUnicode_AsUnicode");
		PyUnicode_AsUnicodeAndSize = PythonFunction("PyUnicode_AsUnicodeAndSize");
		PyUnicode_AsUnicodeCopy = PythonFunction("PyUnicode_AsUnicodeCopy");
		PyUnicode_AsUnicodeEscapeString = PythonFunction("PyUnicode_AsUnicodeEscapeString");
		PyUnicode_AsUTF16String = PythonFunction("PyUnicode_AsUTF16String");
		PyUnicode_AsUTF32String = PythonFunction("PyUnicode_AsUTF32String");
		PyUnicode_AsUTF8 = PythonFunction("PyUnicode_AsUTF8");
		PyUnicode_AsUTF8AndSize = PythonFunction("PyUnicode_AsUTF8AndSize");
		PyUnicode_AsUTF8String = PythonFunction("PyUnicode_AsUTF8String");
		PyUnicode_AsWideChar = PythonFunction("PyUnicode_AsWideChar");
		PyUnicode_AsWideCharString = PythonFunction("PyUnicode_AsWideCharString");
		PyUnicode_BuildEncodingMap = PythonFunction("PyUnicode_BuildEncodingMap");
		PyUnicode_ClearFreeList = PythonFunction("PyUnicode_ClearFreeList");
		PyUnicode_Compare = PythonFunction("PyUnicode_Compare");
		PyUnicode_CompareWithASCIIString = PythonFunction("PyUnicode_CompareWithASCIIString");
		PyUnicode_Concat = PythonFunction("PyUnicode_Concat");
		PyUnicode_Contains = PythonFunction("PyUnicode_Contains");
		PyUnicode_CopyCharacters = PythonFunction("PyUnicode_CopyCharacters");
		PyUnicode_Count = PythonFunction("PyUnicode_Count");
		PyUnicode_Decode = PythonFunction("PyUnicode_Decode");
		PyUnicode_DecodeASCII = PythonFunction("PyUnicode_DecodeASCII");
		PyUnicode_DecodeCharmap = PythonFunction("PyUnicode_DecodeCharmap");
		PyUnicode_DecodeCodePageStateful = PythonFunction("PyUnicode_DecodeCodePageStateful");
		PyUnicode_DecodeFSDefault = PythonFunction("PyUnicode_DecodeFSDefault");
		PyUnicode_DecodeFSDefaultAndSize = PythonFunction("PyUnicode_DecodeFSDefaultAndSize");
		PyUnicode_DecodeLatin1 = PythonFunction("PyUnicode_DecodeLatin1");
		PyUnicode_DecodeLocale = PythonFunction("PyUnicode_DecodeLocale");
		PyUnicode_DecodeLocaleAndSize = PythonFunction("PyUnicode_DecodeLocaleAndSize");
		PyUnicode_DecodeMBCS = PythonFunction("PyUnicode_DecodeMBCS");
		PyUnicode_DecodeMBCSStateful = PythonFunction("PyUnicode_DecodeMBCSStateful");
		PyUnicode_DecodeRawUnicodeEscape = PythonFunction("PyUnicode_DecodeRawUnicodeEscape");
		PyUnicode_DecodeUnicodeEscape = PythonFunction("PyUnicode_DecodeUnicodeEscape");
		PyUnicode_DecodeUTF16 = PythonFunction("PyUnicode_DecodeUTF16");
		PyUnicode_DecodeUTF16Stateful = PythonFunction("PyUnicode_DecodeUTF16Stateful");
		PyUnicode_DecodeUTF32 = PythonFunction("PyUnicode_DecodeUTF32");
		PyUnicode_DecodeUTF32Stateful = PythonFunction("PyUnicode_DecodeUTF32Stateful");
		PyUnicode_DecodeUTF7 = PythonFunction("PyUnicode_DecodeUTF7");
		PyUnicode_DecodeUTF7Stateful = PythonFunction("PyUnicode_DecodeUTF7Stateful");
		PyUnicode_DecodeUTF8 = PythonFunction("PyUnicode_DecodeUTF8");
		PyUnicode_DecodeUTF8Stateful = PythonFunction("PyUnicode_DecodeUTF8Stateful");
		PyUnicode_Encode = PythonFunction("PyUnicode_Encode");
		PyUnicode_EncodeASCII = PythonFunction("PyUnicode_EncodeASCII");
		PyUnicode_EncodeCharmap = PythonFunction("PyUnicode_EncodeCharmap");
		PyUnicode_EncodeCodePage = PythonFunction("PyUnicode_EncodeCodePage");
		PyUnicode_EncodeDecimal = PythonFunction("PyUnicode_EncodeDecimal");
		PyUnicode_EncodeFSDefault = PythonFunction("PyUnicode_EncodeFSDefault");
		PyUnicode_EncodeLatin1 = PythonFunction("PyUnicode_EncodeLatin1");
		PyUnicode_EncodeLocale = PythonFunction("PyUnicode_EncodeLocale");
		PyUnicode_EncodeMBCS = PythonFunction("PyUnicode_EncodeMBCS");
		PyUnicode_EncodeRawUnicodeEscape = PythonFunction("PyUnicode_EncodeRawUnicodeEscape");
		PyUnicode_EncodeUnicodeEscape = PythonFunction("PyUnicode_EncodeUnicodeEscape");
		PyUnicode_EncodeUTF16 = PythonFunction("PyUnicode_EncodeUTF16");
		PyUnicode_EncodeUTF32 = PythonFunction("PyUnicode_EncodeUTF32");
		PyUnicode_EncodeUTF7 = PythonFunction("PyUnicode_EncodeUTF7");
		PyUnicode_EncodeUTF8 = PythonFunction("PyUnicode_EncodeUTF8");
		PyUnicode_Fill = PythonFunction("PyUnicode_Fill");
		PyUnicode_Find = PythonFunction("PyUnicode_Find");
		PyUnicode_FindChar = PythonFunction("PyUnicode_FindChar");
		PyUnicode_Format = PythonFunction("PyUnicode_Format");
		PyUnicode_FromEncodedObject = PythonFunction("PyUnicode_FromEncodedObject");
		PyUnicode_FromFormat = PythonFunction("PyUnicode_FromFormat");
		PyUnicode_FromFormatV = PythonFunction("PyUnicode_FromFormatV");
		PyUnicode_FromKindAndData = PythonFunction("PyUnicode_FromKindAndData");
		PyUnicode_FromObject = PythonFunction("PyUnicode_FromObject");
		PyUnicode_FromOrdinal = PythonFunction("PyUnicode_FromOrdinal");
		PyUnicode_FromString = PythonFunction("PyUnicode_FromString");
		PyUnicode_FromStringAndSize = PythonFunction("PyUnicode_FromStringAndSize");
		PyUnicode_FromUnicode = PythonFunction("PyUnicode_FromUnicode");
		PyUnicode_FromWideChar = PythonFunction("PyUnicode_FromWideChar");
		PyUnicode_FSConverter = PythonFunction("PyUnicode_FSConverter");
		PyUnicode_FSDecoder = PythonFunction("PyUnicode_FSDecoder");
		PyUnicode_GetDefaultEncoding = PythonFunction("PyUnicode_GetDefaultEncoding");
		PyUnicode_GetLength = PythonFunction("PyUnicode_GetLength");
		PyUnicode_GetMax = PythonFunction("PyUnicode_GetMax");
		PyUnicode_GetSize = PythonFunction("PyUnicode_GetSize");
		PyUnicode_InternFromString = PythonFunction("PyUnicode_InternFromString");
		PyUnicode_InternImmortal = PythonFunction("PyUnicode_InternImmortal");
		PyUnicode_InternInPlace = PythonFunction("PyUnicode_InternInPlace");
		PyUnicode_IsIdentifier = PythonFunction("PyUnicode_IsIdentifier");
		PyUnicode_Join = PythonFunction("PyUnicode_Join");
		PyUnicode_New = PythonFunction("PyUnicode_New");
		PyUnicode_Partition = PythonFunction("PyUnicode_Partition");
		PyUnicode_ReadChar = PythonFunction("PyUnicode_ReadChar");
		PyUnicode_Replace = PythonFunction("PyUnicode_Replace");
		PyUnicode_Resize = PythonFunction("PyUnicode_Resize");
		PyUnicode_RichCompare = PythonFunction("PyUnicode_RichCompare");
		PyUnicode_RPartition = PythonFunction("PyUnicode_RPartition");
		PyUnicode_RSplit = PythonFunction("PyUnicode_RSplit");
		PyUnicode_Split = PythonFunction("PyUnicode_Split");
		PyUnicode_Splitlines = PythonFunction("PyUnicode_Splitlines");
		PyUnicode_Substring = PythonFunction("PyUnicode_Substring");
		PyUnicode_Tailmatch = PythonFunction("PyUnicode_Tailmatch");
		PyUnicode_TransformDecimalToASCII = PythonFunction("PyUnicode_TransformDecimalToASCII");
		PyUnicode_Translate = PythonFunction("PyUnicode_Translate");
		PyUnicode_TranslateCharmap = PythonFunction("PyUnicode_TranslateCharmap");
		PyUnicode_Type = PythonFunction("PyUnicode_Type");
		PyUnicode_WriteChar = PythonFunction("PyUnicode_WriteChar");
		PyUnicodeDecodeError_Create = PythonFunction("PyUnicodeDecodeError_Create");
		PyUnicodeDecodeError_GetEncoding = PythonFunction("PyUnicodeDecodeError_GetEncoding");
		PyUnicodeDecodeError_GetEnd = PythonFunction("PyUnicodeDecodeError_GetEnd");
		PyUnicodeDecodeError_GetObject = PythonFunction("PyUnicodeDecodeError_GetObject");
		PyUnicodeDecodeError_GetReason = PythonFunction("PyUnicodeDecodeError_GetReason");
		PyUnicodeDecodeError_GetStart = PythonFunction("PyUnicodeDecodeError_GetStart");
		PyUnicodeDecodeError_SetEnd = PythonFunction("PyUnicodeDecodeError_SetEnd");
		PyUnicodeDecodeError_SetReason = PythonFunction("PyUnicodeDecodeError_SetReason");
		PyUnicodeDecodeError_SetStart = PythonFunction("PyUnicodeDecodeError_SetStart");
		PyUnicodeEncodeError_Create = PythonFunction("PyUnicodeEncodeError_Create");
		PyUnicodeEncodeError_GetEncoding = PythonFunction("PyUnicodeEncodeError_GetEncoding");
		PyUnicodeEncodeError_GetEnd = PythonFunction("PyUnicodeEncodeError_GetEnd");
		PyUnicodeEncodeError_GetObject = PythonFunction("PyUnicodeEncodeError_GetObject");
		PyUnicodeEncodeError_GetReason = PythonFunction("PyUnicodeEncodeError_GetReason");
		PyUnicodeEncodeError_GetStart = PythonFunction("PyUnicodeEncodeError_GetStart");
		PyUnicodeEncodeError_SetEnd = PythonFunction("PyUnicodeEncodeError_SetEnd");
		PyUnicodeEncodeError_SetReason = PythonFunction("PyUnicodeEncodeError_SetReason");
		PyUnicodeEncodeError_SetStart = PythonFunction("PyUnicodeEncodeError_SetStart");
		PyUnicodeIter_Type = PythonFunction("PyUnicodeIter_Type");
		PyUnicodeTranslateError_Create = PythonFunction("PyUnicodeTranslateError_Create");
		PyUnicodeTranslateError_GetEnd = PythonFunction("PyUnicodeTranslateError_GetEnd");
		PyUnicodeTranslateError_GetObject = PythonFunction("PyUnicodeTranslateError_GetObject");
		PyUnicodeTranslateError_GetReason = PythonFunction("PyUnicodeTranslateError_GetReason");
		PyUnicodeTranslateError_GetStart = PythonFunction("PyUnicodeTrasnslateError_GetStart");
		PyUnicodeTranslateError_SetEnd = PythonFunction("PyUnicodeTranslateError_SetEnd");
		PyUnicodeTranslateError_SetReason = PythonFunction("PyUnicodeTranslateError_SetReason");
		PyUnicodeTranslateError_SetStart = PythonFunction("PyUnicodeTranslateError_SetStart");
		PyWeakref_GetObject = PythonFunction("PyWeakref_GetObject");
		PyWeakref_NewProxy = PythonFunction("PyWeakref_NewProxy");
		PyWeakref_NewRef = PythonFunction("PyWeakref_NewRef");
		PyWrapper_New = PythonFunction("PyWrapper_New");
		PyWrapperDescr_Type = PythonFunction("PyWrapperDescr_Type");
		PyZip_Type = PythonFunction("PyZip_Type");
		printf("[*] Load library successfully: PythonBasicLib\n");
		return true;
	}
}

bool SagiriStatus(char *status) {
	char buffer[1024];
	sprintf(buffer, "Sagiri - %s", status);
	SetConsoleTitle(buffer);
	return true;
}

bool ClosePython() {
	Py_Finalize();
	return true;
}