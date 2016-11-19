#include "stdafx.h"
#include "Bankrekening.h"

Bankrekening::Bankrekening(float saldo, vector<Transactie> b_transacties)
{
	this->saldo = saldo;
	this->b_transacties = b_transacties;
}

Bankrekening::~Bankrekening(){}

float Bankrekening::getSaldo() const {
	return saldo;
}

vector<float> Bankrekening::getTransactions() const {
	//return b_transacties;
}

Bankrekening Bankrekening::operator+(const Transactie& transactie) const
{
	return Bankrekening(saldo + transactie.bedrag, b_transacties.push_back(transactie));
}

Bankrekening Bankrekening::operator-(const Transactie& transactie) const
{
	return Bankrekening(saldo - transactie.bedrag, b_transacties.push_back(transactie));
}
