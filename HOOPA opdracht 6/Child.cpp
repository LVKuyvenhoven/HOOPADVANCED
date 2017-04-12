#include "Child.h"
#include <iostream>

Child::Child(string name) {
	this->name = name;
}

ostream& operator<<(ostream& os, Child& nm) {
	os << endl;
	return os;
}