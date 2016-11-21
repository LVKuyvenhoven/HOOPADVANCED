#include "Bankrekening.h"
#include "Transactie.h"

Bankrekening::Bankrekening(int saldo, int historie) {
	this->saldo = saldo;
	this->historie = historie;
}

Bankrekening::~Bankrekening() {
}

Bankrekening Bankrekening::operator+(const Transactie& transactie) const {
	return Bankrekening(saldo+transactie.getHoeveelheid(), historie+1);
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