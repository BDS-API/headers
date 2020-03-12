#pragma once



class Amplifier {

public:
    virtual void getTickInterval(int)const;
    virtual void shouldBuff(int, int)const;
    virtual void getAmount(int, float)const;
    ~Amplifier();
    Amplifier();
};
