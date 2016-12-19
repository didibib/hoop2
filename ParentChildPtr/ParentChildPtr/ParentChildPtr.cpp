#include "stdafx.h"

#include "Parent.h"
#include "Child.h"


int main()
{
	Child* child = new Child("pro");
	cout << *child << endl;

	Child* child2 = new Child("brother");
	cout << *child2 << endl;

	Parent* mom = new Parent("mom");
	mom->child = child;
	cout << *mom << endl;

	Parent* dad = new Parent("dad");
	dad->child = child2;
	cout << *dad << endl;

	*mom = *dad;
	cout << *mom << endl;	
	
	string in;
	cin >> in;

    return 0;
}

