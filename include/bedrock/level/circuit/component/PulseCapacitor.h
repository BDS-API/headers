#pragma once

#include "CapacitorComponent.h"


class PulseCapacitor : CapacitorComponent {

public:
    virtual void evaluate(CircuitSystem &, BlockPos const&);
    virtual void getInstanceType()const;
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    virtual void setStrength(int);
    ~PulseCapacitor();
    virtual void getStrength()const;
    virtual void getPoweroutDirection()const;
    virtual bool canConsumerPower();
    virtual void consumePowerAnyDirection();
    PulseCapacitor();
};
