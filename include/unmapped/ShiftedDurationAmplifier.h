#pragma once

#include "Amplifier.h"


class ShiftedDurationAmplifier : public Amplifier {

public:
    virtual ~ShiftedDurationAmplifier(); // _ZN24ShiftedDurationAmplifierD2Ev
    virtual void __fake_function0(); // fake
    virtual bool shouldBuff(int, int)const; // _ZNK24ShiftedDurationAmplifier10shouldBuffEii
    virtual void getTickInterval(int)const; // _ZNK24ShiftedDurationAmplifier15getTickIntervalEi
    ShiftedDurationAmplifier(int); // _ZN24ShiftedDurationAmplifierC2Ei
};
