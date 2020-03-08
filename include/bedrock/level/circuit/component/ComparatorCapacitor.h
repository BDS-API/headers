#pragma once

#include "../../../../unmapped/CircuitSceneGraph"
#include "../../../../unmapped/CircuitSystem"
#include "../../../../unmapped/CircuitTrackingInfo"
#include "../../../util/BlockPos"


class ComparatorCapacitor : CapacitorComponent {

public:
    ComparatorCapacitor::~ComparatorCapacitor()
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

    ComparatorCapacitor(void);
    void getOldStrength();
    bool isSubtractMode();
    void setMode(ComparatorCapacitor::Mode);
    void clearAnalogStrength(unsigned char);
    void setAnalogStrength(int, unsigned char);
    void GetRearStrength();
    void GetSideStrength();
    void setCachedStrength(int);
};
