#pragma once

#include "../../../../unmapped/CircuitTrackingInfo.h"
#include "../../../../unmapped/CircuitSystem.h"
#include "../../../../unmapped/CircuitSceneGraph.h"
#include "../../../util/BlockPos.h"
#include "BaseCircuitComponent.h"


class ProducerComponent : BaseCircuitComponent {

public:
    virtual void setStopPower(bool);
    virtual bool canStopPower();
    ~ProducerComponent();
    virtual void getInstanceType()const;
    virtual void setStrength(int);
    virtual void evaluate(CircuitSystem &, BlockPos const&);
    virtual void getBaseType()const;
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    bool doesAllowAttachments();
    void allowAttachments(bool);
    ProducerComponent();
};
