#include <iostream>
#include "view.h"
#include "Week.h"
#include "Day.h"
#include <vector>
#include <map>
#include <string>
#pragma once

class MyView : public view {
public:
	MyView();
	MyView(Week* week, Day* day) {
		_week = week;
		_day = day;
	}

private:
	Week* _week;
	Day* _day;

};
