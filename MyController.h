#pragma once
#include "Controller.h"

class MyController : Controller {
public:
	MyController(model* model, view* view) : Controller (model,view) {}

	void start() {}

};

