#pragma once

#include <string>
#include <iostream>

using namespace std;

class FancyObject
{
public:
	FancyObject();
	FancyObject(const string& name);
	virtual ~FancyObject();

private:
	string name;
};

