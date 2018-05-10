/*
 * Date.cpp
 *
 *  Created on: 2018年5月9日
 *      Author: lzm
 */

#include "Date.h"

namespace ClassPrac {

Date Date::default_date(8, 7, 1982);

Date::Date(int d, int m, int y) :
		d_(d), m_(m), y_(y) {
	// TODO Auto-generated constructor stub,

}
Date::Date(int d, int m) :
		d_(d), m_(m), y_(default_date.y_) {
}

Date::Date(int d) :
		d_(d), m_(default_date.m_), y_(default_date.y_) {
}

Date::Date() :
		d_(default_date.d_), m_(default_date.m_), y_(default_date.y_) {
}

Date::~Date() {
	// TODO Auto-generated destructor stub
}

void Date::init(int dd, int mm, int yy) {
	d_ = dd;
	m_ = mm;
	y_ = yy;
}
Date& Date::add_year(int n) {
	y_ += n;
	return *this;
}
Date& Date::add_month(int n) {
	m_ += n;
	return *this;
}
Date& Date::add_day(int n) {
	d_ += n;
	return *this;
}

std::string Date::string_rep() const {
	if (cache_valid_){
		compute_cache_value();
		cache_valid_ = true;
	}
	return cache_;
}

void Date::set_default(int dd, int mm, int yy) {
	default_date.d_ = dd;
	default_date.m_ = mm;
	default_date.y_ = yy;
}

void Date::compute_cache_value() const{
}

} /* namespace ClassPrac */
