#include <iostream>
#include "Collector.h"

using namespace std;

Collector::Collector() {
}

ostream& operator<<(ostream& os, Collector& nm) {
	os << endl;
	return os;
}
