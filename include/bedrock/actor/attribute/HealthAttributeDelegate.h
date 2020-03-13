#pragma once

#include "AttributeInstanceDelegate.h"
#include "AttributeBuffInfo.h"


class HealthAttributeDelegate : AttributeInstanceDelegate {

public:
    ~HealthAttributeDelegate(); // _ZN23HealthAttributeDelegateD2Ev
    virtual void tick(); // _ZN23HealthAttributeDelegate4tickEv
    virtual void change(float, float, AttributeBuffInfo); // _ZN23HealthAttributeDelegate6changeEff17AttributeBuffInfo
    virtual void getBuffValue(AttributeBuff const&)const; // _ZNK23HealthAttributeDelegate12getBuffValueERK13AttributeBuff
    HealthAttributeDelegate(AttributeInstance const&, Mob *); // _ZN23HealthAttributeDelegateC2ERK17AttributeInstanceP3Mob
};
