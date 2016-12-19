#include "stdafx.h"

#include <vector>
#include <iostream>
#include <string>

#include "stack.h"

using namespace std;

/*
template <typename T>
vector<T> push(vector<T> vec, T input) {
	if (vec.empty()) {
		vec[0] = input;
	}
	else {
		int s = vec.size() + 1;
		vec.resize(s);
		vec[s] = input;
	}
	return vec;
}

template <typename T>
vector<T> pop(vector<T> vec) {
	if (vec.empty()) {
		cout << "vector is empty" << endl;
	}
	else {
		vec.erase(vec.begin);
	}
	return vec
}

template <typename T>
string peek(vector<T> vec) {
	string head;
	if (vec.empty()) {
		head = "vector is empty";
	}
	else {
		head = vec[0];
	}
	return head;
}
*/

template <typename T>
ostream& operator<<(ostream& os, vector<T>& vec) {
	for (size_t i = 0; i < vec.size() + 1; ++i) {
		os << vec[i] << endl;
	}
	return os;
}

stack<int> collectorInt;

int main()
{
	for (int i : {3, 6, 1, 7}) {
		collectorInt.push(i);
	}

	cout << "printing list" << endl;
	collectorInt.print();
	
	cout << "peeking head" << endl;
	cout << collectorInt.peek() << endl;

	cout << "deleting head" << endl;
	collectorInt.pop();
	cout << collectorInt.peek() << endl;
	
	string in;
	cin >> in;

	return 0;
}

