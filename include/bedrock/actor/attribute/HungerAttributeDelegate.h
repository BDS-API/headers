#pragma once

#include "../Player.h"
#include "./AttributeInstance.h"
#include "./AttributeInstanceDelegate.h"


class HungerAttributeDelegate : AttributeInstanceDelegate {

public:
    virtual ~HungerAttributeDelegate();
    virtual void tick();
    virtual void notify(long);

    HungerAttributeDelegate(AttributeInstance const&, Player *);
};
