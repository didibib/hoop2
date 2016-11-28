#include "stdafx.h"

#include <string>
#include <iostream>
#include "ContainerShip.h"
#include "ShippingContainer.h"

int main() {

	ContainerShip ship = ContainerShip("maersk1", 15000);

	ShippingContainer container1 = ShippingContainer(10, "blue");
	ShippingContainer container2 = ShippingContainer(20, "red");
	ShippingContainer container3 = ShippingContainer(15, "green");

	cout << ship.getName() << " load=" << ship.getLoad() << endl;

	ship = ship + container1;

	cout << ship.getName() << " load=" << ship.getLoad() << endl;

	ship += container2;

	cout << ship.getName() << " load=" << ship.getLoad() << endl;

	string in;
	cin >> in;

	return 0;
}

