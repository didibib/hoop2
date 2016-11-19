#pragma once

#include <ctime>
#include <string>
using namespace std;

class Transactie
{
public:
	Transactie(string actie, float bedrag, string datum);
	~Transactie();

	string actie;
	float bedrag;
	string datum;
};

