#pragma once

#include "../../../../unmapped/CircuitTrackingInfo.h"
#include "../../../../unmapped/CircuitSystem.h"
#include "../../../../unmapped/CircuitSceneGraph.h"
#include "CapacitorComponent.h"
#include "../../../util/BlockPos.h"
#include "BaseCircuitComponent.h"


class RepeaterCapacitor : CapacitorComponent {

public:
    ~RepeaterCapacitor();
    virtual bool canConsumerPower();
    virtual void evaluate(CircuitSystem &, BlockPos const&);
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    virtual void setStrength(int);
    virtual void getPoweroutDirection()const;
    virtual void consumePowerAnyDirection();
    virtual void updateDependencies(CircuitSceneGraph &, BlockPos const&);
    virtual void cacheValues(CircuitSystem &, BlockPos const&);
    virtual void removeSource(BlockPos const&, BaseCircuitComponent const*);
    virtual void getInstanceType()const;
    virtual void getStrength()const;
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &);
    virtual void checkLock(CircuitSystem &, BlockPos const&);
    void alternatePulse();
    void extendPulse();
    void setDelay(int);
//  void delayPulse(RepeaterCapacitor::States); //TODO: incomplete function definition
    RepeaterCapacitor();
};
