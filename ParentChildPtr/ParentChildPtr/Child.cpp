#include "stdafx.h"
#include "Child.h"


Child::Child() {
}

Child::Child(const Child& other)
{
	cout << "child cctor" << endl;
	this->name = other.name;
}

Child& Child::operator=(const Child& child)
{
	cout << "assignment" << endl;
	this->name = child.name;
	return *this;
}

ostream& operator<<(ostream& os, const Child& child)
{
	os << child.name << endl;
	return os;
}
