#pragma once

#include <memory>


class AttributeBuff {

public:
    ~AttributeBuff();
    virtual void setDurationAmplifier(std::shared_ptr<Amplifier>);
    AttributeBuff(AttributeBuff const&);
    void setId(unsigned long);
    void getInfo()const;
    void setValueAmplifier(std::shared_ptr<Amplifier>);
    void setAmplificationAmount(int, float);
    void getAmount()const;
//  AttributeBuff(float, int, AttributeBuffType); //TODO: incomplete function definition
    void setSource(Actor *);
    void operator==(AttributeBuff const&)const;
//  void buffTypeToDamageCause(AttributeBuffType); //TODO: incomplete function definition
    void setOperand(int);
    void getType()const;
    void getId()const;
    void getOperand()const;
};
