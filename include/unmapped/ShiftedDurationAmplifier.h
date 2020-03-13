#pragma once

#include "Amplifier.h"


class ShiftedDurationAmplifier : Amplifier {

public:
    ~ShiftedDurationAmplifier(); // _ZN24ShiftedDurationAmplifierD2Ev
    virtual void shouldBuff(int, int)const; // _ZNK24ShiftedDurationAmplifier10shouldBuffEii
    virtual void getTickInterval(int)const; // _ZNK24ShiftedDurationAmplifier15getTickIntervalEi
    ShiftedDurationAmplifier(int); // _ZN24ShiftedDurationAmplifierC2Ei
};
