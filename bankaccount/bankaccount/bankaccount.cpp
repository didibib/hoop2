#include "stdafx.h"

#include <ctime>
#include <string>
#include <vector>
#include <iostream>

#include "Bankrekening.h"
#include "Transactie.h"

int main()
{
	Bankrekening bankrekening = Bankrekening(200, vector<Transactie>());
	
	Transactie transactie = Transactie("bij", 20, "21-nov-2016");

	bankrekening = bankrekening + transactie;

	cout << bankrekening << endl;

	string in;
	cin >> in;
    return 0;
}

// obj* obj1
// obj->meth() / (*obj).meth() derefencen