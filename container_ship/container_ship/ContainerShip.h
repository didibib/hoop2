#pragma once
#include <string>
#include "ShippingContainer.h"
#include <iostream>

using namespace std;

class ContainerShip {
public:
	ContainerShip(string name, int capacity, int load = 0, int numberOfContainers = 0);
	virtual ~ContainerShip();

	const string& getName() const;

	int getCapacity() const;

	int getLoad() const;

	int getNumberOfContainers() const;

	ContainerShip operator+(const ShippingContainer& container) const;
	ContainerShip& operator+=(const ShippingContainer& container); // kan geen const zijn want we veranderen iets aan ons zelf

	ContainerShip& operator=(const ContainerShip& ship);

private:
	string name;
	int capacity;
	int load;
	int numberOfContainers;
};

