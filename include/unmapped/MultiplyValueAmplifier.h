#pragma once



class MultiplyValueAmplifier : Amplifier {

public:
    virtual MultiplyValueAmplifier::~MultiplyValueAmplifier()
    virtual void getAmount(int, float)const;

    MultiplyValueAmplifier(float);
};
