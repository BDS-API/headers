#pragma once

#include "Amplifier.h"


class ShiftedDurationAmplifier : Amplifier {

public:
    ~ShiftedDurationAmplifier();
    virtual void shouldBuff(int, int)const;
    virtual void getTickInterval(int)const;
    ShiftedDurationAmplifier(int);
};
