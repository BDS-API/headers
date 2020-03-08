#pragma once

#include "../../../../unmapped/CircuitSceneGraph"
#include "../../../../unmapped/CircuitSystem"


class PulseCapacitor : CapacitorComponent {

public:
    virtual PulseCapacitor::~PulseCapacitor();
    virtual void getStrength(void)const;
    virtual void setStrength(int);
    virtual void consumePowerAnyDirection(void);
    virtual bool canConsumerPower(void);
    virtual void getInstanceType(void)const;
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    virtual void evaluate(CircuitSystem &, BlockPos const&);
    virtual void getPoweroutDirection(void)const;

    PulseCapacitor(void);
};
