#pragma once

#include "../../../../unmapped/CircuitSystem"
#include "../../../../unmapped/CircuitSceneGraph"
#include "../../../util/BlockPos"
#include "../../../../unmapped/CircuitTrackingInfo"


class RedstoneTorchCapacitor : CapacitorComponent {

public:
    virtual RedstoneTorchCapacitor::~RedstoneTorchCapacitor()
    virtual void getStrength()const;
    virtual void getInstanceType()const;
    virtual void removeSource(BlockPos const&, BaseCircuitComponent const*);
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &);
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    virtual void evaluate(CircuitSystem &, BlockPos const&);
    virtual void cacheValues(CircuitSystem &, BlockPos const&);
    virtual void updateDependencies(CircuitSceneGraph &, BlockPos const&);
    virtual bool isHalfPulse();
    virtual void getPoweroutDirection()const;

    void getSelfPowerCount();
    RedstoneTorchCapacitor(void);
    void FindStrongestStrength(BlockPos const&, CircuitSystem &, bool &);
    void _canIncrementSelfPower();
    void setOn(bool);
    void resetBurnOutCount();
    void setSelfPowerCount(int);
    void setNextInQueue(RedstoneTorchCapacitor*);
};
