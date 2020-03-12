#pragma once

#include "Radian.h"
#include "Degree.h"


namespace mce {

    namespace Math {

        void clamp(int, int, int);
        void sqrt(float);
        void wrapRadians(float);
        void cos(mce::Radian);
        void wrap(float, float);
        void sin(float);
        void acos_approx(float);
//      void calculatePSNRForRGBA(gsl::span<unsigned char, -1l>, gsl::span<unsigned char, -1l>, unsigned int, unsigned int, unsigned int, optional_ref<int>, optional_ref<int>, optional_ref<int>, optional_ref<int>); //TODO: incomplete function definition
        void initMth();
        void safeIncrement(int &);
        void log2(unsigned int);
        void wrapDegrees(mce::Degree);
        void floor(float);
        void invSqrt(float);
        void approachDegrees(float, float, float);
        void ceil(float);
        void clampRotate(mce::Degree, mce::Degree, mce::Degree);
        bool absMaxSigned(float, float);
        void fastInvSqrt(float);
        void sin(mce::Radian);
        void fastRandom();
        bool degreesDifference(float, float);
        void clampRotate(float, float, float);
        void wrapDegrees(float);
        void signum(float);
        void cos(float);
        void hermiteBlend(float);
        bool absDecrease(float, float, float);
//      void calculatePSNRForRGB(gsl::span<unsigned char, -1l>, gsl::span<unsigned char, -1l>, unsigned int, unsigned int, unsigned int, optional_ref<int>, optional_ref<int>, optional_ref<int>); //TODO: incomplete function definition
        void remainder(float, float);
        void atan2(float, float);
        void log2(float);
        void atan(float);
        void clamp(float, float, float);
        void floatEqualsEpsilon(float, float);
        bool degreesDifferenceAbs(float, float);
        void clampedLerp(float, float, float);
        void intFloorDiv(int, int);
        bool absMax(float, float);
        void lerpRotate(mce::Degree, mce::Degree, float);
        void snapRotationToCardinal(float);
        void doubleEqualsEpsilon(double, double);
        void approach(float, float, float);
        void lerpRotate(float, float, float);
        bool isNan(float);
        void wrapRadians(float, float);
    };
}
