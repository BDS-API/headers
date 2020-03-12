#pragma once

#include "ProducerComponent.h"


class CapacitorComponent : ProducerComponent {

public:
    virtual void getInstanceType()const;
    virtual void getBaseType()const;
    virtual void getPoweroutDirection()const;
    ~CapacitorComponent();
    CapacitorComponent();
};
