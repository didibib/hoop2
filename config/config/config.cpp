#include "stdafx.h"

#include <iostream>
#include "Configuration.h"

int main()
{
	Configuration config = Configuration("SimpleConfig");
	config.put("key1", "value1");
	config.put("key2", "value2");

	cout << config["key1"] << endl;
	cout << config["key3"] << endl;

	string in;
	cin >> in;

    return 0;
}

