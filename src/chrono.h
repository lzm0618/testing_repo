/*
 * chrono.h
 *
 *  Created on: 2018年5月10日
 *      Author: lzm
 */

#ifndef CHRONO_H_
#define CHRONO_H_
#include "BetterDate.h"
namespace ClassPrac{
	int diff(BetterDate a, BetterDate b);
	bool leapyear;
	BetterDate next_weekday(BetterDate d);
	BetterDate next_saturday(BetterDate d);
	inline int ClassPrac::diff(BetterDate a, BetterDate b) {
	}

	inline BetterDate ClassPrac::next_weekday(BetterDate d) {
	}

	inline BetterDate ClassPrac::next_saturday(BetterDate d) {
	}
}


#endif /* CHRONO_H_ */
