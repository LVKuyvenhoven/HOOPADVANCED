#include "JSON.h"
#include "Config.h"
#include <iostream>;

JSON::JSON(int& config) {
}

ostream& operator<<(ostream& os, const JSON& config) {
	for (int i = 0; i < config.keys.size(); ++i) {
		os << " key:" << config.keys[i]
			<< ":" << config.values[i] << endl;
	}

	return os;
}