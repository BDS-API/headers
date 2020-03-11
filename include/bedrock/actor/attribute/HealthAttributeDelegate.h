#pragma once

#include "./AttributeBuff.h"
#include "./AttributeInstanceDelegate.h"
#include "./AttributeBuffInfo.h"
#include "./AttributeInstance.h"
#include "../Mob.h"


class HealthAttributeDelegate : AttributeInstanceDelegate {

public:
    virtual ~HealthAttributeDelegate();
    virtual void tick();
    virtual void change(float, float, AttributeBuffInfo);
    virtual void getBuffValue(AttributeBuff const&)const;

    HealthAttributeDelegate(AttributeInstance const&, Mob *);
};
