#include <iostream>
#include "Transactie.h"
#include "Bankrekening.h"

int main() {
	Bankrekening rekening = Bankrekening();

	Transactie transactie1 = Transactie(100, "21-11-16", 1);

	cout << " saldo=" << rekening.getSaldo() << endl;

	if (transactie1.getAfschrijving() == 0) {
		rekening = rekening + transactie1;
	}
	else {
		rekening = rekening - transactie1;
	}

	cout << " saldo=" << rekening.getSaldo() << endl;

	return 0;
}