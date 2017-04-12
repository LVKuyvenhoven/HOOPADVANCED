#pragma once

#include <string>
#include <ostream >
#include <iostream>

#define MOVESEMANTICS 1

using namespace std;

class Parent {
public:
	Parent();

	Parent(const Parent* parent);

	friend ostream& operator<<(ostream& os, Parent& nm);

#ifdef MOVESEMANTICS

	//move constructor
	Parent(Parent&& other) noexcept;

#endif
	void setup(int value, int data);

	void calculate(int value, int data);

private:
	string name;
	int data;
	int value;
};