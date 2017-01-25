#include "Parent.h"

Parent::Parent(string name) {
	this->name = name;
}

Parent::Parent(Parent&& parent)
{
	cout << "parent MOVE copyctor" << this << endl;
	this->name = parent.name;
	this->child = parent.child;

	parent.name.clear();
	parent.child = NULL;
}

Parent& Parent::operator=(Parent&& parent)
{
	cout << "parent MOVE assignment" << endl;

	if (this->child) {
		delete this->child;
		
		this->name = parent.name;
		this->child = new Child(parent.child->name);

		parent.name.clear();
		parent.child = NULL;
	}

	return *this;
}

ostream& operator<<(ostream& os, const Parent& parent)
{
	//os << "Parent " << parent.name << endl;
	os << "Parent: " << &parent << " > " << parent.name << " Child: " << parent.child << " > " << parent.child->name << endl;
	return os;
}
