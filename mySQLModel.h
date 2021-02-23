#include <iostream>
#include "model.h"
#include "observable.h"
#include <fstream>
// #include <sql.h>

#pragma once


class mySQLModel : public model , public observable {
public:
	mySQLModel():model(),observable(){
		
		myfile.open ("example1.txt" );
		

	}
	virtual void setTask(TYPE_TASK typeTask, std::string inputUser){
		
		delete  _hendleTask ;
		
		
		if(typeTask == Permanent){
			PermanentTask *task = new PermanentTask(inputUser);
			std::string name =task->getTaskName();
			int end = _hendleTask->getTaskEnd();
			int start = _hendleTask->getTaskStart();
			Category category = task->getTaskCategory();
			DayName day = task ->getTaskDay();
			std::string strDay = task->enumDayToString(day);
			std::string strCat = task->enumCategoryToString(category);
			//TO DO save in file all this parameter
			std::string mergeTask=name+std::to_string(start)+std::to_string(end)+strDay+strCat;
			std:: cout<<mergeTask;
		}
		else{
			OccasionalTask * task= new OccasionalTask(inputUser);
			std::string name =task->getTaskName();
			std:: pair<int,int> startEnd = task->schedulingAlgorithm(task->getDeadline());
			int start= startEnd.first;
			int end =startEnd.second;
			Category category = task->getTaskCategory();
			DayName day = task ->getTaskDay();
			std::string strDay = task->enumDayToString(day);
			std::string strCat = task->enumCategoryToString(category);
			//TO DO save in file all this parameter
			std::string mergeTask=name+std::to_string(start)+std::to_string(end)+strDay+strCat;
			std:: cout<<mergeTask;

		}
		
			
		
		
	}
	virtual ~mySQLModel() {myfile.close();}
private:
	std::ofstream myfile;
	Task * _hendleTask;

};
