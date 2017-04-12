#include <iostream>
#include <ostream>
#include "Parent.h"

Parent::Parent() {
}

Parent::Parent(const Parent* parent) {

}

void Parent::setup(int value, int data) {
	this->value = value;
	this->data = value;
}

void Parent::calculate(int value, int data) {
	this->value = value;
	this->data = value + 5;
}

ostream& operator<<(ostream& os, Parent& nm) {
	os << endl;
	return os;
}

#ifdef MOVESEMANTICS

//move constructor
Parent::Parent(Parent&& other) noexcept {
	cout << "MMCTOR Parent " << this << endl;
	value = other.value;
	data = other.data;

	other.value = 5;
	other.data = 0;
}

#endif