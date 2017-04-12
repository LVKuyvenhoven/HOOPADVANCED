#pragma once

#include <vector>
#include <iostream>
#include <ostream>
#include <string>

using namespace std;

template<typename T>
class Collector {
	public:
		Collector() {
		}

		void add(T element) {
			elements.push_back(element);
		}

		void pop() {
			elements.pop_back();
		}

		void dump() {
			for (int i = 0; i < elements.size(); i++) {
				cout << elements[i] << endl;
			}
		}
	
	private:
		vector<T> elements;
};