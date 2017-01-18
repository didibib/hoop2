#include "FancyObject.h"


FancyObject::FancyObject()
{
	this->name = "noname";
}

FancyObject::FancyObject(const string& name) {
	this->name = name;
	cout << "ctor " << this << " " << name << endl;
}

FancyObject::~FancyObject()
{
	cout << "dtor " << this << " " << name << endl;
}
