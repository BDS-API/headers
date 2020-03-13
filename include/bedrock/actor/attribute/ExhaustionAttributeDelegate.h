#pragma once

#include "AttributeInstanceDelegate.h"


class ExhaustionAttributeDelegate : AttributeInstanceDelegate {

public:
    ~ExhaustionAttributeDelegate(); // _ZN27ExhaustionAttributeDelegateD2Ev
    virtual void tick(); // _ZN27ExhaustionAttributeDelegate4tickEv
    ExhaustionAttributeDelegate(AttributeInstance const&); // _ZN27ExhaustionAttributeDelegateC2ERK17AttributeInstance
};
