#pragma once
#include <iostream>
#include "DayTask.h"
#include "Task.h"
#include <vector>
#include <map>
#include <string>

class model {
public:
	model() {}
	virtual DayTask* getTask(DayName d, std::string s) = 0;
	virtual void setTask(DayName d, Task* task) = 0;
	virtual void deleteTask(std::string s, DayName d) = 0;
	virtual std::map<DayName, DayTask*> getWeekTasks() = 0;
	virtual void updateDayPermanentTask(Task* Ptask, DayName d) = 0;
	virtual void updateNAmeTask(DayName d, Task* task) = 0;
	virtual void updateStartTime(Task* task, int time) = 0;
	virtual void updateEndTime(Task* task, int time) = 0;
	virtual void updateDeadline(Task* task, int time) = 0;
	virtual void updateCategory(Task* task, Category category) = 0;
	virtual void SchedulingAlgorithm(Task* task) = 0;
	virtual bool CheckPermanentTask(Task* task) = 0;
	virtual void getDBWeekTask() = 0;
	
private:
	std::map<DayName, DayTask*> _tasks;

};