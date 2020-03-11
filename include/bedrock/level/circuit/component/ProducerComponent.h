#pragma once

#include "../../../util/BlockPos.h"
#include "../../../../unmapped/CircuitSceneGraph.h"
#include "../../../../unmapped/CircuitSystem.h"
#include "../../../../unmapped/CircuitTrackingInfo.h"
#include "./BaseCircuitComponent.h"


class ProducerComponent : BaseCircuitComponent {

public:
    virtual ~ProducerComponent();
    virtual void setStrength(int);
    virtual bool canStopPower();
    virtual void setStopPower(bool);
    virtual void getBaseType()const;
    virtual void getInstanceType()const;
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    virtual void evaluate(CircuitSystem &, BlockPos const&);

    bool doesAllowAttachments();
    ProducerComponent();
    void allowAttachments(bool);
};
