#include <iostream>
#include <string>

using namespace std;

string arrai[5] = { "Lennart", "Jelmer", "Martijn", "Els", "Job" };

float arrai[5] = { 20.1f, 13.5f, 18.4f, 46.7f, 44.6f };

template <typename T>
T arrai[5] {
	for (int i = 0; i < 5; i++) {
		if (arrai[i] < arrai[i + 1]) {
			int temp = arrai[i];
			arrai[i] = arrai[i + 1];
			arrai[i + 1] = temp;
		}
	}
}

int main() {
	cout << arrai[5] << endl;
	cout << arrai[5] << endl;
	return 0;
}