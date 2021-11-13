#include "SevenSegmentDisplay.h"

SevenSegmentDisplay::SevenSegmentDisplay() {
}

uint8_t SevenSegmentDisplay::Decode4Bit(const int8_t bits) {
	return SevenSegmentDisplay::Decode4Bit(static_cast<uint8_t>(bits));
}

uint8_t SevenSegmentDisplay::Decode4Bit(const uint8_t bits) {
	// check if negative
	bool negative = (bits & 0b1000) == 0b1000;

	uint8_t bit4 = bits;
	uint8_t output = 0;

	// get absolute value if negative
	if (negative) {
		bit4 = ~(bit4 - 1);

		output = 0b10000000;
	}
	
	// get individual bits as booleans
	bool A = (bit4 & 0b1000) == 0b1000;;
	bool B = (bit4 & 0b100) == 0b100;
	bool C = (bit4 & 0b10) == 0b10;
	bool D = (bit4 & 0b1) == 0b1;

	// ----- DECODE -----
	// pabcdefg
	// p = sign indicator

	bool a = C || (!B && !D) || (B && D);
	bool b = !B || (!C && !D) || (C && D);
	bool c = !C || D || B;
	bool d = (!B && !D) || (!B && C) || (C && !D) || (B && !C && D);
	bool e = (!B && !D) || (C && !D);
	bool f = (!C && !D) || (B && !C) || (B && !D);
	bool g = A || (!B && C) || (C && !D) || (B && !C);

	if (a) output = output | 0b1000000;
	if (b) output = output | 0b100000;
	if (c) output = output | 0b10000;
	if (d) output = output | 0b1000;
	if (e) output = output | 0b100;
	if (f) output = output | 0b10;
	if (g) output = output | 0b1;

	return output;
}

SevenSegmentDisplay::~SevenSegmentDisplay() {
}
