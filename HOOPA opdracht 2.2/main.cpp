#include "Config.h"
#include "JSON.h"
#include <iostream>

int main() {
	Config config = Config("SimpleConfig");
	config.put("key1", "value1");
	config.put("key2", "value2");

	cout << config["key1"] << endl;
	cout << config["key2"] << endl;

	cout << config << endl;

	return 0;
}