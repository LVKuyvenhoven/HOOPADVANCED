#include "Bankrekening.h"
#include "Transactie.h"
#include <iostream>;

Bankrekening::Bankrekening(const string& name) {
	this->name = name;
}

void Bankrekening::put(int& saldo, int& historie) {
	saldos.push_back(saldo);
	histori�n.push_back(historie);
}

Bankrekening::~Bankrekening() {
}

Bankrekening Bankrekening::operator+(const Transactie& transactie) const {
	return Bankrekening(saldos + transactie.getHoeveelheid(), histori�n + 1);
}

Bankrekening Bankrekening::operator-(const Transactie& transactie) const {
	return Bankrekening(saldos - transactie.getHoeveelheid(), histori�n + 1);
}

Bankrekening& Bankrekening::operator=(const Bankrekening& rekening) {
	if (this != &rekening) {
		cout << "assignment" << endl;

		this->saldos = rekening.saldos;
		this->histori�n = rekening.histori�n;
	}

	return *this;
}

ostream& operator<<(ostream& os, Bankrekening& bankrekening) {
	os << "Bankrekening saldo: " << bankrekening.saldos
		<< " aantal transacties:" << bankrekening.histori�n << endl;
	return os;
}