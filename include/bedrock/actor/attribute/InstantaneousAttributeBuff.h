#pragma once

#include "AttributeBuff.h"


class InstantaneousAttributeBuff : public AttributeBuff {

public:
    virtual ~InstantaneousAttributeBuff(); // _ZN26InstantaneousAttributeBuffD2Ev
    virtual void __fake_function0(); // fake
    virtual bool isInstantaneous()const; // _ZNK26InstantaneousAttributeBuff15isInstantaneousEv
    virtual bool isSerializable()const; // _ZNK26InstantaneousAttributeBuff14isSerializableEv
//    InstantaneousAttributeBuff(float, long); //TODO: incomplete function definition // _ZN26InstantaneousAttributeBuffC2Ef17AttributeBuffType
};
