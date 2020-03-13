#pragma once

#include "BaseCircuitComponent.h"


class ProducerComponent : BaseCircuitComponent {

public:
    ~ProducerComponent(); // _ZN17ProducerComponentD2Ev
    virtual void setStrength(int); // _ZN17ProducerComponent11setStrengthEi
    virtual bool canStopPower(); // _ZN17ProducerComponent12canStopPowerEv
    virtual void setStopPower(bool); // _ZN17ProducerComponent12setStopPowerEb
    virtual void getBaseType()const; // _ZNK17ProducerComponent11getBaseTypeEv
    virtual void getInstanceType()const; // _ZNK17ProducerComponent15getInstanceTypeEv
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &); // _ZN17ProducerComponent15allowConnectionER17CircuitSceneGraphRK19CircuitTrackingInfoRb
    virtual void evaluate(CircuitSystem &, BlockPos const&); // _ZN17ProducerComponent8evaluateER13CircuitSystemRK8BlockPos
    bool doesAllowAttachments(); // _ZN17ProducerComponent20doesAllowAttachmentsEv
    ProducerComponent(); // _ZN17ProducerComponentC2Ev
    void allowAttachments(bool); // _ZN17ProducerComponent16allowAttachmentsEb
};
