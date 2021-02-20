#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include<memory>
#include "DayTask.h"



class Week {

public:
	Week(){
		std:: cout<<"dfdfsdf";

	}
	Week(std::map <DayName, DayTask*> tasks) {
		_tasks = tasks;
	}
	void displayWeek() {}
	void displayCommand() {}

private:
	std::map<DayName, DayTask*> _tasks;
};



