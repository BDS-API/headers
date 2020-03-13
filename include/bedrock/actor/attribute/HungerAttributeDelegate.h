#pragma once

#include "AttributeInstanceDelegate.h"


class HungerAttributeDelegate : AttributeInstanceDelegate {

public:
    ~HungerAttributeDelegate(); // _ZN23HungerAttributeDelegateD2Ev
    virtual void tick(); // _ZN23HungerAttributeDelegate4tickEv
    virtual void notify(long); // _ZN23HungerAttributeDelegate6notifyEl
    HungerAttributeDelegate(AttributeInstance const&, Player *); // _ZN23HungerAttributeDelegateC2ERK17AttributeInstanceP6Player
};
