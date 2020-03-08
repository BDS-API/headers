#pragma once

#include "../Mob"


class HealthAttributeDelegate : AttributeInstanceDelegate {

public:
    virtual HealthAttributeDelegate::~HealthAttributeDelegate()
    virtual void tick();
    virtual void change(float, float, AttributeBuffInfo);
    virtual void getBuffValue(AttributeBuff const&)const;

    HealthAttributeDelegate(AttributeInstance const&, Mob *);
};
