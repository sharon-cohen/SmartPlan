#pragma once
#include "observer.h"
#include <string>

class observable {
public:
	observable() {}
	void notify(std::string s) {}

private:
	observer* _observer;

};