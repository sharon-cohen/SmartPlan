#include <iostream>
#include <string>
#include "Task.h"
#pragma once



class PermanentTask : public Task {
public:
	PermanentTask(int start, int end, std::string name, Category category, DayName dayName) : Task(name, category) {
		_dayName = dayName;
		_start = start;
		_end = end;
	}


private:
	DayName _dayName;
	int _start;
	int _end;


};


