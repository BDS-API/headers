#pragma once

#include "AttributeInstanceDelegate.h"


class HungerAttributeDelegate : AttributeInstanceDelegate {

public:
    virtual void notify(long);
    virtual void tick();
    ~HungerAttributeDelegate();
    HungerAttributeDelegate(AttributeInstance const&, Player *);
};
