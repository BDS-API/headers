#pragma once



class ShiftedDurationAmplifier : Amplifier {

public:
    virtual ShiftedDurationAmplifier::~ShiftedDurationAmplifier()
    virtual void shouldBuff(int, int)const;
    virtual void getTickInterval(int)const;

    ShiftedDurationAmplifier(int);
};
