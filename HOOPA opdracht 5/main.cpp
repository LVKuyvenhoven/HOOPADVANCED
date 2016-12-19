#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<string> colours{ "red", "green", "blue", "orange", "green", "orange", "black", "purple" };
	// verwijder alle dubbele

	vector<double> numbers = { 10, 324422, 6, -23, 234.5, 654.1, 3.1242, -9.23, 635, -53 };

	auto split = std::partition(std::begin(numbers), std::end(numbers),
		[](int a) { return !a & 2; });

	return 0;
}