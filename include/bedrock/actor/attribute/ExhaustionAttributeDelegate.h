#pragma once

#include "AttributeInstance.h"
#include "AttributeInstanceDelegate.h"


class ExhaustionAttributeDelegate : AttributeInstanceDelegate {

public:
    virtual void tick();
    ~ExhaustionAttributeDelegate();
    ExhaustionAttributeDelegate(AttributeInstance const&);
};
