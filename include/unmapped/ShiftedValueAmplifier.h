#pragma once

#include "Amplifier.h"


class ShiftedValueAmplifier : Amplifier {

public:
    virtual void getAmount(int, float)const;
    ~ShiftedValueAmplifier();
    ShiftedValueAmplifier(int, float);
};
