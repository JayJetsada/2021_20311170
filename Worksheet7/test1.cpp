// test1.cpp
#include <iostream>
#include "maths.h"

int main(int argc, char *argv[])
{
	int a = 2;
	int b = 5;
	int c = add(a,b);
return (c == 7) ? 0 : 1;
}