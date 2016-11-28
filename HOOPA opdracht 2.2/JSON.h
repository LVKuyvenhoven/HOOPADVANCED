#pragma once

using namespace std;

#include <string>;
#include <iostream>;

class JSON {
public:
	JSON(int& config);

	friend	ostream& operator<<(ostream& os, const JSON& config);

private:
	int config;
	vector<string> keys;
	vector<string> values;

	string NOKEY = "NOSUCHKEY";
};