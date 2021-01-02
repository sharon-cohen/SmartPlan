#pragma once
#include <iostream>
#include <vector>
#include <string>
#include<memory>
#include "model.h"
#include "Task.h"

#pragma once

class DayTask {

public:
	DayTask(std::vector<Task*>,DayName dayName) {}
	DayTask() {}
	void setTask(Task* t) {}
	Task* getTask(int time) {}
	std::vector<Task*> getTaskDay() {}
	void displayDay() {}
	void deleteTaskByName(std::string s) {}
	void deleteTaskByTime(int time) {}

	

private:
	std::vector<Task*> _tasks;
	DayName _dayName;

};



