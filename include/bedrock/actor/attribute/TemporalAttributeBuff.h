#pragma once

#include "./AttributeBuff.h"
#include "../../../unmapped/Amplifier.h"
#include "./TemporalAttributeBuff.h"
#include <memory>
#include <string>


class TemporalAttributeBuff : AttributeBuff {

public:
    virtual ~TemporalAttributeBuff();
    virtual bool isInstantaneous()const;
    virtual bool isSerializable()const;
    virtual void setDurationAmplifier(std::shared_ptr<Amplifier>);
    virtual void shouldBuff()const;
    virtual bool isComplete()const;

    TemporalAttributeBuff(TemporalAttributeBuff const&);
//  TemporalAttributeBuff(float, int, AttributeBuffType, bool, std::string const&); //TODO: incomplete function definition
    void getDuration()const;
    void getLifeTimer()const;
    void getBaseAmount()const;
    void serializationSetLifeTime(int);
    void tick();
};
