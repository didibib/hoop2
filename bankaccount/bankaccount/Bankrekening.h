#pragma once

#include "Transactie.h"

#include <vector>
using namespace std;

class Bankrekening
{
public:
	Bankrekening(float saldo, vector<Transactie> b_transacties);
	~Bankrekening();

	float getSaldo() const;
	vector<float> getTransactions() const;

	Bankrekening operator+(const Transactie& transactie) const;
	Bankrekening operator-(const Transactie& transactie) const;

private:
	float saldo;
	vector<Transactie> b_transacties;
};