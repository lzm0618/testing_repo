/*
 * complex.cpp
 *
 *  Created on: 2018年5月10日
 *      Author: lzm
 */

#include "complex.h"

namespace ClassPrac {

complex::complex(double r, double i) :
		re_(r), im_(i) {
	// TODO Auto-generated constructor stub

}

complex::~complex() {
	// TODO Auto-generated destructor stub
}
//complex complex::operator+(complex a) {
//	return complex(re_ + a.re_, im_ + a.im_);
//}
//
//complex complex::operator+(double d) {
//	return complex(re_ + d, im_);
//}

complex complex::operator *(complex a) {
	double re = re_ * a.re_ - im_ * a.im_;
	double im = re * a.im_ + im_ * a.re_;
	return complex(re, im);
}
complex& complex::operator +=(complex a) {
	re_ += a.re_;
	im_ += a.im_;
	return *this;
}
complex& complex::operator+=(double d) {
	re_ += d;
	return *this;
}

complex operator+(complex a, complex b) {
	complex r = a;
	return r += b;
}
complex operator+(complex a, double d) {
	complex r = a;
	return r += d;
}
complex operator+(double d, complex a)
{
	complex r = a;
	return r += d;
}
} /* namespace ClassPrac */

