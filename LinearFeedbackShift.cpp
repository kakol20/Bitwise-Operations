#include "LinearFeedbackShift.h"

#include <limits>

LinearFeedbackShift::LinearFeedbackShift() {
}

//float LinearFeedbackShift::RandF() {
//    std::time_t result = time(nullptr);
//    unsigned long int state = static_cast<unsigned long int>(result);
//
//    unsigned int out = 0;
//
//    // 64,63,61,60
//    for (int i = 31; i >= 0; i--) {
//        out = out | ((state & 0b1) << i);
//
//        unsigned long int newbit = state ^ (state >> 60) ^ (state >> 61) ^ (state >> 63);
//        newbit = newbit & 0b1;
//
//        state = (state >> 0b1) | (newbit << 63);
//    }
//
//    return (float)out / (float)UINT_MAX;;
//}

float LinearFeedbackShift::RandF(const unsigned int seed) {
	unsigned int state = seed;
	unsigned int out = 0;

	// 32,22,2,1
	for (int i = 31; i >= 0; i--) {
		out = out | ((state & 0b1) << i);

		int newbit = state ^ (state >> 1) ^ (state >> 2) ^ (state >> 22);
		newbit = newbit & 0b1;

		state = (state >> 0b1) | (newbit << 31);
	}

	return (float)out / (float)UINT_MAX;
}

float LinearFeedbackShift::RandFRange(const float min, const float max, const unsigned int seed) {
	float difference = max - min;
	float random = LinearFeedbackShift::RandF(seed);
	return (difference * random) + min;
}

int LinearFeedbackShift::RandInt(const int seed) {
	int state = seed;
	int out = 0;

	// 32,22,2,1
	for (int i = 31; i >= 0; i--) {
		out = out | ((state & 0b1) << i);

		int newbit = state ^ (state >> 1) ^ (state >> 2) ^ (state >> 22);
		newbit = newbit & 0b1;

		state = (state >> 0b1) | (newbit << 31);
	}

	return out;
}

//unsigned int LinearFeedbackShift::RandUInt() {
//    std::time_t result = time(nullptr);
//    unsigned long int state = static_cast<unsigned long int>(result);
//
//    //std::cout << sizeof(unsigned long int) << std::endl;
//
//    unsigned int out = 0;
//
//    // 64,63,61,60
//    for (int i = 31; i >= 0; i--) {
//        out = out | ((state & 0b1) << i);
//
//        unsigned long int newbit = state ^ (state >> 60) ^ (state >> 61) ^ (state >> 63);
//        newbit = newbit & 0b1;
//
//        state = (state >> 0b1) | (newbit << 63);
//    }
//
//	return out;
//}

unsigned int LinearFeedbackShift::RandUInt(const unsigned int seed) {
	unsigned int state = seed;
	unsigned int out = 0;

	// 32,22,2,1
	for (int i = 31; i >= 0; i--) {
		out = out | ((state & 0b1) << i);

		unsigned int newbit = state ^ (state >> 1) ^ (state >> 2) ^ (state >> 22);
		newbit = newbit & 0b1;

		state = (state >> 0b1) | (newbit << 31);
	}
	return out;
}

LinearFeedbackShift::~LinearFeedbackShift() {
}