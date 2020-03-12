#pragma once

#include "BaseCircuitComponent.h"


class ConsumerComponent : BaseCircuitComponent {

public:
    virtual bool isSecondaryPowered();
    ~ConsumerComponent();
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &);
    virtual void getInstanceType()const;
    virtual bool canConsumerPower();
    virtual void evaluate(CircuitSystem &, BlockPos const&);
    virtual void getBaseType()const;
    void setPropagatePower(bool);
    void setAcceptHalfPulse(bool);
    bool isPromotedToProducer();
    ConsumerComponent();
};
