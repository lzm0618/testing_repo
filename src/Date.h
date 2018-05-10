/*
 * Date.h
 *
 *  Created on: 2018年5月9日
 *      Author: lzm
 */

#ifndef DATE_H_
#define DATE_H_
#include <string>

namespace ClassPrac {

class Date {
public:
	Date(int d, int m, int y);
	Date(int d, int m);
	Date(int d);
	Date();
	virtual ~Date();
	void init(int dd, int mm, int yy);
	Date& add_year(int n);
	Date& add_month(int n);
	Date& add_day(int n);
	std::string string_rep() const;
	static void set_default(int dd, int mm, int yy);
	int getD() const {
		return d_;
	}

	int getM() const {
		return m_;
	}

	int getY() const {
		return y_;
	}

private:
	int d_;
	int m_;
	int y_;
	mutable bool cache_valid_;
	mutable std::string cache_;
	void compute_cache_value() const;

	static Date default_date;
};

} /* namespace ClassPrac */

#endif /* DATE_H_ */
