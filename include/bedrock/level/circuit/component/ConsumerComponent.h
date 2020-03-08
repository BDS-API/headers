#pragma once

#include "../../../../unmapped/CircuitSceneGraph"
#include "../../../../unmapped/CircuitSystem"
#include "../../../../unmapped/CircuitTrackingInfo"
#include "../../../util/BlockPos"


class ConsumerComponent : BaseCircuitComponent {

public:
    ConsumerComponent::~ConsumerComponent()
    virtual bool canConsumerPower();
    virtual void getBaseType()const;
    virtual void getInstanceType()const;
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &);
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    virtual void evaluate(CircuitSystem &, BlockPos const&);
    virtual bool isSecondaryPowered();

    void setAcceptHalfPulse(bool);
    ConsumerComponent(void);
    void setPropagatePower(bool);
    bool isPromotedToProducer();
};
