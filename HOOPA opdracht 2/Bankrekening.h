#pragma once

#include <string>
#include "Transactie.h"
#include <vector>

using namespace std;

class Bankrekening {
public:
	Bankrekening(int saldo = 0, int historie = 0);

	virtual ~Bankrekening();

	void put(int saldo, int historie);

	int getSaldo() const;

	int getHistorie() const;

	Bankrekening operator+(const Transactie& transactie) const;

	Bankrekening operator-(const Transactie& transactie) const;

	Bankrekening& operator=(const Bankrekening& rekening);

	friend ostream& operator<<(ostream& os, Bankrekening& config);

private:
	int saldo;
	int historie;
};