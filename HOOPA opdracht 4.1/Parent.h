#pragma once

#include <string>
#include <ostream>
#include <iostream>

using namespace std;

class Parent {
public:
	Parent(string name);

	friend ostream& operator<<(ostream& os, Parent nm);

private:
	string name;
};