#pragma once

#include "../../../../unmapped/CircuitSystem"
#include "../../../../unmapped/CircuitSceneGraph"
#include "../../../util/BlockPos"
#include "../../../../unmapped/CircuitTrackingInfo"


class PulseCapacitor : CapacitorComponent {

public:
    virtual PulseCapacitor::~PulseCapacitor()
    virtual void getStrength()const;
    virtual void setStrength(int);
    virtual void consumePowerAnyDirection();
    virtual bool canConsumerPower();
    virtual void getInstanceType()const;
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    virtual void evaluate(CircuitSystem &, BlockPos const&);
    virtual void getPoweroutDirection()const;

    PulseCapacitor(void);
};
