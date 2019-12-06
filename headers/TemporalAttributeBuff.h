#pragma once

class TemporalAttributeBuff : AttributeBuff {

public:
    virtual ~TemporalAttributeBuff();
    virtual bool isInstantaneous(void)const;
    virtual bool isSerializable(void)const;
    virtual void setDurationAmplifier(std::shared_ptr<Amplifier>);
    virtual void shouldBuff(void)const;
    virtual bool isComplete(void)const;

    void TemporalAttributeBuff(TemporalAttributeBuff const&);
    void TemporalAttributeBuff(float, int, AttributeBuffType, bool, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void getDuration(void)const;
    void getLifeTimer(void)const;
    void getBaseAmount(void)const;
    void serializationSetLifeTime(int);
    void tick(void);
};
