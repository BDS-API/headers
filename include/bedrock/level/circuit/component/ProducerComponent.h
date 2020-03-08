#pragma once

#include "../../../../unmapped/CircuitSystem"
#include "../../../../unmapped/CircuitSceneGraph"
#include "../../../util/BlockPos"
#include "../../../../unmapped/CircuitTrackingInfo"


class ProducerComponent : BaseCircuitComponent {

public:
    virtual ProducerComponent::~ProducerComponent()
    virtual void setStrength(int);
    virtual bool canStopPower();
    virtual void setStopPower(bool);
    virtual void getBaseType()const;
    virtual void getInstanceType()const;
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    virtual void evaluate(CircuitSystem &, BlockPos const&);

    bool doesAllowAttachments();
    ProducerComponent(void);
    void allowAttachments(bool);
};
