#pragma once

#include "ProducerComponent.h"


class CapacitorComponent : ProducerComponent {

public:
    ~CapacitorComponent();
    virtual void getInstanceType()const;
    virtual void getBaseType()const;
    virtual void getPoweroutDirection()const;
    CapacitorComponent();
};
