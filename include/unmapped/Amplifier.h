#pragma once



class Amplifier {

public:
    ~Amplifier(); // _ZN9AmplifierD2Ev
    virtual void getAmount(int, float)const; // _ZNK9Amplifier9getAmountEif
    virtual void shouldBuff(int, int)const; // _ZNK9Amplifier10shouldBuffEii
    virtual void getTickInterval(int)const; // _ZNK9Amplifier15getTickIntervalEi
    Amplifier(); // _ZN9AmplifierC2Ev
};
