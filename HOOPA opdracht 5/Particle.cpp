#include "Particle.h"
#include <ostream>
#include <iostream>

Particle::Particle(int index, bool alive) {
	this->index = index;
	this->alive = alive;
}

bool Particle::isAlive() const {
	return this->alive;
}

ostream& operator<<(ostream& os, Particle& nm) {
	os << endl;
	return os;
}