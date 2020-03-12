#pragma once

#include "../../../unmapped/Amplifier.h"
#include "AttributeBuff.h"
#include <string>
#include <memory>


class TemporalAttributeBuff : AttributeBuff {

public:
    virtual void setDurationAmplifier(std::shared_ptr<Amplifier>);
    virtual bool isSerializable()const;
    virtual bool isComplete()const;
    virtual void shouldBuff()const;
    virtual bool isInstantaneous()const;
    ~TemporalAttributeBuff();
//  TemporalAttributeBuff(float, int, AttributeBuffType, bool, std::string const&); //TODO: incomplete function definition
    void tick();
    void getDuration()const;
    void getLifeTimer()const;
    void getBaseAmount()const;
    TemporalAttributeBuff(TemporalAttributeBuff const&);
    void serializationSetLifeTime(int);
};
