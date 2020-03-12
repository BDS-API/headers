#pragma once

#include "AttributeInstanceDelegate.h"


class ExhaustionAttributeDelegate : AttributeInstanceDelegate {

public:
    virtual void tick();
    ~ExhaustionAttributeDelegate();
    ExhaustionAttributeDelegate(AttributeInstance const&);
};
