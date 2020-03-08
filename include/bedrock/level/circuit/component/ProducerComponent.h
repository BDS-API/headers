#pragma once

#include "../../../../unmapped/CircuitSceneGraph"
#include "../../../../unmapped/CircuitSystem"


class ProducerComponent : BaseCircuitComponent {

public:
    virtual ProducerComponent::~ProducerComponent();
    virtual void setStrength(int);
    virtual bool canStopPower(void);
    virtual void setStopPower(bool);
    virtual void getBaseType(void)const;
    virtual void getInstanceType(void)const;
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    virtual void evaluate(CircuitSystem &, BlockPos const&);

    bool doesAllowAttachments(void);
    ProducerComponent(void);
    void allowAttachments(bool);
};
