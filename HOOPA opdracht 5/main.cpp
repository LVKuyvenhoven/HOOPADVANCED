#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include "Particle.h"
#include <string>
#include <numeric>

using namespace std;

bool isDead(Particle p) {
	return !p.isAlive();
}

void dumpParticles(const string header, const vector<Particle>& particles) {
	cout << header << endl;
	for (int j = 0; j < particles.size(); ++j) {
	}
}


//template voor som

double sumtotal;

template <typename T>
void som(T input[]) {
	for (int i = 0; i < 5; i++) {
		sumtotal = sumtotal + input[i];
	}
}


//template voor product

double producttotal = 1;

template <typename T>
void product(T input[]) {
	for (int i = 0; i < 5; i++) {
		producttotal = producttotal * input[i];
	}
}


//template voor gemiddelde

double averagetotal;
double result;
int divider;

template <typename T>
void average(T input[]) {
	for (int i = 0; i < 5; i++) {
		averagetotal = averagetotal + input[i];
		divider = i;
	}
	result = averagetotal / divider;
}

int main() {
	vector<Particle> particles;

	for (int i = 0; i < 10; ++i) {
		particles.push_back(Particle(i, i % 2 == 0));
	}

	dumpParticles("======== BEGIN", particles);

	vector<Particle>::iterator newEnd;

	newEnd = std::remove_if(particles.begin(), particles.end(), isDead);

	particles.erase(newEnd, particles.end());

	dumpParticles(" ======== EIND", particles);


	string colours[] = { "red", "green", "blue", "orange", "green", "orange", "black", "purple" };

	// verwijder alle dubbele
	std::sort(std::begin(colours), std::end(colours));
	auto it = std::unique(std::begin(colours), std::end(colours));

	double numbers[] = { 10, 324422, 6, -23, 234.5, 654.1, 3.1242, -9.23, 635, -53 };

	//de som, het gemiddelde en het product van alle getallen berekenen

	som(numbers);
	product(numbers);
	average(numbers);

	return 0;
}