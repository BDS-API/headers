#pragma once

class AttributeBuff {

public:
    virtual AttributeBuff::~AttributeBuff();
    virtual void setDurationAmplifier(std::shared_ptr<Amplifier>);

    AttributeBuff(AttributeBuff const&);
    AttributeBuff(float, int, AttributeBuffType);
    void getAmount(void)const;
    void getType(void)const;
    void getInfo(void)const;
    void setValueAmplifier(std::shared_ptr<Amplifier>);
    void setAmplificationAmount(int, float);
    void setSource(Actor *);
    void getId(void)const;
    void setId(unsigned long);
    void getOperand(void)const;
    void setOperand(int);
    void buffTypeToDamageCause(AttributeBuffType);
};
