#include "TwoComplacent.h"

TwoComplacent::TwoComplacent() {
}

int8_t TwoComplacent::OneToTwo(const uint8_t n) {
	// flip and + 1
	return ~n + 1;
}

uint8_t TwoComplacent::TwoToOne(const int8_t n) {
	return ~(n - 1);
}

TwoComplacent::~TwoComplacent()
{
}
