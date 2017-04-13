#pragma once
#include <ostream>
#include <iostream>

using namespace std;

class Particle {
public:
	Particle(int i, bool alive);

	bool isAlive() const;

	int index;

	friend ostream& operator<<(ostream& os, Particle& nm);

private:
	bool alive;
};