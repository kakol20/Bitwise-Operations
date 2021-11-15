#ifndef LINEARFEEDBACKSHIFT_H
#define LINEARFEEDBACKSHIFT_H

#include <ctime>

class LinearFeedbackShift {
public:
	LinearFeedbackShift();

	static int RandInt(const int seed);
	static unsigned int RandUInt();
	static unsigned int RandUInt(const unsigned int seed);

	~LinearFeedbackShift();

private:
};

#endif // !LINEARFEADBACKSHIFT_H
