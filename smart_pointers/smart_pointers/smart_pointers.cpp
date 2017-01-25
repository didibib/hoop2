#include "FancyObject.h"

#include <memory>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "==========begin" << endl;

	FancyObject* f1 = new FancyObject("first");
	
	unique_ptr<FancyObject> f2 = make_unique<FancyObject>("second");

	unique_ptr<FancyObject> f3 = make_unique<FancyObject>("third");

	cout << "f3:" << f3.get() << endl;

	unique_ptr<FancyObject> f4;
	//f4 = f3;
	f4 = move(f3); // f3 
	cout << "f3:" << f3.get() << endl;
	cout << "f4:" << f4.get() << endl;

	delete f1;

	cout << "==========done" << endl;	
    
	string in;
	cin >> in;
	
	return 0;
}

 