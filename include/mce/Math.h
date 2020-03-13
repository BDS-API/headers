#pragma once

#include "Radian.h"
#include "Degree.h"


namespace mce {

    namespace Math {

        void clamp(int, int, int); // _ZN3mce4Math5clampEiii
        void clamp(float, float, float); // _ZN3mce4Math5clampEfff
        void initMth(); // _ZN3mce4Math7initMthEv
        void sqrt(float); // _ZN3mce4Math4sqrtEf
        void fastInvSqrt(float); // _ZN3mce4Math11fastInvSqrtEf
        void invSqrt(float); // _ZN3mce4Math7invSqrtEf
        void floor(float); // _ZN3mce4Math5floorEf
        void ceil(float); // _ZN3mce4Math4ceilEf
        void cos(mce::Radian); // _ZN3mce4Math3cosENS_6RadianE
        void cos(float); // _ZN3mce4Math3cosEf
        void sin(mce::Radian); // _ZN3mce4Math3sinENS_6RadianE
        void sin(float); // _ZN3mce4Math3sinEf
        void atan(float); // _ZN3mce4Math4atanEf
        void atan2(float, float); // _ZN3mce4Math5atan2Eff
        void safeIncrement(int &); // _ZN3mce4Math13safeIncrementERi
        void fastRandom(); // _ZN3mce4Math10fastRandomEv
        void intFloorDiv(int, int); // _ZN3mce4Math11intFloorDivEii
        bool absDecrease(float, float, float); // _ZN3mce4Math11absDecreaseEfff
        void wrapRadians(float); // _ZN3mce4Math11wrapRadiansEf
        void wrapDegrees(mce::Degree); // _ZN3mce4Math11wrapDegreesENS_6DegreeE
        void wrapDegrees(float); // _ZN3mce4Math11wrapDegreesEf
        void doubleEqualsEpsilon(double, double); // _ZN3mce4Math19doubleEqualsEpsilonEdd
        void floatEqualsEpsilon(float, float); // _ZN3mce4Math18floatEqualsEpsilonEff
        void wrapRadians(float, float); // _ZN3mce4Math11wrapRadiansEff
        void clampRotate(mce::Degree, mce::Degree, mce::Degree); // _ZN3mce4Math11clampRotateENS_6DegreeES1_S1_
        void clampRotate(float, float, float); // _ZN3mce4Math11clampRotateEfff
        void lerpRotate(mce::Degree, mce::Degree, float); // _ZN3mce4Math10lerpRotateENS_6DegreeES1_f
        void lerpRotate(float, float, float); // _ZN3mce4Math10lerpRotateEfff
        bool isNan(float); // _ZN3mce4Math5isNanEf
        bool absMax(float, float); // _ZN3mce4Math6absMaxEff
        bool absMaxSigned(float, float); // _ZN3mce4Math12absMaxSignedEff
        void clampedLerp(float, float, float); // _ZN3mce4Math11clampedLerpEfff
        void signum(float); // _ZN3mce4Math6signumEf
        void wrap(float, float); // _ZN3mce4Math4wrapEff
        void snapRotationToCardinal(float); // _ZN3mce4Math22snapRotationToCardinalEf
//      void calculatePSNRForRGB(gsl::span<unsigned char, -1l>, gsl::span<unsigned char, -1l>, unsigned int, unsigned int, unsigned int, optional_ref<int>, optional_ref<int>, optional_ref<int>); //TODO: incomplete function definition // _ZN3mce4Math19calculatePSNRForRGBEN3gsl4spanIhLln1EEES3_jjj12optional_refIiES5_S5_
//      void calculatePSNRForRGBA(gsl::span<unsigned char, -1l>, gsl::span<unsigned char, -1l>, unsigned int, unsigned int, unsigned int, optional_ref<int>, optional_ref<int>, optional_ref<int>, optional_ref<int>); //TODO: incomplete function definition // _ZN3mce4Math20calculatePSNRForRGBAEN3gsl4spanIhLln1EEES3_jjj12optional_refIiES5_S5_S5_
        void remainder(float, float); // _ZN3mce4Math9remainderEff
        void hermiteBlend(float); // _ZN3mce4Math12hermiteBlendEf
        void log2(float); // _ZN3mce4Math4log2Ef
        void log2(unsigned int); // _ZN3mce4Math4log2Ej
        bool degreesDifference(float, float); // _ZN3mce4Math17degreesDifferenceEff
        bool degreesDifferenceAbs(float, float); // _ZN3mce4Math20degreesDifferenceAbsEff
        void approach(float, float, float); // _ZN3mce4Math8approachEfff
        void approachDegrees(float, float, float); // _ZN3mce4Math15approachDegreesEfff
        void acos_approx(float); // _ZN3mce4Math11acos_approxEf
    };
}
