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

complex complex::operator +(complex a) {
	double re = re_ + a.re_;
	double im = im_ + a.im_;
	return complex(re, im);
}

complex complex::operator *(complex a) {
	double re = re_ * a.re_ - im_ * a.im_;
	double im = re * a.im_ + im_ * a.re_;
	return complex(re, im);
}
complex complex::operator +=(complex a) {
	re_ += a.re_;
	im_ += a.im_;
	return *this;
}

} /* namespace ClassPrac */

