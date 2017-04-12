#pragma once

#include <string>
#include <ostream>

using namespace std;

class Child {
public:
	Child(string name);

	friend ostream& operator<<(ostream& os, Child& nm);

private:
	string name;
};