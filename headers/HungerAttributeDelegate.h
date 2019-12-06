#pragma once

class HungerAttributeDelegate : AttributeInstanceDelegate {

public:
    virtual ~HungerAttributeDelegate();
    virtual void tick(void);
    virtual void notify(long);

    void HungerAttributeDelegate(AttributeInstance const&, Player *);
};
