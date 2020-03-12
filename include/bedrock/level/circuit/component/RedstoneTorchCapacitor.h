#pragma once

#include "CapacitorComponent.h"


class RedstoneTorchCapacitor : CapacitorComponent {

public:
    virtual void getStrength()const;
    virtual void cacheValues(CircuitSystem &, BlockPos const&);
    ~RedstoneTorchCapacitor();
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &);
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    virtual void getInstanceType()const;
    virtual bool isHalfPulse();
    virtual void getPoweroutDirection()const;
    virtual void evaluate(CircuitSystem &, BlockPos const&);
    virtual void removeSource(BlockPos const&, BaseCircuitComponent const*);
    virtual void updateDependencies(CircuitSceneGraph &, BlockPos const&);
    void setSelfPowerCount(int);
    void getSelfPowerCount();
    void setNextInQueue(RedstoneTorchCapacitor *);
    RedstoneTorchCapacitor();
    void FindStrongestStrength(BlockPos const&, CircuitSystem &, bool &);
    void resetBurnOutCount();
    void _canIncrementSelfPower();
    void setOn(bool);
};
