#pragma once

#include "Degree.h"
#include "Radian.h"


namespace mce {

    namespace Math {

//      void calculatePSNRForRGBA(gsl::span<unsigned char, -1l>, gsl::span<unsigned char, -1l>, unsigned int, unsigned int, unsigned int, optional_ref<int>, optional_ref<int>, optional_ref<int>, optional_ref<int>); //TODO: incomplete function definition
        void wrapRadians(float, float);
        void clampRotate(mce::Degree, mce::Degree, mce::Degree);
        void wrapRadians(float);
        void floor(float);
        void hermiteBlend(float);
        void sin(mce::Radian);
        void approach(float, float, float);
//      void calculatePSNRForRGB(gsl::span<unsigned char, -1l>, gsl::span<unsigned char, -1l>, unsigned int, unsigned int, unsigned int, optional_ref<int>, optional_ref<int>, optional_ref<int>); //TODO: incomplete function definition
        void acos_approx(float);
        void cos(mce::Radian);
        void cos(float);
        void lerpRotate(float, float, float);
        void clamp(int, int, int);
        bool isNan(float);
        void wrapDegrees(float);
        void clampRotate(float, float, float);
        void approachDegrees(float, float, float);
        bool absMax(float, float);
        void doubleEqualsEpsilon(double, double);
        void invSqrt(float);
        void fastInvSqrt(float);
        void ceil(float);
        void wrapDegrees(mce::Degree);
        void signum(float);
        bool degreesDifferenceAbs(float, float);
        void snapRotationToCardinal(float);
        void floatEqualsEpsilon(float, float);
        void clampedLerp(float, float, float);
        void atan(float);
        void safeIncrement(int &);
        void clamp(float, float, float);
        void fastRandom();
        void atan2(float, float);
        void remainder(float, float);
        bool absMaxSigned(float, float);
        void log2(unsigned int);
        bool absDecrease(float, float, float);
        bool degreesDifference(float, float);
        void sqrt(float);
        void wrap(float, float);
        void sin(float);
        void intFloorDiv(int, int);
        void lerpRotate(mce::Degree, mce::Degree, float);
        void initMth();
        void log2(float);
    };
}
