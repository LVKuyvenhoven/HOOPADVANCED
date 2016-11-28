#include <iostream>
#include "Transactie.h"
#include "Bankrekening.h"

int main() {
	Bankrekening rekening = Bankrekening("Lennart's rekening");
	rekening.put(0, 0);

	Transactie transactie1 = Transactie(100, "21-11-16", 1);

	if (transactie1.getAfschrijving() == 0) {
		rekening = rekening + transactie1;
	}
	else {
		rekening = rekening - transactie1;
	}

	cout << rekening << endl;

	return 0;
}