#pragma once



class InstantaneousAttributeBuff : AttributeBuff {

public:
    virtual InstantaneousAttributeBuff::~InstantaneousAttributeBuff()
    virtual bool isInstantaneous()const;
    virtual bool isSerializable()const;

    InstantaneousAttributeBuff(float, AttributeBuffType);
};
