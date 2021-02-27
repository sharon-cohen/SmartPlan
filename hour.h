#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include "DayTask.h"

#pragma once

class Hour {

public:
	Hour() {
	_AllHoure.push_back("7");
	_AllHoure.push_back("8");
	_AllHoure.push_back("9");
	_AllHoure.push_back("10");
	_AllHoure.push_back("11");
	_AllHoure.push_back("12");
	_AllHoure.push_back("13");
	_AllHoure.push_back("14");
	_AllHoure.push_back("15");
	_AllHoure.push_back("16");
	_AllHoure.push_back("17");
	_AllHoure.push_back("18");
	_AllHoure.push_back("19");
	_AllHoure.push_back("20");
	_AllHoure.push_back("21");

	}
	void displayDay() {}
	std::vector<std::string>  getAllHours() { return _AllHoure; }
	int getNumHour() {
		return _AllHoure.size();
	}
	int getNameTimeByIndex(int index) {
		return atoi(_AllHoure.at(index).c_str());
	}
	std::string getStartTimeByIndex(int index) {
		std::string hour = _AllHoure[index];
		int pos = hour.find("-");
		return hour.substr(0, pos);

	}
protected:
	std::vector<std::string>  _AllHoure;
};
