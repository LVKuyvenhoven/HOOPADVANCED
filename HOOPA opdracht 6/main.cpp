#include <iostream>
#include <memory>
#include "Parent.h"
#include "Child.h"

using namespace std;

int main() {

	unique_ptr<Parent> p2 = std::make_unique<Parent>("Parent2");

	unique_ptr<Parent> p3 = std::make_unique<Parent>("Parent3");

	unique_ptr<Parent> p4 = std::make_unique<Parent>("Parent4");

	unique_ptr<Child> c2 = std::make_unique<Child>("Child2");

	cout << "p2:" << p2.get() << endl;
	cout << "p3:" << p3.get() << endl;
	cout << "p4:" << p4.get() << endl;
	cout << "c2:" << c2.get() << endl;

	cout << *p3 << endl;

	shared_ptr<Parent> o2 = std::make_unique<Parent>("Ouder2");

	cout << o2 << endl << "usecount:" << o2.use_count() << endl;

	shared_ptr<Parent> o3 = std::make_unique<Parent>("Ouder3");

	cout << o3 << endl << "usecount:" << o3.use_count() << endl;

	shared_ptr<Parent> o4 = std::make_unique<Parent>("Ouder4");

	cout << o4 << endl << "usecount:" << o4.use_count() << endl;

	return 0;
}