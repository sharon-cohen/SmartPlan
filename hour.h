#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include "DayTask.h"

#pragma once

class Hour {

public:
	Hour() {
	}
	void displayDay() {}
	std::vector<std::string>  getAllHours() { return _AllHoure; }
	int getNumHour() {
		return _AllHoure.size();
	}
	std::string getNameTimeByIndex(int index) {
		return _AllHoure.at(index);
	}
	std::string getStartTimeByIndex(int index) {
		std::string hour = _AllHoure[index];
		int pos = hour.find("-");
		return hour.substr(0, pos);

	}
protected:
	std::vector<std::string>  _AllHoure;
};

