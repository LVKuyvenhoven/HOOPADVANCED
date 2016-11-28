#include "Bankrekening.h"
#include "Transactie.h"
#include <iostream>;

Bankrekening::Bankrekening(const string& name) {
	this->name = name;
}

void Bankrekening::put(int& saldo, int& historie) {
	saldos.push_back(saldo);
	historiën.push_back(historie);
}

Bankrekening::~Bankrekening() {
}

Bankrekening Bankrekening::operator+(const Transactie& transactie) const {
	return Bankrekening(saldos + transactie.getHoeveelheid(), historiën + 1);
}

Bankrekening Bankrekening::operator-(const Transactie& transactie) const {
	return Bankrekening(saldos - transactie.getHoeveelheid(), historiën + 1);
}

Bankrekening& Bankrekening::operator=(const Bankrekening& rekening) {
	if (this != &rekening) {
		cout << "assignment" << endl;

		this->saldos = rekening.saldos;
		this->historiën = rekening.historiën;
	}

	return *this;
}

ostream& operator<<(ostream& os, Bankrekening& bankrekening) {
	os << "Bankrekening saldo: " << bankrekening.saldos
		<< " aantal transacties:" << bankrekening.historiën << endl;
	return os;
}