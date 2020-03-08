#pragma once



class ShiftedValueAmplifier : Amplifier {

public:
    ShiftedValueAmplifier::~ShiftedValueAmplifier()
    virtual void getAmount(int, float)const;

    ShiftedValueAmplifier(int, float);
};
