#pragma once

class TemporalAttributeBuff : AttributeBuff {

    virtual void TemporalAttributeBuff::~TemporalAttributeBuff();
    virtual void TemporalAttributeBuff::~TemporalAttributeBuff();
    virtual void isInstantaneous(void)const;
    virtual void isSerializable(void)const;
    virtual void setDurationAmplifier(std::shared_ptr<Amplifier>);
    virtual void shouldBuff(void)const;
    virtual void isComplete(void)const;
}
