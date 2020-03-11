#pragma once

#include "../../../util/BlockPos.h"
#include "../../../../unmapped/CircuitSceneGraph.h"
#include "../../../../unmapped/CircuitSystem.h"
#include "./CapacitorComponent.h"
#include "../../../../unmapped/CircuitTrackingInfo.h"


class PulseCapacitor : CapacitorComponent {

public:
    virtual ~PulseCapacitor();
    virtual void getStrength()const;
    virtual void setStrength(int);
    virtual void consumePowerAnyDirection();
    virtual bool canConsumerPower();
    virtual void getInstanceType()const;
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    virtual void evaluate(CircuitSystem &, BlockPos const&);
    virtual void getPoweroutDirection()const;

    PulseCapacitor();
};
