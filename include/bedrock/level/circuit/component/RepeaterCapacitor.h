#pragma once

#include "../../../../unmapped/CircuitSceneGraph.h"
#include "../../../util/BlockPos.h"
#include "../../../../unmapped/CircuitSystem.h"
#include "./CapacitorComponent.h"
#include "../../../../unmapped/CircuitTrackingInfo.h"
#include "./BaseCircuitComponent.h"


class RepeaterCapacitor : CapacitorComponent {

public:
    virtual ~RepeaterCapacitor();
    virtual void getStrength()const;
    virtual void setStrength(int);
    virtual void consumePowerAnyDirection();
    virtual bool canConsumerPower();
    virtual void getInstanceType()const;
    virtual void removeSource(BlockPos const&, BaseCircuitComponent const*);
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &);
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    virtual void checkLock(CircuitSystem &, BlockPos const&);
    virtual void evaluate(CircuitSystem &, BlockPos const&);
    virtual void cacheValues(CircuitSystem &, BlockPos const&);
    virtual void updateDependencies(CircuitSceneGraph &, BlockPos const&);
    virtual void getPoweroutDirection()const;

    RepeaterCapacitor();
    void setDelay(int);
//  void delayPulse(RepeaterCapacitor::States); //TODO: incomplete function definition
    void alternatePulse();
    void extendPulse();
};
