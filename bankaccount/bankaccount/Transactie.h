#pragma once

#include <ctime>
#include <string>
using namespace std;

class Transactie
{
public:
	Transactie(string actie, float bedrag, string datum);
	~Transactie();

	friend ostream& operator<<(ostream& os, Transactie bankrekening);

	string actie;
	float bedrag;
	string datum;
};

