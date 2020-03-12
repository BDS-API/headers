#pragma once

#include "CapacitorComponent.h"


class ComparatorCapacitor : CapacitorComponent {

public:
    virtual void consumePowerAnyDirection();
    virtual bool canConsumerPower();
    virtual void getInstanceType()const;
    virtual void updateDependencies(CircuitSceneGraph &, BlockPos const&);
    virtual void getPoweroutDirection()const;
    virtual void removeSource(BlockPos const&, BaseCircuitComponent const*);
    virtual void cacheValues(CircuitSystem &, BlockPos const&);
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &);
    virtual void evaluate(CircuitSystem &, BlockPos const&);
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    ~ComparatorCapacitor();
    void GetRearStrength();
    void getOldStrength();
    void setAnalogStrength(int, unsigned char);
    void setCachedStrength(int);
    void GetSideStrength();
    ComparatorCapacitor();
    void clearAnalogStrength(unsigned char);
//  void setMode(ComparatorCapacitor::Mode); //TODO: incomplete function definition
    bool isSubtractMode();
};
