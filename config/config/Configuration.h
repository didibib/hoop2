#pragma once

#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Configuration
{
public:
	Configuration(const string& name);
	void put(const string& key, const string& value);

	const string& operator[](const string& key);
	friend ostream& operator<<(ostream& os, const Configuration& config);

private:
	string name;
	vector<string> keys;
	vector<string> values;
	const string& NOKEY = "NOSUCHKEY";
};

