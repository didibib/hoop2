#pragma once

#include "Child.h"
#include <iostream>

class Parent
{
public:
	Parent();
	Parent(const Parent& other);

	Child child;
	string name;

	friend ostream& operator<<(ostream& os, const Parent& parent);	
};

