#pragma once
#include "Controller.h"

class MyController : Controller {
public:
	MyController(model* model, view* view) : Controller(model, view) {
		start();
	}

	virtual void start() {
		std::string input;
		input = _view->getInputUser();
		while (input != "q") {
			if (input == "w") {
				_view->changeTypeView(WEEK);
			}
			if (input == "d") {
				_view->changeTypeView(DAY);
			}
			input = _view->getInputUser();
		}
	
	}
};