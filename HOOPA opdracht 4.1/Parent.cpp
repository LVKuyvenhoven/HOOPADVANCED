#include <iostream>
#include "Parent.h"

Parent::Parent(string name) {
	this->name = name;
}

ostream& operator<<(ostream& os, Parent& nm) {
	os << endl;
	return os;
}