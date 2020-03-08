#pragma once



class InstantaneousAttributeBuff : AttributeBuff {

public:
    virtual InstantaneousAttributeBuff::~InstantaneousAttributeBuff();
    virtual bool isInstantaneous(void)const;
    virtual bool isSerializable(void)const;

    InstantaneousAttributeBuff(float, AttributeBuffType);
};
