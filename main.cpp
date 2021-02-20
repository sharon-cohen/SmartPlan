#include <iostream>
#include <iomanip>
#include "MyView.h"
#include "MyController.h"
#include "mySQLModel.h"
int main()
{	
	mySQLModel* mo = nullptr;
	MyView *v = new MyView();
	MyController* c= new MyController(mo,v);
}