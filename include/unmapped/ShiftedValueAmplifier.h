#pragma once

#include "./Amplifier.h"


class ShiftedValueAmplifier : Amplifier {

public:
    virtual ~ShiftedValueAmplifier();
    virtual void getAmount(int, float)const;

    ShiftedValueAmplifier(int, float);
};
