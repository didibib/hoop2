#pragma once

#include "Transactie.h"

#include <vector>
#include <string>
using namespace std;

class Bankrekening
{
public:
	Bankrekening(float saldo, vector<string> b_transacties);
	~Bankrekening();

	float getSaldo() const;
	//vector<string> getTransactions() const;

	Bankrekening operator+(const Transactie& transactie) const;

private:
	float saldo;
	vector<string> b_transacties;
};