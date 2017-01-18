#include "stdafx.h"

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <numeric>
#include "opdracht_algoritmes.h"

using namespace std;

int main() {
	vector<string> colours{ "red", "green", "blue", "orange", "green", "orange", "black", "purple" };
	// ========== gebruik functies uit <algorithm> en <functional> om (steeds vanuit een NIEUWE copie van deze vector) ========== //
	// de vector in 2 nieuwe vectoren te splitsen, 1 met alles (alfabetisch) voor 'purple', 1 met alles er na
	vector<string> colours_purple(colours.size());
	auto newEndBeforeP = copy_if(colours.begin(), colours.end(), colours_purple.begin(), bind2nd(less<string>(), "purple"));

	// alle elementen UPPERCASE te maken ....
	vector<string> colours_uc = colours;
	for (vector<string>::iterator i = colours_uc.begin(); i != colours_uc.end(); i++) {
		for (char& c : *i) {
			c = toupper(c);
		}
		colours_uc.push_back(*i);
	}
	//  alle dubbele te verwijderen 

	vector<string> colours_deldub = colours;
	sort(colours_deldub.begin(), colours_deldub.end());
	colours_deldub.erase(unique(colours_deldub.begin(), colours_deldub.end()), colours_deldub.end());
	


	vector<double> numbers{ 10, 324422, 6, -23, 234.5, 654.1, 3.1242, -9.23, 635, -53 };
	// ========== gebruik functies uit <algorithm> en <functional> om (steeds vanuit een NIEUWE copie van deze vector) ========== //
	//  alle negatieve elementen te verwijderen
	vector<double> numbers_delneg = numbers;
	// .... numbers_delneg.erase(remove_if(numbers_delneg.begin(), numbers_delneg.end(), ) !! ik snap deze niet !!

	//  voor alle elementen te bepalen of ze even of oneven zijn
	vector<double> numbers_uneven = numbers;
	for_each(numbers.begin(), numbers.end(), uneven);

	//  de som, het gemiddelde, en het product van alle getallen te berekenen
	vector<double> numbers_cal = numbers;
	double sum = accumulate(numbers.begin(), numbers.end(), 0);
	//double product = 
	//double mean = 


	string in;
	cin >> in;

	return 0;
}

void uneven(double value) {
	if ((int)value % 2) {
		cout << value << " is uneven" << endl;
	}
	else
	{
		cout << value << " is even" << endl;
	}
}

