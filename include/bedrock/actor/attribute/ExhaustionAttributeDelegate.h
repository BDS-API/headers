#pragma once



class ExhaustionAttributeDelegate : AttributeInstanceDelegate {

public:
    ExhaustionAttributeDelegate::~ExhaustionAttributeDelegate()
    virtual void tick();

    ExhaustionAttributeDelegate(AttributeInstance const&);
};
