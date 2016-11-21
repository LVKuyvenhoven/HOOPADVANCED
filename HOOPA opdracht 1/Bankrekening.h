#pragma once

#include <string>
#include "Transactie.h"

using namespace std;

class Bankrekening {
public:
	Bankrekening(int saldo = 0, int historie = 0);
	virtual ~Bankrekening();

	int getSaldo() const;

	int getHistorie() const;

	Bankrekening operator+(const Transactie& transactie) const;

	Bankrekening operator-(const Transactie& transactie) const;

private:
	int saldo;
	int historie;
};