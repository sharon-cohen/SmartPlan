#include <iostream>
#include <vector>
#include <string>
#include <map>
#include<memory>
#include "DayTask.h"

#pragma once

class Week {

public:
	Week(){}
	Week(std::map <DayName, DayTask*> tasks) {
		_tasks = tasks;
	}
	void displayWeek() {}
	void displayCommand() {}

private:
	std::map<DayName, DayTask*> _tasks;
};



