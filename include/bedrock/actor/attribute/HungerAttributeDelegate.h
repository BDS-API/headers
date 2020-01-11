#pragma once

class HungerAttributeDelegate : AttributeInstanceDelegate {

public:
    virtual HungerAttributeDelegate::~HungerAttributeDelegate();
    virtual void tick(void);
    virtual void notify(long);

    HungerAttributeDelegate(AttributeInstance const&, Player *);
};
