#pragma once

#include "AttributeInstanceDelegate.h"
#include "AttributeBuffInfo.h"
#include "../Mob.h"
#include "AttributeInstance.h"
#include "AttributeBuff.h"


class HealthAttributeDelegate : AttributeInstanceDelegate {

public:
    virtual void getBuffValue(AttributeBuff const&)const;
    ~HealthAttributeDelegate();
    virtual void change(float, float, AttributeBuffInfo);
    virtual void tick();
    HealthAttributeDelegate(AttributeInstance const&, Mob *);
};
