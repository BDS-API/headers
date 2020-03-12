#pragma once

#include "../../../../unmapped/CircuitTrackingInfo.h"
#include "../../../../unmapped/CircuitSystem.h"
#include "../../../../unmapped/CircuitSceneGraph.h"
#include "../../../util/BlockPos.h"
#include "BaseCircuitComponent.h"


class ConsumerComponent : BaseCircuitComponent {

public:
    virtual void getBaseType()const;
    virtual bool isSecondaryPowered();
    virtual void getInstanceType()const;
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    ~ConsumerComponent();
    virtual void evaluate(CircuitSystem &, BlockPos const&);
    virtual bool canConsumerPower();
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &);
    ConsumerComponent();
    void setPropagatePower(bool);
    bool isPromotedToProducer();
    void setAcceptHalfPulse(bool);
};
