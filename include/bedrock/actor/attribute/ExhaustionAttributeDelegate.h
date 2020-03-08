#pragma once



class ExhaustionAttributeDelegate : AttributeInstanceDelegate {

public:
    virtual ExhaustionAttributeDelegate::~ExhaustionAttributeDelegate()
    virtual void tick();

    ExhaustionAttributeDelegate(AttributeInstance const&);
};
