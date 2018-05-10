/*
 * BetterDate.h
 *
 *  Created on: 2018年5月9日
 *      Author: lzm
 */

#ifndef BETTERDATE_H_
#define BETTERDATE_H_
#include <string>
namespace ClassPrac {

class BetterDate {
public:
	enum Month {
		jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
	};

	class Bad_date {
	}; //异常类
	BetterDate(int dd = 0, Month mm = Month(0), int yy = 0);
	virtual ~BetterDate();
	int day() const;
	BetterDate::Month month() const;
	int year() const;
	std::string string_rep() const;
	void char_rep(char s[]) const;
	static void set_default(int, Month, int);
	BetterDate& add_year(int n);
	BetterDate& add_month(int n);
	BetterDate& add_day(int n);
	bool operator==(BetterDate a) {
		return day() == a.day() &&month() == a.month()
				&& year() == a.year();
	}
private:
	int d;
	int m;
	int y;
//	static BetterDate default_date;
	int leapyear(int year);

};

} /* namespace ClassPrac */

#endif /* BETTERDATE_H_ */
