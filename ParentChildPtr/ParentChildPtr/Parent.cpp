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

Parent& Parent::operator=(const Parent &parent)
{
	if (this != &parent) {
		this->name = parent.name;
		this->child = new Child(parent.child->name);
	}
	else {
		cout << "you are self assigning" << endl;
	}
	

	return *this;
}

ostream& operator<<(ostream& os, const Parent& parent)
{
	//os << "Parent " << parent.name << endl;
	os << "Parent: " << parent.name << " Child: " << parent.child->name << endl;
	return os;
}
