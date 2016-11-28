#pragma once

using namespace std;

#include <string>;
#include <vector>;
#include <iostream>;

class Config {
public:
	Config(const string& name);

	void put(const string& keys, const string& values);

	string& operator[](const string& key);

private:
	string name;
	vector<string> keys;
	vector<string> values;

	string NOKEY = "NOSUCHKEY";
};