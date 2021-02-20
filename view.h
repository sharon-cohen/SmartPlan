
#pragma once
#include <iostream>
#include "DayTask.h"
#include "Task.h"
#include <vector>
#include <map>
#include <string>
enum TypeView
{
	DAY,
	WEEK,
};


class view {
protected:
	TypeView _typeView;
public:
	view() {
		_typeView = DAY;
	
	};
	virtual void displayTask(DayName dayName) =0;
	
	void changeTypeView(TypeView typeView) { 
		_typeView = typeView;

		displayTask(Sunday);

	}

	std::string getInputUser() {
		std::string inputUser="";
		std::cin >> inputUser;
		
	
		return inputUser;
	}
	void printReqUser(std::string req) {
		
		std::cout << req;



	}
};