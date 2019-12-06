#pragma once

class InstantaneousAttributeBuff : AttributeBuff {

public:
    virtual ~InstantaneousAttributeBuff();
    virtual bool isInstantaneous(void)const;
    virtual bool isSerializable(void)const;

    void InstantaneousAttributeBuff(float, AttributeBuffType);
};
