#include "stdafx.h"

#include "Parent.h"
#include "Child.h"


int main()
{
	Parent parent = Parent("parent");
	cout << parent << endl;

	Child child = Child();
	child.name = "one";	
	cout << child << endl;

	parent.child = &child; // VRAAG: waarom ook alweer & ?

	cout << parent << endl;

	string in;
	cin >> in;

    return 0;
}

