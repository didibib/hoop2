#pragma once

#include "Transactie.h"

#include <vector>
#include <string>
using namespace std;

class Bankrekening
{
public:
	Bankrekening(float saldo, vector<Transactie> b_transacties);
	~Bankrekening();

	Bankrekening operator+(const Transactie& transactie);
	friend ostream& operator<<(ostream& os, Bankrekening bankrekening);

	float saldo;
	vector<Transactie> b_transacties;
	//string error = "false transaction";
};