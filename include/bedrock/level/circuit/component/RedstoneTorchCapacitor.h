#pragma once

#include "../../../../unmapped/CircuitTrackingInfo.h"
#include "../../../../unmapped/CircuitSystem.h"
#include "../../../../unmapped/CircuitSceneGraph.h"
#include "CapacitorComponent.h"
#include "../../../util/BlockPos.h"
#include "BaseCircuitComponent.h"


class RedstoneTorchCapacitor : CapacitorComponent {

public:
    ~RedstoneTorchCapacitor();
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    virtual void updateDependencies(CircuitSceneGraph &, BlockPos const&);
    virtual bool isHalfPulse();
    virtual void cacheValues(CircuitSystem &, BlockPos const&);
    virtual void getPoweroutDirection()const;
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &);
    virtual void removeSource(BlockPos const&, BaseCircuitComponent const*);
    virtual void getInstanceType()const;
    virtual void getStrength()const;
    virtual void evaluate(CircuitSystem &, BlockPos const&);
    void setNextInQueue(RedstoneTorchCapacitor *);
    void _canIncrementSelfPower();
    void getSelfPowerCount();
    void setOn(bool);
    void FindStrongestStrength(BlockPos const&, CircuitSystem &, bool &);
    void resetBurnOutCount();
    void setSelfPowerCount(int);
    RedstoneTorchCapacitor();
};
