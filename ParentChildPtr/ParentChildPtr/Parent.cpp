#include "stdafx.h"
#include "Parent.h"

Parent::Parent(string name) {
	this->name = name;
}

Parent::Parent(const Parent & other)
{
}

Parent& Parent::operator=(const Parent & other)
{
	if (this->child) delete this->child;
	this->name = other.name;
	this->child = new Child();

	return *this;
}

ostream& operator<<(ostream& os, const Parent& parent)
{
	os << "Parent " << parent.name << " Child " << *parent.child << endl;
	return os;
}