#pragma once

#include "../Actor.h"
#include "../../../unmapped/Amplifier.h"
#include <memory>


class AttributeBuff {

public:
    ~AttributeBuff();
    virtual void setDurationAmplifier(std::shared_ptr<Amplifier>);
    AttributeBuff(AttributeBuff const&);
    void setSource(Actor *);
//  void buffTypeToDamageCause(AttributeBuffType); //TODO: incomplete function definition
    void operator==(AttributeBuff const&)const;
    void setOperand(int);
//  AttributeBuff(float, int, AttributeBuffType); //TODO: incomplete function definition
    void getId()const;
    void setId(unsigned long);
    void getOperand()const;
    void getAmount()const;
    void setAmplificationAmount(int, float);
    void getType()const;
    void setValueAmplifier(std::shared_ptr<Amplifier>);
    void getInfo()const;
};
