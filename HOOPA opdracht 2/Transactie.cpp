#include "Transactie.h"

Transactie::Transactie(int hoeveelheid, string datum, int afschrijving) {
	this->hoeveelheid = hoeveelheid;
	this->datum = datum;
	this->afschrijving = afschrijving;
}

int Transactie::getAfschrijving()const {
	return afschrijving;
}

const string& Transactie::getDatum() const {
	return datum;
}

int Transactie::getHoeveelheid()const {
	return hoeveelheid;
}