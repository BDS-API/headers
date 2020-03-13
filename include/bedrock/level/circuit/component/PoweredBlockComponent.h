#pragma once

#include "BaseCircuitComponent.h"


class PoweredBlockComponent : BaseCircuitComponent {

public:
    ~PoweredBlockComponent(); // _ZN21PoweredBlockComponentD2Ev
    virtual void getStrength()const; // _ZNK21PoweredBlockComponent11getStrengthEv
    virtual bool canConsumerPower(); // _ZN21PoweredBlockComponent16canConsumerPowerEv
    virtual void getBaseType()const; // _ZNK21PoweredBlockComponent11getBaseTypeEv
    virtual void getInstanceType()const; // _ZNK21PoweredBlockComponent15getInstanceTypeEv
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &); // _ZN21PoweredBlockComponent9addSourceER17CircuitSceneGraphRK19CircuitTrackingInfoRiRb
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &); // _ZN21PoweredBlockComponent15allowConnectionER17CircuitSceneGraphRK19CircuitTrackingInfoRb
    virtual void evaluate(CircuitSystem &, BlockPos const&); // _ZN21PoweredBlockComponent8evaluateER13CircuitSystemRK8BlockPos
    virtual bool hasChildrenSource(); // _ZN21PoweredBlockComponent17hasChildrenSourceEv
    void setAllowAsPowerSource(bool); // _ZN21PoweredBlockComponent21setAllowAsPowerSourceEb
    bool isAllowedAsPowerSource(); // _ZN21PoweredBlockComponent22isAllowedAsPowerSourceEv
    bool isPromotedToProducer(); // _ZN21PoweredBlockComponent20isPromotedToProducerEv
    PoweredBlockComponent(unsigned char); // _ZN21PoweredBlockComponentC2Eh
};
