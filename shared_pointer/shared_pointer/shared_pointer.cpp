#include "FancyObject.h"

#include <memory>
#include <iostream>

using namespace std;

int main()
{

	shared_ptr<FancyObject> f1 = make_shared<FancyObject>("first");
	cout << f1 << "usecount:" << f1.use_count() << endl;

	shared_ptr<FancyObject> f2 = f1;
	cout << f2 << "usecount:" << f1.use_count() << endl;

	{



		shared_ptr<FancyObject> f3 = f1;
		cout << f3 << "usecount:" << f1.use_count() << endl;
	}
	cout << f2 << "usecount:" << f2.use_count() << endl;

	string in;
	cin >> in;
	
    return 0;
}

