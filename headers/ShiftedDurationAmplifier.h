#pragma once

class ShiftedDurationAmplifier : Amplifier {

public:
    virtual ~ShiftedDurationAmplifier();
    virtual void shouldBuff(int, int)const;
    virtual void getTickInterval(int)const;

    void ShiftedDurationAmplifier(int);
};
