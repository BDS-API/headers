#pragma once

#include "../../../unmapped/Amplifier"


class TemporalAttributeBuff : AttributeBuff {

public:
    virtual TemporalAttributeBuff::~TemporalAttributeBuff();
    virtual bool isInstantaneous(void)const;
    virtual bool isSerializable(void)const;
    virtual void setDurationAmplifier(std::shared_ptr<Amplifier>);
    virtual void shouldBuff(void)const;
    virtual bool isComplete(void)const;

    TemporalAttributeBuff(TemporalAttributeBuff const&);
    TemporalAttributeBuff(float, int, AttributeBuffType, bool, std::string const&);
    void getDuration(void)const;
    void getLifeTimer(void)const;
    void getBaseAmount(void)const;
    void serializationSetLifeTime(int);
    void tick(void);
};
