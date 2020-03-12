#pragma once

#include "BaseCircuitComponent.h"


class ProducerComponent : BaseCircuitComponent {

public:
    virtual void setStrength(int);
    ~ProducerComponent();
    virtual void evaluate(CircuitSystem &, BlockPos const&);
    virtual void setStopPower(bool);
    virtual void getBaseType()const;
    virtual void getInstanceType()const;
    virtual bool canStopPower();
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    ProducerComponent();
    bool doesAllowAttachments();
    void allowAttachments(bool);
};
