#pragma once

#include "Amplifier.h"


class MultiplyValueAmplifier : Amplifier {

public:
    ~MultiplyValueAmplifier();
    virtual void getAmount(int, float)const;
    MultiplyValueAmplifier(float);
};
