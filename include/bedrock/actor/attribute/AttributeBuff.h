#pragma once

#include "./AttributeBuff.h"
#include <memory>
#include "../../../unmapped/Amplifier.h"
#include "../Actor.h"


class AttributeBuff {

public:
    virtual ~AttributeBuff();
    virtual void setDurationAmplifier(std::shared_ptr<Amplifier>);

    AttributeBuff(AttributeBuff const&);
//  AttributeBuff(float, int, AttributeBuffType); //TODO: incomplete function definition
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
    void operator==(AttributeBuff const&)const;
//  void buffTypeToDamageCause(AttributeBuffType); //TODO: incomplete function definition
};
