#include <iostream>
#include <string>

using namespace std;

string listone[] = { "Lennart", "Jelmer", "Martijn", "Els", "Job" };

float listtwo[] = { 10.5f, 20.1f, 8.4f, 19.2f, 14.3f };


template <typename T>
void sort(T input[]) {
	T temp;
	for (int i = 0; i < 5; i++) {
		if (input[i] < input[i + 1]) {
			temp = input[i];
			input[i] = input[i + 1];
			input[i + 1] = temp;
		}
	}
}

int main() {
	sort(listone);
	sort(listtwo);
}