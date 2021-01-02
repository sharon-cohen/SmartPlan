#include <iostream>
#include <vector>
#include <string>
#include<memory>
#include "DayTask.h"

#pragma once

class Day {

public:
	Day(DayTask* dayTask) {
		_dayTask = dayTask;
	}
	void displayDay() {}
	void displayCommand() {}
	   	 
private:
	DayTask* _dayTask;
};



