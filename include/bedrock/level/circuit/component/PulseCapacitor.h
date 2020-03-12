#pragma once

#include "../../../../unmapped/CircuitTrackingInfo.h"
#include "../../../../unmapped/CircuitSystem.h"
#include "../../../../unmapped/CircuitSceneGraph.h"
#include "CapacitorComponent.h"
#include "../../../util/BlockPos.h"


class PulseCapacitor : CapacitorComponent {

public:
    virtual void setStrength(int);
    virtual void consumePowerAnyDirection();
    ~PulseCapacitor();
    virtual void getPoweroutDirection()const;
    virtual bool canConsumerPower();
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    virtual void getStrength()const;
    virtual void getInstanceType()const;
    virtual void evaluate(CircuitSystem &, BlockPos const&);
    PulseCapacitor();
};
