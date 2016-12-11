#pragma once

#include <string>
#include <iostream>

#include "Child.h"

using namespace std;

class Parent {
public:
	Parent(string name); 
	Parent(const Parent& other);
	Parent& operator=(const Parent& other);

	Child* child;

	friend ostream& operator<<(ostream& os, const Parent& parent);

	string name;
};
