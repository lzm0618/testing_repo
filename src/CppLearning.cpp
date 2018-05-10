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
	char c = 'a';
	char *p = &c;

	char **ppc = & p;

	int * ap[15];// 15 个到int的指针的数组
	int (*fp) (char *); //函数指针， 这种函数以char* 为参数，返回int

}


int main() {

	complex r1(1, 2);
	cout << "\a!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
