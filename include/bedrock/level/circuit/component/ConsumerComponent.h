#pragma once

#include "BaseCircuitComponent.h"


class ConsumerComponent : BaseCircuitComponent {

public:
    ~ConsumerComponent(); // _ZN17ConsumerComponentD2Ev
    virtual bool canConsumerPower(); // _ZN17ConsumerComponent16canConsumerPowerEv
    virtual void getBaseType()const; // _ZNK17ConsumerComponent11getBaseTypeEv
    virtual void getInstanceType()const; // _ZNK17ConsumerComponent15getInstanceTypeEv
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &); // _ZN17ConsumerComponent9addSourceER17CircuitSceneGraphRK19CircuitTrackingInfoRiRb
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &); // _ZN17ConsumerComponent15allowConnectionER17CircuitSceneGraphRK19CircuitTrackingInfoRb
    virtual void evaluate(CircuitSystem &, BlockPos const&); // _ZN17ConsumerComponent8evaluateER13CircuitSystemRK8BlockPos
    virtual bool isSecondaryPowered(); // _ZN17ConsumerComponent18isSecondaryPoweredEv
    void setAcceptHalfPulse(bool); // _ZN17ConsumerComponent18setAcceptHalfPulseEb
    ConsumerComponent(); // _ZN17ConsumerComponentC2Ev
    void setPropagatePower(bool); // _ZN17ConsumerComponent17setPropagatePowerEb
    bool isPromotedToProducer(); // _ZN17ConsumerComponent20isPromotedToProducerEv
};
