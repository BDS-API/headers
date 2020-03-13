#pragma once

#include "Amplifier.h"


class MultiplyValueAmplifier : Amplifier {

public:
    ~MultiplyValueAmplifier(); // _ZN22MultiplyValueAmplifierD2Ev
    virtual void getAmount(int, float)const; // _ZNK22MultiplyValueAmplifier9getAmountEif
    MultiplyValueAmplifier(float); // _ZN22MultiplyValueAmplifierC2Ef
};
