#pragma once

#include "../../../../unmapped/BlockPos"
#include "../../../../unmapped/CircuitSceneGraph"
#include "../../../../unmapped/CircuitSystem"


class RepeaterCapacitor : CapacitorComponent {

public:
    virtual RepeaterCapacitor::~RepeaterCapacitor();
    virtual void getStrength(void)const;
    virtual void setStrength(int);
    virtual void consumePowerAnyDirection(void);
    virtual bool canConsumerPower(void);
    virtual void getInstanceType(void)const;
    virtual void removeSource(BlockPos const&, BaseCircuitComponent const*);
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &);
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    virtual void checkLock(CircuitSystem &, BlockPos const&);
    virtual void evaluate(CircuitSystem &, BlockPos const&);
    virtual void cacheValues(CircuitSystem &, BlockPos const&);
    virtual void updateDependencies(CircuitSceneGraph &, BlockPos const&);
    virtual void getPoweroutDirection(void)const;

    RepeaterCapacitor(void);
    void setDelay(int);
    void delayPulse(RepeaterCapacitor::States);
    void alternatePulse(void);
    void extendPulse(void);
};
