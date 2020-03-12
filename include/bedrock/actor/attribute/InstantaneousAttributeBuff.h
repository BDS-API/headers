#pragma once

#include "AttributeBuff.h"


class InstantaneousAttributeBuff : AttributeBuff {

public:
    virtual bool isSerializable()const;
    ~InstantaneousAttributeBuff();
    virtual bool isInstantaneous()const;
//  InstantaneousAttributeBuff(float, AttributeBuffType); //TODO: incomplete function definition
};
