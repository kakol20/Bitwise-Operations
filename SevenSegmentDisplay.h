#ifndef SEVENSEGMENTDISPLAY_H
#define SEVENSEGMENTDISPLAY_H

#include <cstdint>

class SevenSegmentDisplay {
public:
	SevenSegmentDisplay();

	static uint8_t Decode4Bit(const int8_t bits);
	static uint8_t Decode4Bit(const uint8_t bits);

	~SevenSegmentDisplay();

private:
};

#endif // !SEVENSEGMENTDISPLAY_H
