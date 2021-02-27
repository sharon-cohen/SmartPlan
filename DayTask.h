#pragma once
#include <iostream>
#include <vector>
#include <string>
#include<memory>
#include "model.h"
#include "Task.h"
#include "fullHour.h"
#pragma once

class DayTask {

public:
	DayTask(std::vector<Task*> tasks) {
		_tasks=tasks;
	}
	DayTask() {
		PermanentTask * p= new PermanentTask();
		PermanentTask * p1= new PermanentTask();
		PermanentTask * p2= new PermanentTask();
		_tasks.push_back(p);
		_tasks.push_back(p1);
		_tasks.push_back(p2);


	}
	void setTask(Task* t) {}
	Task* getTask(int time) {}
	std::vector<Task*> getTaskDay() {}
	void displayDay() {}
	void deleteTaskByName(std::string s) {}
	void deleteTaskByTime(int time) {}
	std::string getNameTaskForPrint(std::string name){
	
		if (name.size() == 10) {
			return name;
		}
		if (name.size() < 10) {
			int numSpace = 10 - name.size();
			for (int i = 0; i < numSpace; i++) {
				name = name + " ";
			}
			return name;
		}
		else {
			return  name.substr(0, 10);
		}
	}
	std::string getNameTaskByTimeStart(int startTime) {
		for (int i = 0; i < _tasks.size(); i++) {
			if (startTime == _tasks[i]->getTaskStart()) {
				return getNameTaskForPrint(_tasks[i]->getTaskName());
				
			}
		}
		return "          ";
	
	}


private:
	std::vector<Task*> _tasks;
	
	

};