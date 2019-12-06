#pragma once

class MultiplyValueAmplifier : Amplifier {

public:
    virtual ~MultiplyValueAmplifier();
    virtual void getAmount(int, float)const;

    void MultiplyValueAmplifier(float);
};
