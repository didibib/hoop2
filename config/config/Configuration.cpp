#include "stdafx.h"
#include "Configuration.h"


Configuration::Configuration(const string& name)
{
	this->name = name;
}

void Configuration::put(const string& key, const string& value) {
	keys.push_back(key);
	values.push_back(value);
}

const string& Configuration::operator[](const string& key) {
	for (int i = 0; i < keys.size(); i++) {
		if (key == keys[i]) {
			return values[i];
		}
	}
	return NOKEY;
}

ostream& operator<<(ostream& os, const Configuration& config) {
	os << "#ConfigFile: " << config.name << endl;
	for (int i = 0; i < config.keys.size(); i++) {
		os << " key:" << config.keys[i] << ":" << config.values[i] << endl;
	}
	return os;
}