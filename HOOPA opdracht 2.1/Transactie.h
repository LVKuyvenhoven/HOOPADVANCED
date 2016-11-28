#pragma once

#include <string>

using namespace std;

class Transactie {
public:
	Transactie(int hoeveelheid, string datum, int afschrijving);
	int getHoeveelheid()const;
	const string& getDatum() const;
	int getAfschrijving() const;

private:
	int hoeveelheid;
	string datum;
	int afschrijving;
};