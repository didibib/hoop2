#pragma once

#include <string>
#include <iostream>

#include "Child.h"

using namespace std;

class Parent {
public:
	Parent(string name); 
	Parent(const Parent& parent);
	Parent& operator=(const Parent& parent);

	Child* child;

	friend ostream& operator<<(ostream& os, const Parent& parent);

	string name;
};
