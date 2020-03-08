#pragma once



class InstantaneousAttributeBuff : AttributeBuff {

public:
    InstantaneousAttributeBuff::~InstantaneousAttributeBuff()
    virtual bool isInstantaneous()const;
    virtual bool isSerializable()const;

    InstantaneousAttributeBuff(float, AttributeBuffType);
};
