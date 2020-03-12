#pragma once

#include "BaseCircuitComponent.h"


class TransporterComponent : BaseCircuitComponent {

public:
    virtual void evaluate(CircuitSystem &, BlockPos const&);
    ~TransporterComponent();
    virtual void getBaseType()const;
    virtual void cacheValues(CircuitSystem &, BlockPos const&);
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    virtual void getInstanceType()const;
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &);
    virtual bool canConsumerPower();
    TransporterComponent();
};
