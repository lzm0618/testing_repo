/*
 * complex.h
 *
 *  Created on: 2018年5月10日
 *      Author: lzm
 */

#ifndef COMPLEX_H_
#define COMPLEX_H_

namespace ClassPrac {

class complex {
public:
	complex(double r, double i);
	virtual ~complex();
	//can not define member function operator +, which will conflict with global function operator +
	//just define operator +=
//	complex operator+(complex a);
//	complex operator+(double d);
	//TODO return object or return reference
	complex& operator+=(complex a);
	complex& operator+=(double d);
	complex operator*(complex a);
private:
	double re_;
	double im_;
};

extern complex operator+(complex a, complex b);
extern complex operator+(complex a, double d);
extern complex operator+(double d, complex a);

} /* namespace ClassPrac */

#endif /* COMPLEX_H_ */
