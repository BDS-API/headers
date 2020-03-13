#pragma once

#include "AttributeBuff.h"


class InstantaneousAttributeBuff : AttributeBuff {

public:
    ~InstantaneousAttributeBuff(); // _ZN26InstantaneousAttributeBuffD2Ev
    virtual bool isInstantaneous()const; // _ZNK26InstantaneousAttributeBuff15isInstantaneousEv
    virtual bool isSerializable()const; // _ZNK26InstantaneousAttributeBuff14isSerializableEv
//  InstantaneousAttributeBuff(float, AttributeBuffType); //TODO: incomplete function definition // _ZN26InstantaneousAttributeBuffC2Ef17AttributeBuffType
};
