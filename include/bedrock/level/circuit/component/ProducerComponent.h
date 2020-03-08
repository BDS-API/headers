#pragma once

#include "../../../../unmapped/CircuitSceneGraph"
#include "../../../../unmapped/CircuitSystem"
#include "../../../../unmapped/CircuitTrackingInfo"
#include "../../../util/BlockPos"


class ProducerComponent : BaseCircuitComponent {

public:
    ProducerComponent::~ProducerComponent()
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
