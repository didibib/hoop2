#include "stdafx.h"
#include "Parent.h"

Parent::Parent(string name) {
	this->name = name;
}

Parent::Parent(const Parent& parent)
{
	cout << "parent copyctor" << endl;
	this->name = parent.name;
	this->child = parent.child;
}

Parent& Parent::operator=(const Parent& parent)
{
	if (this->child) {
		delete this->child;
	}

	this->name = parent.name;
	this->child = new Child(parent.child->name);

	return *this;
}

ostream& operator<<(ostream& os, const Parent& parent)
{
	//os << "Parent " << parent.name << endl;
	os << "Parent: " << &parent << parent.name << " Child: " << parent.child <<parent.child->name << endl;
	return os;
}
