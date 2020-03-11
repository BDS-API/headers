#pragma once

#include "../../../util/BlockPos.h"
#include "../../../../unmapped/CircuitSceneGraph.h"
#include "../../../../unmapped/CircuitSystem.h"
#include "../../../../unmapped/CircuitTrackingInfo.h"
#include "./BaseCircuitComponent.h"


class ConsumerComponent : BaseCircuitComponent {

public:
    virtual ~ConsumerComponent();
    virtual bool canConsumerPower();
    virtual void getBaseType()const;
    virtual void getInstanceType()const;
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &);
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    virtual void evaluate(CircuitSystem &, BlockPos const&);
    virtual bool isSecondaryPowered();

    void setAcceptHalfPulse(bool);
    ConsumerComponent();
    void setPropagatePower(bool);
    bool isPromotedToProducer();
};
