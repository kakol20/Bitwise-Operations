#include <iostream>
#include <bitset>

#include "TwoComplacent.h"
#include "SevenSegmentDisplay.h"

//TwoComplacent Complacent;

int main() {
	int8_t a = TwoComplacent::OneToTwo(0b10110111);
	uint8_t b = TwoComplacent::TwoToOne(a);

	std::cout << std::bitset<8>(a) << std::endl;
	std::cout << std::bitset<8>(b) << std::endl << std::endl;

	// test static cast
	int8_t c = -5;
	uint8_t d = static_cast<uint8_t>(c);

	std::cout << std::bitset<8>(c) << std::endl;
	std::cout << std::bitset<8>(d) << std::endl;
	std::cout << static_cast<int>(d) << std::endl << std::endl;

	// seven segment display
	int8_t e = -1;
	uint8_t ssd = SevenSegmentDisplay::Decode4Bit(e);

	std::cout << std::bitset<8>(e) << std::endl;
	std::cout << std::bitset<8>(ssd) << std::endl;

	system("pause");

	return 0;
}