#include <iostream>
#include "model.h"
#include "observable.h"
#include <fstream>
// #include <sql.h>

#pragma once

class PermanentTask;
class OccasionalTask;
class mySQLModel : public model , public observable {
public:
	mySQLModel(): model(),observable(){
		
		myfile.open ("MyTasks.txt");
	}

	void saveTaskToFile(std::string name, int end, int start, Category category, DayName day, std::string strDay, std::string strCat);

	Task loadFromFile();
	virtual void setTask(TYPE_TASK typeTask, std::string inputUser);
	virtual ~mySQLModel() {myfile.close();}
private:
	std::ofstream myfile;
	Task * _hendleTask;

};
