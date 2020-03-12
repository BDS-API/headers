#pragma once

#include "AttributeBuff.h"
#include <string>
#include <memory>


class TemporalAttributeBuff : AttributeBuff {

public:
    virtual bool isInstantaneous()const;
    virtual bool isSerializable()const;
    virtual void shouldBuff()const;
    ~TemporalAttributeBuff();
    virtual bool isComplete()const;
    virtual void setDurationAmplifier(std::shared_ptr<Amplifier>);
    void tick();
//  TemporalAttributeBuff(float, int, AttributeBuffType, bool, std::string const&); //TODO: incomplete function definition
    void getBaseAmount()const;
    TemporalAttributeBuff(TemporalAttributeBuff const&);
    void serializationSetLifeTime(int);
    void getDuration()const;
    void getLifeTimer()const;
};
