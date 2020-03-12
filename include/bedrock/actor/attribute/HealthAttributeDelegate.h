#pragma once

#include "AttributeInstanceDelegate.h"
#include "AttributeBuffInfo.h"


class HealthAttributeDelegate : AttributeInstanceDelegate {

public:
    ~HealthAttributeDelegate();
    virtual void getBuffValue(AttributeBuff const&)const;
    virtual void tick();
    virtual void change(float, float, AttributeBuffInfo);
    HealthAttributeDelegate(AttributeInstance const&, Mob *);
};
