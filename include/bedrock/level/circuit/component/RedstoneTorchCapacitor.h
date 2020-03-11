#pragma once

#include "../../../../unmapped/CircuitSceneGraph.h"
#include "../../../util/BlockPos.h"
#include "../../../../unmapped/CircuitSystem.h"
#include "./CapacitorComponent.h"
#include "../../../../unmapped/CircuitTrackingInfo.h"
#include "./RedstoneTorchCapacitor.h"
#include "./BaseCircuitComponent.h"


class RedstoneTorchCapacitor : CapacitorComponent {

public:
    virtual ~RedstoneTorchCapacitor();
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
    RedstoneTorchCapacitor();
    void FindStrongestStrength(BlockPos const&, CircuitSystem &, bool &);
    void _canIncrementSelfPower();
    void setOn(bool);
    void resetBurnOutCount();
    void setSelfPowerCount(int);
    void setNextInQueue(RedstoneTorchCapacitor *);
};
