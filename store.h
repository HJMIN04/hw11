#pragma once
#include "fruit.h"
class store {
public:
	store() {};
	store(int a, int b, int c, int g, float d, float e, float f, float h) {
		apple = fruit(a, d);
		pear = fruit(b, e);
		peach = fruit(c, f);
		mango = fruit(g, h);
	}
	fruit apple, pear, peach, mango;
	float total();
};