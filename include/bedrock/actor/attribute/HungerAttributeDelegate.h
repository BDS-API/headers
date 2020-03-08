#pragma once

#include "../Player"


class HungerAttributeDelegate : AttributeInstanceDelegate {

public:
    HungerAttributeDelegate::~HungerAttributeDelegate()
    virtual void tick();
    virtual void notify(long);

    HungerAttributeDelegate(AttributeInstance const&, Player *);
};
