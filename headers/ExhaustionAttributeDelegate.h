#pragma once

class ExhaustionAttributeDelegate : AttributeInstanceDelegate {

public:
    virtual ~ExhaustionAttributeDelegate();
    virtual void tick(void);

    void ExhaustionAttributeDelegate(AttributeInstance const&);
};
