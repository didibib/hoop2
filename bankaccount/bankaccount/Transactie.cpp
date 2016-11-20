#include "stdafx.h"
#include "Transactie.h"

Transactie::Transactie(string actie, float bedrag, string datum)
{
	this->actie = actie;
	this->bedrag = bedrag;
	this->datum = datum;
}

Transactie::~Transactie(){}
