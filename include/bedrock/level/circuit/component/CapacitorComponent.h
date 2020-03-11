#pragma once

#include "./ProducerComponent.h"


class CapacitorComponent : ProducerComponent {

public:
    virtual ~CapacitorComponent();
    virtual void getBaseType()const;
    virtual void getInstanceType()const;
    virtual void getPoweroutDirection()const;

    CapacitorComponent();
};
