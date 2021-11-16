#include <iostream>
#include <bitset>
#include <ctime>
//#include <chrono>

#include "TwoComplacent.h"
#include "SevenSegmentDisplay.h"
#include "LinearFeedbackShift.h"

//TwoComplacent Complacent;
unsigned int LinearFeedbackShift::Seed = 0;

int main() {
	// get current time
	std::time_t currentTime = time(0);
	unsigned int currentTimeUInt = static_cast<unsigned int>(currentTime);
	LinearFeedbackShift::Seed = currentTimeUInt;

	// -----
	int8_t a = TwoComplacent::OneToTwo(0b10110111);
	uint8_t b = TwoComplacent::TwoToOne(a);

	std::cout << std::bitset<8>(a) << '\n';
	std::cout << std::bitset<8>(b) << '\n' << '\n';

	// test static cast
	int8_t c = -5;
	uint8_t d = static_cast<uint8_t>(c);

	std::cout << std::bitset<8>(c) << '\n';
	std::cout << std::bitset<8>(d) << '\n';
	std::cout << static_cast<int>(d) << '\n' << '\n';

	// seven segment display
	int8_t e = -1;
	uint8_t ssd = SevenSegmentDisplay::Decode4Bit(e);

	std::cout << std::bitset<8>(e) << '\n';
	std::cout << std::bitset<8>(ssd) << '\n' << '\n';
	//std::cout << delta << '\n';

	// linear feedback shift register

	for (int i = 0; i < 20; i++) {
		currentTimeUInt++;

		unsigned int random = LinearFeedbackShift::RandUInt();

		std::cout << "Random uint: " << random << '\n';
	}
	std::cout << '\n';

	for (int i = 0; i < 20; i++) {
		currentTimeUInt++;

		int random = LinearFeedbackShift::RandInt();

		std::cout << "Random int: " << random << '\n';
	}
	std::cout << '\n';

	for (int i = 0; i < 20; i++) {
		currentTimeUInt++;

		float random = LinearFeedbackShift::RandF();

		std::cout << "Random float: " << random << '\n';
	}
	std::cout << '\n';

	system("pause");

	return 0;
}