#include "stdafx.h"
#include "Bankrekening.h"

Bankrekening::Bankrekening(float saldo, vector<string> b_transacties)
{
	this->saldo = saldo;
	this->b_transacties = b_transacties;
}

Bankrekening::~Bankrekening(){}

float Bankrekening::getSaldo() const {
	return saldo;
}

//vector<string> Bankrekening::getTransactions() const {
//	return b_transacties;
//}

Bankrekening Bankrekening::operator+(const Transactie& transactie) const
{
	if (transactie.actie == "bij") {
		return Bankrekening(saldo + transactie.bedrag, b_transacties.push_back());
	}
	if (transactie.actie == "af") {
		return Bankrekening(saldo - transactie.bedrag, b_transacties.push_back(transactie));
	}
	
}
