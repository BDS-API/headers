#pragma once

#include "Amplifier.h"


class MultiplyValueAmplifier : Amplifier {

public:
    virtual void getAmount(int, float)const;
    ~MultiplyValueAmplifier();
    MultiplyValueAmplifier(float);
};
