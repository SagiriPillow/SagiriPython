#include "sagiri.h"

int main() {
	LoadPythonDllFromPath("./python.dll"); # Python Dll Path
	LoadPythonFunctions(); # Load Functions
	Py_Initialize(); # Init Python
	PyRun_SimpleString("print('Hi!SagiriPython!')"); # Call Cpython Api
	Py_Finalize(); # Close The Interpreter
  return 0;
}
