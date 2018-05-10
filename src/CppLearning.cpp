//============================================================================
// Name        : CppProgrammingLang.cpp
// Author      : lzm
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "Types.h"
#include <math.h>
#include "complex.h"

using namespace std;
using namespace ClassPrac;

void f(keyword key) {
	switch (key) {
	case ASM:
		break;
	case AUTO:
		break;
	case BREAK:
		break;
	default:
		break;

	}
}

void TestPointers()
{
//	char c = 'a';
//	char *p = &c;

//	char **ppc = & p;
//
//	int * ap[15];// 15 个到int的指针的数组
//	int (*fp) (char *); //函数指针， 这种函数以char* 为参数，返回int

}

void test_complex_add(complex x, complex y, complex z)
{
	complex r1 = x + y + z;
	complex r2 = x;
	r2 += y;
	r2 += z;
}

int main() {
	complex c1(1,2);
	complex c2(2,3);
	complex c3(3,3);
	test_complex_add(c1,c2,c3);
	complex r1 = c1 + c3;
	complex r2 = c1 + 2.0;
	complex r3 = 2 + c2;
	cout << "\a!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
