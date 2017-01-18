#include "stdafx.h"

#include "Parent.h"
#include "Child.h"
#include <memory>


int main()
{
	Child* child = new Child("pro");
	cout << *child << endl;

	unique_ptr<Child> child2 = make_unique<Child>("brother");
	cout << *child2 << endl;

	shared_ptr<Child> child3 = make_shared<Child>("sister");
	cout << *child3 << endl;

	cout << "assigning pro to mom" << endl;
	Parent* mom = new Parent("mom");
	mom->child = child;
	cout << *mom << endl;

	cout << "assigning brother to dad" << endl;
	unique_ptr<Parent> dad = make_unique<Parent>("dad");
	dad->child = move(child2.get());
	cout << *dad << endl;

	cout << "deep copy from dad to mom" << endl;
	*mom = *dad;
	cout << *mom << endl;

	cout << "deleting pro" << endl;
	delete child;

	string in;
	cin >> in;

	return 0;
}

