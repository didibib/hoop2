// copy_pasta.cpp : Defines the entry point for the console application.
//

#include <string>
#include <iostream>

#include "stdafx.h"
#include "Child.h"
#include "Parent.h"

int main()
{
	Child child1;
	child1.name = "childone";
	Child child2;
	child2.name = "childtwo";

	Child child3;
	child3 = child1; // roept assignment operator aan
	cout << child3 << endl;

	Child child4 = child1; // Child child4 = Child(child1)
	cout << child4 << endl;

	Parent parent1;
	parent1.name = "parent1";
	parent1.child = child1;

	cout << parent1 << endl;

	Parent parent2;
	parent2 = parent1;
	parent2.name = "parent2";

	cout << parent2 << endl;

	child1.name = "MODIFIED CHILD1";
	cout << parent1 << endl;
	cout << parent2 << endl;

	string in;
	cin >> in;

    return 0;
}

