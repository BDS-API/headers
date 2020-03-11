#pragma once

#include "../../../../unmapped/CircuitSceneGraph.h"
#include "../../../util/BlockPos.h"
#include "../../../../unmapped/CircuitSystem.h"
#include "./CapacitorComponent.h"
#include "../../../../unmapped/CircuitTrackingInfo.h"
#include "./BaseCircuitComponent.h"


class ComparatorCapacitor : CapacitorComponent {

public:
    virtual ~ComparatorCapacitor();
    virtual void consumePowerAnyDirection();
    virtual bool canConsumerPower();
    virtual void getInstanceType()const;
    virtual void removeSource(BlockPos const&, BaseCircuitComponent const*);
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &);
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    virtual void evaluate(CircuitSystem &, BlockPos const&);
    virtual void cacheValues(CircuitSystem &, BlockPos const&);
    virtual void updateDependencies(CircuitSceneGraph &, BlockPos const&);
    virtual void getPoweroutDirection()const;

    ComparatorCapacitor();
    void getOldStrength();
    bool isSubtractMode();
//  void setMode(ComparatorCapacitor::Mode); //TODO: incomplete function definition
    void clearAnalogStrength(unsigned char);
    void setAnalogStrength(int, unsigned char);
    void GetRearStrength();
    void GetSideStrength();
    void setCachedStrength(int);
};
