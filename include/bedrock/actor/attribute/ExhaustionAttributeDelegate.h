#pragma once

#include "./AttributeInstance.h"
#include "./AttributeInstanceDelegate.h"


class ExhaustionAttributeDelegate : AttributeInstanceDelegate {

public:
    virtual ~ExhaustionAttributeDelegate();
    virtual void tick();

    ExhaustionAttributeDelegate(AttributeInstance const&);
};
