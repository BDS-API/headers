#pragma once

#include "../../../../unmapped/CircuitSceneGraph"
#include "../../../../unmapped/CircuitSystem"
#include "../../../../unmapped/CircuitTrackingInfo"
#include "../../../util/BlockPos"


class PulseCapacitor : CapacitorComponent {

public:
    PulseCapacitor::~PulseCapacitor()
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
