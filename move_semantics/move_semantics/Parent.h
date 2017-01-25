#pragma once

#include <string>
#include <iostream>

#include "Child.h"

using namespace std;

class Parent {
public:
	Parent(string name);
	Parent(Parent&& parent);
	Parent& operator=(Parent&& parent);

	Child* child;

	friend ostream& operator<<(ostream& os, const Parent& parent);

	string name;
};
