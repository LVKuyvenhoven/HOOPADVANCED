#include <iostream>
#include <memory>
#include <string>
#include "Parent.h"

using namespace std;

Parent calculate(Parent p, int value, int data) {
	cout << "  parent p " << &p << endl;

	p.setup(value, data);
	return p;
}

int main() {
	cout << "Begin" << endl;

	Parent parent;

	cout << parent << endl;
	
	Parent newParent = calculate(&parent, 5, 0);

	cout << newParent << endl;

	cout << "End" << endl;

	return 0;
}