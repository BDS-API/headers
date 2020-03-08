#pragma once

#include "../../../unmapped/Amplifier"


class TemporalAttributeBuff : AttributeBuff {

public:
    virtual TemporalAttributeBuff::~TemporalAttributeBuff()
    virtual bool isInstantaneous()const;
    virtual bool isSerializable()const;
    virtual void setDurationAmplifier(std::shared_ptr<Amplifier>);
    virtual void shouldBuff()const;
    virtual bool isComplete()const;

    TemporalAttributeBuff(TemporalAttributeBuff const&);
    TemporalAttributeBuff(float, int, AttributeBuffType, bool, std::string const&);
    void getDuration()const;
    void getLifeTimer()const;
    void getBaseAmount()const;
    void serializationSetLifeTime(int);
    void tick();
};
