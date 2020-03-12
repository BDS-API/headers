#pragma once



class Amplifier {

public:
    virtual void shouldBuff(int, int)const;
    virtual void getAmount(int, float)const;
    ~Amplifier();
    virtual void getTickInterval(int)const;
    Amplifier();
};
