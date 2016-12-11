#include "stdafx.h"
#include "Child.h"

Child::Child()
{	
}

Child::Child(const Child& other)
{
	cout << "cctor" << endl;
	this->name = other.name;
}

Child& Child::operator=(const Child & rhs)
{
	cout << "assignment" << endl;
	this->name = rhs.name;
	return *this;
}

ostream& operator<<(ostream & os, const Child & child)
{
	os << "Child: " << child.name << endl;
	return os;
}
