#pragma once

#include <string>
#include <vector>

using namespace std;

template <typename T>
class stack
{
public:
	void push(T input) {
		collector.push_back(input);
	}

	void pop() {
		collector.erase(collector.begin());
	}

	void print() {
		for (vector<T>::iterator i = collector.begin(); i != collector.end(); i++) {
			cout << *i << endl;
		}
	}

	T peek() {
		return collector[0];
	}

private:
	vector<T> collector;
};



