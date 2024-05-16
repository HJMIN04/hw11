#include <iostream>
using namespace std;

class fruit {
public:
	// constructor
	fruit() {
		price = 200; many = 2; day = 12; // default values
	}
	fruit(float p, int n, int e) {
		price = p;
		many = n;
		day = e;
	}
	// member data
	int many;
	float price;
	int day;
	// member function
	float show() {
		return price * many;
	}
	void show_all() {
		cout << price << " " << many << " " << day << endl;
	}
};

int main() {
	fruit apple, pear, peach, mango;
	pear = fruit(300, 5, 2);
	peach = fruit(1000, 5, 3);
	mango = fruit(700, 8, 4);
	cout << apple.show() << endl;
	cout << pear.show() << endl;
	cout << peach.show() << endl;
	cout << mango.show() << endl;
	mango.show_all();
	apple.show_all();
	cout << " peach " << peach.price << endl;
	return 123;
}