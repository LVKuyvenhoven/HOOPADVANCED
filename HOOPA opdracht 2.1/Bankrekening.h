#pragma once

using namespace std;

#include "Transactie.h"
#include <vector>;
#include <string>;
#include <iostream>;

class Bankrekening {
public:
	Bankrekening(const string& name);

	virtual ~Bankrekening();

	void put(int& saldos, int& historiën);

	Bankrekening operator+(const Transactie& transactie) const;

	Bankrekening operator-(const Transactie& transactie) const;

	Bankrekening& operator=(const Bankrekening& rekening);

	friend ostream& operator<<(ostream& os, Bankrekening& config);

private:
	string name;
	vector<int> saldos;
	vector<int> historiën;
};