// template_function.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <string>
#include <iostream>

using namespace std;
/*
int biggest(int a, int b) {
	if (a > b) return a;
	return b;
}

string biggest(string a, string b) {
	if (a > b) return a;
	return b;
}
/**/

template <typename T>
T biggest(T first, T second) {
	if (first > second) return first;
	return second;
}

template <typename T>
void sort(T input[], int count) {
	T tmp;
	for (int i = 0; i < count; ++i) {
		for (int j = i + 1; j < count; ++j) {
			if (input[j] < input[i]) {
				// we draaien de waardes gewoon om
				tmp = input[i];
				input[i] = input[j];
				input[j] = tmp;
			}
		}
	}
}

int main()
{
	cout << biggest(15, 123) << endl;
	cout << biggest("pietje", "henkie");

	string in;
	cin >> in;

    return 0;
}

