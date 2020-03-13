#pragma once

#include "ProducerComponent.h"


class CapacitorComponent : ProducerComponent {

public:
    ~CapacitorComponent(); // _ZN18CapacitorComponentD2Ev
    virtual void getBaseType()const; // _ZNK18CapacitorComponent11getBaseTypeEv
    virtual void getInstanceType()const; // _ZNK18CapacitorComponent15getInstanceTypeEv
    virtual void getPoweroutDirection()const; // _ZNK18CapacitorComponent20getPoweroutDirectionEv
    CapacitorComponent(); // _ZN18CapacitorComponentC2Ev
};
