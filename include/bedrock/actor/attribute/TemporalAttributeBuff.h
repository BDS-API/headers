#pragma once

#include <memory>
#include <string>
#include "AttributeBuff.h"


class TemporalAttributeBuff : public AttributeBuff {

public:
    virtual ~TemporalAttributeBuff(); // _ZN21TemporalAttributeBuffD2Ev
    virtual void __fake_function0(); // fake
    virtual bool isInstantaneous()const; // _ZNK21TemporalAttributeBuff15isInstantaneousEv
    virtual bool isSerializable()const; // _ZNK21TemporalAttributeBuff14isSerializableEv
    virtual void setDurationAmplifier(std::shared_ptr<Amplifier>); // _ZN21TemporalAttributeBuff20setDurationAmplifierESt10shared_ptrI9AmplifierE
    virtual bool shouldBuff()const; // _ZNK21TemporalAttributeBuff10shouldBuffEv
    virtual bool isComplete()const; // _ZNK21TemporalAttributeBuff10isCompleteEv
    TemporalAttributeBuff(TemporalAttributeBuff const&); // _ZN21TemporalAttributeBuffC2ERKS_
//    TemporalAttributeBuff(float, int, long, bool, std::string const&); //TODO: incomplete function definition // _ZN21TemporalAttributeBuffC2Efi17AttributeBuffTypebRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getDuration()const; // _ZNK21TemporalAttributeBuff11getDurationEv
    void getLifeTimer()const; // _ZNK21TemporalAttributeBuff12getLifeTimerEv
    void getBaseAmount()const; // _ZNK21TemporalAttributeBuff13getBaseAmountEv
    void serializationSetLifeTime(int); // _ZN21TemporalAttributeBuff24serializationSetLifeTimeEi
    void tick(); // _ZN21TemporalAttributeBuff4tickEv
};
