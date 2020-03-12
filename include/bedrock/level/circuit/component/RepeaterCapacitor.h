#pragma once

#include "CapacitorComponent.h"


class RepeaterCapacitor : CapacitorComponent {

public:
    virtual void removeSource(BlockPos const&, BaseCircuitComponent const*);
    virtual void evaluate(CircuitSystem &, BlockPos const&);
    virtual void setStrength(int);
    virtual void updateDependencies(CircuitSceneGraph &, BlockPos const&);
    virtual void consumePowerAnyDirection();
    virtual bool canConsumerPower();
    ~RepeaterCapacitor();
    virtual void getPoweroutDirection()const;
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    virtual void getInstanceType()const;
    virtual void cacheValues(CircuitSystem &, BlockPos const&);
    virtual void getStrength()const;
    virtual void checkLock(CircuitSystem &, BlockPos const&);
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &);
//  void delayPulse(RepeaterCapacitor::States); //TODO: incomplete function definition
    void alternatePulse();
    RepeaterCapacitor();
    void setDelay(int);
    void extendPulse();
};
