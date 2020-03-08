#pragma once



class ShiftedValueAmplifier : Amplifier {

public:
    virtual ShiftedValueAmplifier::~ShiftedValueAmplifier()
    virtual void getAmount(int, float)const;

    ShiftedValueAmplifier(int, float);
};
