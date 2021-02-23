# SagiriPython
A very convenient cpython interpreter dll api header file for Windows!
[中文](https://github.com/SagiriPillow/SagiriPython/blob/main/README_CH.md)

# How to use it out of the box ?
1. Copy all the files here to your project root directory.
2. Include this header file.

# How to use it ?
1. Save it in your project directory.
2. Include it in the project.
3. Get a standard Cpython Dll. (The article says below)
4. Load your Dll. (See the example.cpp)
5. Put the basic python library in the project directory. (The article says below)
6. Write a pth file . (The article says below)
7. Init python. (See the example.cpp)
8. Call the Cpython api. (The article says below)

# How to get Cpython Dll ?
1. [Download Python](http://www.python.org/).
2. The Python3x.dll in the installation directory is the standard Dll of Cpython.

# How to get the basic python libraries ?
1. If the project needs to be as streamlined as possible,
   you can use the Dll provided here and the corresponding basic library and Pth file,
   and then you can skip the Pth part below.
2. If your project requires custom Dll and you are willing to do it,
   please create your own basic library.
   Just keep the file with the same file name as the file provided here.
3. If you are unwilling to do it and are afraid of trouble,
   you can copy all the original Python libraries to your project.

# How to write a pth file ?
1. This Pth file is used to mark your module library directory.
2. Determine the location of the above library file.
3. Determine the location of the Dll.
4. Take a file with the same name as Dll and change the suffix to .\_pth .
5. Write in the module library directory relative to the location or absolute path of the Dll.
6. One path per line, yes, it can specify multiple library directories.
7. Looks very troublesome, but it is actually very simple hahaha ~

# The documents of Cpython Api ?
1. [See the offical documents](https://docs.python.org/3/c-api/index.html)
