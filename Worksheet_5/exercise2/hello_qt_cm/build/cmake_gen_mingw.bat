@echo OFF
REM cmake_gen_mingw.bat ----------------------------------------------
REM Make sure this file is in the system path
REM Overwrite the path with minimal path to the correct compiler and Qt tools
REM This avoids problems if multiple (32 and 64bit) versions of MinGW have been installed
set PATH=C:\Program Files\CMake\bin;C:\Qt\Tools\mingw810_64\bin;C:\Qt\6.2.1\mingw81_64\bin
REM Invoke cmake, telling it where the correct version of Qt is located
cmake -G"MinGW Makefiles" %1
REM ------------------------------------------------------------------