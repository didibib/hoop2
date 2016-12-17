#include "stdafx.h"

#include "Parent.h"
#include "Child.h"


int main()
{
	Parent* mom = new Parent("mom");
	cout << *mom << endl;

	Parent* dad = new Parent("dad");
	cout << *dad << endl;

	Child* child = new Child("pro");
	cout << *child << endl;

	*mom = *dad;
	cout << *mom << endl;

	*mom->child = *child;
	cout << *mom << endl;

	string in;
	cin >> in;

    return 0;
}

