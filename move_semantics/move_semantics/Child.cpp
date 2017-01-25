#include "Child.h"

Child::Child(string name) {
	cout << "making a new child" << endl;
	this->name = name;
}

Child::Child(const Child& other)
{
	cout << "child copyctor" << endl;
	this->name = other.name;
}

Child& Child::operator=(const Child& child)
{
	cout << "child assignment" << endl;
	this->name = child.name;
	return *this;
}

ostream& operator<<(ostream& os, const Child& child)
{
	os << "Child: " << child.name << endl;
	return os;
}
