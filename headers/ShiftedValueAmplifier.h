#pragma once

class ShiftedValueAmplifier : Amplifier {

public:
    virtual ~ShiftedValueAmplifier();
    virtual void getAmount(int, float)const;

    void ShiftedValueAmplifier(int, float);
};
