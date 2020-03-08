#pragma once



class Amplifier {

public:
    virtual Amplifier::~Amplifier()
    virtual void getAmount(int, float)const;
    virtual void shouldBuff(int, int)const;
    virtual void getTickInterval(int)const;

    Amplifier(void);
};
