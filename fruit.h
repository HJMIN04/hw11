#pragma once
class fruit {
public:
	// constructor
	fruit() {
		price = 200; many = 2; // default values
	}
	fruit(float n, int p) {
		price = p;
		many = n;
	}
	// member data
	int many;
	float price;
	// member function
	float show();
};

