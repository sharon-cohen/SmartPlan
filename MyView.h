#include <iostream>
#include "view.h"
#include "Week.h"
#include "Day.h"
#include "observer.h"
#include <conio.h>
#include <vector>
#include <map>
#include <string>
#pragma once

class MyView : public view , public observer {
public:

	
	MyView(Week* week) :view(), observer() {
		_week = week;
		
	}
	MyView():view(), observer(){
		std::map<DayName, Day*> tasks;
		
		tasks[Sunday]= new Day(Sunday);
		tasks[Monday] = new Day(Monday);
		tasks[Tuesday] = new Day(Tuesday);
		tasks[Wednesday] = new Day(Wednesday);
		tasks[Thursday] = new Day(Thursday);
		tasks[Friday] = new Day(Friday);
		tasks[Saturday] = new Day(Saturday);
		_week = new Week(tasks);
		displayTask(Sunday);
		

	}
	void setWeek(Week * week){
		_week=week;
	}
	virtual void displayTask(DayName dayName) {
		system("cls");
		if (_typeView == WEEK) {
			displayWeek();
		}
		if (_typeView == DAY) {
			Day* day = _week->getDayTaskByNameOfDay(dayName);
			displayDay(day);
		}
	}
	void displayDay(Day* day) {
		
		day->displayDay(_week->getCurrentNumDay());
		day->displayCommand();
	
	}
	void displayWeek() {
	
		_week->displayWeek();
		_week->displayCommand();
	
	};
private:
	Week* _week;
	//we dont need it eny more becouse its include in the week
	//Day* _day;

};