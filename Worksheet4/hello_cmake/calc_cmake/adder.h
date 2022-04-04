// calc_cmake/adder.h -----------------------------------
// The following two lines prevent adder.h from being included
// more than once in any source (.cpp) file. If this were to happen
// it would cause problems in the compile process but it is difficult to
// prevent manually in large projects. These #ifndef, #define and #endif
// commands for an "include guard" and are types of compiler directive.
// The include guard contains an ID for this file "MATHSLIB_ADDER_H", this is
// arbitrary but must be unique within the project.
#ifndef MATHSLIB_ADDER_H
#define MATHSLIB_ADDER_H
// We need to prefix our function names with an and additional
// keyword which is different depending on the operating
// system we are using, and whether we are using or creating the
// library.
// The variables "maths_EXPORTS" must be defined at build time if
// we are building the library, but not if we are using it. CMake
// does this for us.
#if defined(WIN32)|defined(_WIN32)
#ifdef maths_STATIC
#define MATHSLIB_API
#else
#ifdef maths_EXPORTS
#define MATHSLIB_API __declspec( dllexport )
#else
#define MATHSLIB_API __declspec( dllimport )
#endif
#endif
#else
// MATHSLIB_API is defined as nothing if were not on Windows
#define MATHSLIB_API
#endif
// The above will include one of:
// __declspec( dllexport )
// __declspec( dllimport )
// before declarations. This is a Microsoft specific
// extension to C/C++
// prototype for our function
MATHSLIB_API int add( int a, int b );
#endif
// / calc_cmake/adder.h --------------------------------------