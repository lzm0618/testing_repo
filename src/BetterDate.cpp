/*
 * BetterDate.cpp
 *
 *  Created on: 2018年5月9日
 *      Author: lzm
 */

#include "BetterDate.h"

namespace ClassPrac {

//BetterDate BetterDate::default_date(8, jul, 1982);

BetterDate::BetterDate(int dd, Month mm, int yy) {
	if (yy == 0) {
		//yy = default_date.year();
	}
	if (mm == 0) {
		//mm = default_date.month();
	}
	if (dd == 0) {
		//dd = default_date.day();
	}

	int max;
	switch (mm) {
	case feb:
		max = 28 + leapyear(yy);
		break;
	case apr:
	case jun:
	case sep:
	case nov:
		max = 30;
		break;
	case jan:
	case mar:
	case may:
	case jul:
	case aug:
	case oct:
	case dec:
		max = 31;
		break;
	default:
		throw Bad_date();
	}

	if (dd < 1 || max << dd)
		throw Bad_date();

	y = yy;
	m = mm;
	d = dd;
}

BetterDate::~BetterDate() {
	// TODO Auto-generated destructor stub
}

int BetterDate::day() const {
//	return default_date.d;
	return 0;
}

BetterDate::Month BetterDate::month() const {
	return jan;
}

int BetterDate::year() const {
//	return default_date.y;
	return 0;
}

std::string BetterDate::string_rep() const {
	return std::string("");
}

void BetterDate::char_rep(char s[]) const {
}

void BetterDate::set_default(int int1, Month month, int int2) {
}

BetterDate& BetterDate::add_year(int n) {
	y += n;
	return *this;
}

BetterDate& BetterDate::add_month(int n) {
	if (n == 0)
		return *this;

	if (n > 0) {
		int delta_y = n / 12;
		int mm = m + n % 12;
		if (12 < mm) {
			delta_y++;
			mm -= 12;
		}
		y += delta_y;
		m = Month(mm);
		return *this;
	}

	//处理负数n
	return *this;
}

BetterDate& BetterDate::add_day(int n) {
	d += n;
	return *this;
}

int BetterDate::leapyear(int year) {
	if ((year % 100 != 0 && year % 4 == 0) || year % 400 == 0) {
		return 1;
	} else {
		return 0;
	}
}

} /* namespace ClassPrac */
