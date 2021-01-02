#pragma once
#include <iostream>
#include "model.h"
#include "view.h"
#include <string>



class Controller {
public:
	Controller(model* model, view* view) {
		_model = model;
		_view = view;
	}

	void start() {}

private:
	model* _model;
	view* _view;

};

