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

	void pop() {
		if (collector.empty()) {
			cout << "list is empty" << endl;
		}
		else {
			collector[0].delete;
			for (int i = 0; i < collector.size(); i++) {
				collector[i] = collector[i + 1];
			}
		}
	}

	T peek() {
		return collector[0];
	}

private:
	vector<T> collector;
};



