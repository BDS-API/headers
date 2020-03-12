#pragma once

#include "AttributeBuff.h"


class InstantaneousAttributeBuff : AttributeBuff {

public:
    ~InstantaneousAttributeBuff();
    virtual bool isInstantaneous()const;
    virtual bool isSerializable()const;
//  InstantaneousAttributeBuff(float, AttributeBuffType); //TODO: incomplete function definition
};
