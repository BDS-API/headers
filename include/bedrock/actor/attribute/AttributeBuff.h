#pragma once

#include "../Actor"
#include "../../../unmapped/Amplifier"


class AttributeBuff {

public:
    virtual AttributeBuff::~AttributeBuff()
    virtual void setDurationAmplifier(std::shared_ptr<Amplifier>);

    AttributeBuff(AttributeBuff const&);
    AttributeBuff(float, int, AttributeBuffType);
    void getAmount()const;
    void getType()const;
    void getInfo()const;
    void setValueAmplifier(std::shared_ptr<Amplifier>);
    void setAmplificationAmount(int, float);
    void setSource(Actor *);
    void getId()const;
    void setId(unsigned long);
    void getOperand()const;
    void setOperand(int);
    void buffTypeToDamageCause(AttributeBuffType);
};
