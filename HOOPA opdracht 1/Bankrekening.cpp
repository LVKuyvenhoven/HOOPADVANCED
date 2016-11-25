#include "Bankrekening.h"
#include "Transactie.h"
#include <iostream>;

Bankrekening::Bankrekening(int saldo, int historie) {
	this->saldo = saldo;
	this->historie = historie;
}

Bankrekening::~Bankrekening() {
}

Bankrekening Bankrekening::operator+(const Transactie& transactie) const {
	return Bankrekening(saldo + transactie.getHoeveelheid(), historie+1);
}

Bankrekening Bankrekening::operator-(const Transactie& transactie) const {
	return Bankrekening(saldo - transactie.getHoeveelheid(), historie + 1);
}

int Bankrekening::getSaldo() const {
	return saldo;
}

int Bankrekening::getHistorie() const {
	return historie;
}

Bankrekening& Bankrekening::operator=(const Bankrekening& rekening) {
	if (this != &rekening) {
		cout << "assignment" << endl;

		this->saldo = rekening.saldo;
		this->historie = rekening.historie;
	}

	return *this;
}