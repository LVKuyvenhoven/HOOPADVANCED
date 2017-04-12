#include <iostream>
#include "Parent.h"

Parent::Parent() {
	this->name = "noname";
}

Parent:: Parent(string name) {
	this->name = name;
	cout << "ctor" << this << " " << name << endl;
}

Parent::~Parent() {
	cout << "dtor" << this << " " << name << endl;
}

ostream& operator<<(ostream& os, Parent& nm) {
	os << endl;
	return os;
}