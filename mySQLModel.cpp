#include "mySQLModel.h"

	void mySQLModel::saveTaskToFile(std::string name, int end, int start, Category category, DayName day, std::string strDay, std::string strCat)
    {
        myfile << "New Task:" << std::endl;
        myfile << name << std::endl;
        myfile << end << std::endl;
        myfile << start << std::endl;
        myfile << category << std::endl;
        myfile << day << std::endl;
        myfile << strDay << std::endl;
        myfile << strCat << std::endl;
        myfile << "---------" << std::endl;

    }

	// Task mySQLModel::loadFromFile() {
	// 		std::ifstream infile("MyTasks.txt");
	// 		std::string name;
	// 		std::string end;
	// 		std::string start;
	// 		std::string category;
	// 		std::string day;
	// 		std::string strDay;
	// 		std::string strCat;
	// 		while (!infile.eof())
	// 			{
	// 				std::getline(infile, name);
	// 				std::getline(infile, end);
	// 				std::getline(infile, start);
	// 				std::getline(infile, category);
	// 				std::getline(infile, day);
	// 				std::getline(infile, strDay);
	// 				std::getline(infile, strCat);
	// 			}	
	// 	}

	void mySQLModel::setTask(TYPE_TASK typeTask, std::string inputUser){
		
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
            saveTaskToFile(name,end,start,category,day,strDay,strCat);
			std::string mergeTask=name+std::to_string(start)+std::to_string(end)+strDay+strCat;
			std:: cout<<mergeTask;
            myfile << "maayan";
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
