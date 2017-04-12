#pragma once

#include <string>
#include <ostream>

using namespace std;

class Parent {
public:
	Parent();
	Parent(string name);

	virtual ~Parent();

	friend ostream& operator<<(ostream& os, Parent& nm);

private:
	string name;
	string *namec;
};