#pragma once



class ExhaustionAttributeDelegate : AttributeInstanceDelegate {

public:
    virtual ExhaustionAttributeDelegate::~ExhaustionAttributeDelegate();
    virtual void tick(void);

    ExhaustionAttributeDelegate(AttributeInstance const&);
};
