#include <iostream>
#include <bitset>

#include "TwoComplacent.h"

//TwoComplacent Complacent;

int main() {

	int8_t a = TwoComplacent::OneToTwo(0b10110111);

	uint8_t b = TwoComplacent::TwoToOne(a);

	std::cout << std::bitset<8>(a) << std::endl;
	std::cout << std::bitset<8>(b) << std::endl;

	system("pause");

	return 0;
}