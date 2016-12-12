#pragma once

#include <vector>
#include <iostream>

using namespace std;

template<typename T>
class Collector {
public:
	Collector() {
	}

	ostream& operator<<(ostream& os, Collector& nm);

	void add(T element) {
		elements.push_back(element);
	}

	void dump() {
		for (size_t i = 0; i < elements.size(); i++) {
			cout << elements[i] << endl;
		}
	}

private:
	vector<T> elements;
};