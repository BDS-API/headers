#pragma once

#include "../../../../unmapped/CircuitTrackingInfo.h"
#include "../../../../unmapped/CircuitSystem.h"
#include "../../../../unmapped/CircuitSceneGraph.h"
#include "CapacitorComponent.h"
#include "../../../util/BlockPos.h"
#include "BaseCircuitComponent.h"


class ComparatorCapacitor : CapacitorComponent {

public:
    virtual void updateDependencies(CircuitSceneGraph &, BlockPos const&);
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &);
    virtual void evaluate(CircuitSystem &, BlockPos const&);
    ~ComparatorCapacitor();
    virtual void getInstanceType()const;
    virtual void cacheValues(CircuitSystem &, BlockPos const&);
    virtual bool canConsumerPower();
    virtual void removeSource(BlockPos const&, BaseCircuitComponent const*);
    virtual void consumePowerAnyDirection();
    virtual void getPoweroutDirection()const;
    ComparatorCapacitor();
    void setAnalogStrength(int, unsigned char);
    void setCachedStrength(int);
    void getOldStrength();
//  void setMode(ComparatorCapacitor::Mode); //TODO: incomplete function definition
    void GetRearStrength();
    void clearAnalogStrength(unsigned char);
    bool isSubtractMode();
    void GetSideStrength();
};
