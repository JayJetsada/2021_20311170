// calc.cpp -------------------------------
#include <sstream>
#include <iostream>
#ifndef MATHSLIB_ADDER_H
#define MATHSLIB_ADDER_H
#endif
int main( int argc, char *argv[] ) {
int a, b, c;
if(argc != 3) return 1;
std::string sa( argv[1] );
std::string sb( argv[2] );
std::stringstream ssa( sa );
std::stringstream ssb( sb );
ssa >> a;
ssb >> b;
// prototype for our function
int add( int a, int b );
c = add( a, b );
std::cout << c;
return 0;
}
// /calc.cpp ---------------------------------