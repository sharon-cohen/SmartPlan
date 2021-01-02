#include <iostream>
#include <string>
#include "Task.h"
#pragma once



class OccasionalTask : public Task {
public:
	OccasionalTask(std::string name, Category category, DayName dayName, DayName DayDeadline, int HourDeadline ) 
		: Task(name, category) {
		_DayDeadline = DayDeadline;
		_HourDeadline = HourDeadline;
	}


private:
	DayName _DayDeadline;
	int _HourDeadline;


};


