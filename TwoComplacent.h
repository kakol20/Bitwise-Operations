#ifndef TWOCOMPLACENT_H
#define TWOCOMPLACENT_H

#include <cstdint>

class TwoComplacent {
public:
	TwoComplacent();

	static int8_t OneToTwo(const uint8_t n);
	static uint8_t TwoToOne(const int8_t n);

	~TwoComplacent();

private:
};

#endif // !TWOCOMPLACENT_H
