#pragma once

#include "../Player"


class HungerAttributeDelegate : AttributeInstanceDelegate {

public:
    virtual HungerAttributeDelegate::~HungerAttributeDelegate()
    virtual void tick();
    virtual void notify(long);

    HungerAttributeDelegate(AttributeInstance const&, Player *);
};
