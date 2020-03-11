#pragma once

#include "./AttributeBuff.h"


class InstantaneousAttributeBuff : AttributeBuff {

public:
    virtual ~InstantaneousAttributeBuff();
    virtual bool isInstantaneous()const;
    virtual bool isSerializable()const;

//  InstantaneousAttributeBuff(float, AttributeBuffType); //TODO: incomplete function definition
};
