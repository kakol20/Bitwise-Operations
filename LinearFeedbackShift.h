#ifndef LINEARFEEDBACKSHIFT_H
#define LINEARFEEDBACKSHIFT_H

class LinearFeedbackShift {
public:
	LinearFeedbackShift();

	//static float RandF();
	static float RandF(const unsigned int seed);
	static float RandFRange(const float min, const float max, const unsigned int seed);
	static int RandInt(const int seed);
	//static unsigned int RandUInt();
	static unsigned int RandUInt(const unsigned int seed);

	~LinearFeedbackShift();

private:
};

#endif // !LINEARFEADBACKSHIFT_H
