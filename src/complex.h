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
	complex operator+(complex a);
	complex operator*(complex a);
private:
	double re_;
	double im_;
};

} /* namespace ClassPrac */

#endif /* COMPLEX_H_ */
