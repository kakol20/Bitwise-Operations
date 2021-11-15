#include <iostream>
#include <bitset>

#include "TwoComplacent.h"
#include "SevenSegmentDisplay.h"
#include "LinearFeedbackShift.h"

//TwoComplacent Complacent;

int main() {
	int8_t a = TwoComplacent::OneToTwo(0b10110111);
	uint8_t b = TwoComplacent::TwoToOne(a);

	std::cout << std::bitset<8>(a) << '\n';
	std::cout << std::bitset<8>(b) << '\n\n';

	// test static cast
	int8_t c = -5;
	uint8_t d = static_cast<uint8_t>(c);

	std::cout << std::bitset<8>(c) << '\n';
	std::cout << std::bitset<8>(d) << '\n';
	std::cout << static_cast<int>(d) << '\n\n';
	
	// seven segment display
	int8_t e = -1;
	uint8_t ssd = SevenSegmentDisplay::Decode4Bit(e);

	std::cout << std::bitset<8>(e) << '\n';
	std::cout << std::bitset<8>(ssd) << '\n';

	// linear feedback shift register
	std::cout << std::endl;
	for (unsigned int i = 20; i < 30; i++) {
		unsigned int random = LinearFeedbackShift::RandUInt(i);

		std::cout << "Random uint: " << random << '\n';
	}

	std::cout << '\n';

	for (int i = -10; i < 11; i++) {
		int random = LinearFeedbackShift::RandInt(i == 0 ? ++i : i);

		std::cout << "Random int: " << random << '\n';
	}

	system("pause");

	return 0;
}