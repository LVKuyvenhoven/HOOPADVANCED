#include <iostream>
#include "Parent.h"

using namespace std;

int main() {

	Parent* p1 = new Parent("Parent1");
	cout << *p1 << endl;

	Parent* p2 = new Parent(*p1);
	cout << *p2 << endl;

	Parent* p3 = new Parent("Parent3");
	cout << *p3 << endl;

	*p3 = *p1;
	cout << *p3 << endl;

	return 0;
}