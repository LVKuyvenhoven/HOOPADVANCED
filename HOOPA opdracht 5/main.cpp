#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <string>
#include <numeric>
#include <cctype>


using namespace std;
bool IsOdd(int i) { return ((i % 2) == 1); }
bool IsNeg(int i) { return ((i) >= 0); }

int main() {

	vector<string> colours{ "red", "green", "blue", "orange", "green", "orange", "black", "purple" };

	//alle dubbele verwijderen
	auto it = std::unique(std::begin(colours), std::end(colours));

	//alle elementen UPPERCASE 
    auto id = std::transform(colours.begin(), colours.end(), colours.begin(), std::toupper);

	//De vector in nieuwe vectoren splitsen, een met alles voor 'purple', een met alles erna
	std::sort(std::begin(colours), std::end(colours));


	vector<double> numbers{ 10, 324422, 6, -23, 234.5, 654.1, 3.1242, -9.23, 635, -53 };

	//de som, het gemiddelde en het product van alle getallen berekenen
	int sum = std::accumulate(numbers.begin(), numbers.end(), 0);
	int product = std::accumulate(numbers.begin(), numbers.end(), 1, std::multiplies<int>());
	int avg = sizeof(numbers) / sizeof(numbers[0]);

	cout << avg << endl;
	cout << sum << endl;
	cout << product << endl;

	//alle negatieve elementen verwijderen
	auto ne = std::remove_if(std::begin(numbers), std::end(numbers), IsOdd);

	//voor alle elementen bepalen of ze even of oneven zijn
	auto od = std::remove_if(std::begin(numbers), std::end(numbers), IsNeg);

	return 0;
}