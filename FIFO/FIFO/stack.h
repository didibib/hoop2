#pragma once

#include <string>
#include <vector>

using namespace std;

template <typename T>
class stack
{
public:
	void push(T input) {
		if (collector.empty()) {
			collector[0] = input;
		}
		else {
			int s = collector.size() + 1;
			collector.resize(s);
			collector[s] = input;
		}		
	}

	

private:
	vector<T> collector;
};



