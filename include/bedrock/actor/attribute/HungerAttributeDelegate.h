#pragma once

#include "AttributeInstance.h"
#include "AttributeInstanceDelegate.h"
#include "../Player.h"


class HungerAttributeDelegate : AttributeInstanceDelegate {

public:
    ~HungerAttributeDelegate();
    virtual void notify(long);
    virtual void tick();
    HungerAttributeDelegate(AttributeInstance const&, Player *);
};
