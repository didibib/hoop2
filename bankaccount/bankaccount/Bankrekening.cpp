
#include "stdafx.h"
#include "Bankrekening.h"

Bankrekening::Bankrekening(float saldo, vector<Transactie> b_transacties)
{
	this->saldo = saldo;
	this->b_transacties = b_transacties;
}

Bankrekening::~Bankrekening(){}

//vector<string> Bankrekening::getTransactions() const {
//	return b_transacties;
//}

Bankrekening Bankrekening::operator+(const Transactie& transactie) {
	b_transacties.push_back(transactie);

	if (transactie.actie == "bij") {		
		return Bankrekening(saldo + transactie.bedrag, b_transacties);
	} 
	else if (transactie.actie == "af") {
		return Bankrekening(saldo - transactie.bedrag, b_transacties);
	}
	else {
		//return error; VRAAG HOE ZET IK HIER EEN SOORT ERROR IN
	}
}

ostream& operator<<(ostream& os, Bankrekening bankrekening) {
	os << "#bankrekening.json: " << bankrekening.saldo << endl;
	for (int i = 0; i < bankrekening.b_transacties.size(); i++) {
		os << bankrekening.b_transacties[i] << endl;
	}
}

