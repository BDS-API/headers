#pragma once

#include "../../../../unmapped/CircuitSystem"
#include "../../../../unmapped/CircuitSceneGraph"
#include "../../../util/BlockPos"
#include "../../../../unmapped/CircuitTrackingInfo"


class RepeaterCapacitor : CapacitorComponent {

public:
    virtual RepeaterCapacitor::~RepeaterCapacitor()
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

    RepeaterCapacitor(void);
    void setDelay(int);
    void delayPulse(RepeaterCapacitor::States);
    void alternatePulse();
    void extendPulse();
};
