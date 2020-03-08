#pragma once



using namespace mce;

class Math {

public:

    void clamp(int, int, int);
    void clamp(float, float, float);
    void initMth();
    void sqrt(float);
    void fastInvSqrt(float);
    void invSqrt(float);
    void floor(float);
    void ceil(float);
    void cos(mce::Radian);
    void cos(float);
    void sin(mce::Radian);
    void sin(float);
    void atan(float);
    void atan2(float, float);
    void safeIncrement(int &);
    void fastRandom();
    void intFloorDiv(int, int);
    bool absDecrease(float, float, float);
    void wrapRadians(float);
    void wrapDegrees(mce::Degree);
    void wrapDegrees(float);
    void doubleEqualsEpsilon(double, double);
    void floatEqualsEpsilon(float, float);
    void wrapRadians(float, float);
    void clampRotate(mce::Degree, mce::Degree, mce::Degree);
    void clampRotate(float, float, float);
    void lerpRotate(mce::Degree, mce::Degree, float);
    void lerpRotate(float, float, float);
    bool isNan(float);
    bool absMax(float, float);
    bool absMaxSigned(float, float);
    void clampedLerp(float, float, float);
    void signum(float);
    void wrap(float, float);
    void snapRotationToCardinal(float);
    void calculatePSNRForRGB(gsl::span<unsigned char, -1l>, gsl::span<unsigned char, -1l>, unsigned int, unsigned int, unsigned int, optional_ref<int>, optional_ref<int>, optional_ref<int>);
    void calculatePSNRForRGBA(gsl::span<unsigned char, -1l>, gsl::span<unsigned char, -1l>, unsigned int, unsigned int, unsigned int, optional_ref<int>, optional_ref<int>, optional_ref<int>, optional_ref<int>);
    void remainder(float, float);
    void hermiteBlend(float);
    void log2(float);
    void log2(unsigned int);
    bool degreesDifference(float, float);
    bool degreesDifferenceAbs(float, float);
    void approach(float, float, float);
    void approachDegrees(float, float, float);
    void acos_approx(float);
};
