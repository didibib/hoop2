#include "stdafx.h"
#include "Parent.h"


Parent::Parent()
{
}

Parent::Parent(const Parent & other)
{
	cout << "Parent cctor" << endl;
	this->name = other.name;
	this->child = other.child;
}

ostream& operator<<(ostream & os, const Parent & parent)
{
	os << "Parent: " << parent.name << " " << parent.child << endl;
	return os;
}
