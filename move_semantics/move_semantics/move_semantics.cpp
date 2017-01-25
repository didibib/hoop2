#include "Parent.h"
#include "Child.h"


int main()
{
	Child* child = new Child("pro");
	cout << *child << endl;

	Child* child2 = new Child("brother");
	cout << *child2 << endl;

	cout << "assigning pro to mom" << endl;
	Parent* mom = new Parent("mom");
	mom->child = child;
	cout << *mom << endl;

	cout << "assigning brother to dad" << endl;
	Parent* dad = new Parent("dad");
	dad->child = child2;
	cout << *dad << endl;

	//Parent* uncle = new Parent(*dad); //waarom moet de parameter const zijn om dit te laten werken?
	*mom = move(*dad);
	
	cout << *mom << endl;

	string in;
	cin >> in;

	return 0;
}

