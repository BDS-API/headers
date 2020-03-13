#pragma once

#include "BaseCircuitComponent.h"


class TransporterComponent : BaseCircuitComponent {

public:
    ~TransporterComponent(); // _ZN20TransporterComponentD2Ev
    virtual bool canConsumerPower(); // _ZN20TransporterComponent16canConsumerPowerEv
    virtual void getBaseType()const; // _ZNK20TransporterComponent11getBaseTypeEv
    virtual void getInstanceType()const; // _ZNK20TransporterComponent15getInstanceTypeEv
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &); // _ZN20TransporterComponent9addSourceER17CircuitSceneGraphRK19CircuitTrackingInfoRiRb
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &); // _ZN20TransporterComponent15allowConnectionER17CircuitSceneGraphRK19CircuitTrackingInfoRb
    virtual void evaluate(CircuitSystem &, BlockPos const&); // _ZN20TransporterComponent8evaluateER13CircuitSystemRK8BlockPos
    virtual void cacheValues(CircuitSystem &, BlockPos const&); // _ZN20TransporterComponent11cacheValuesER13CircuitSystemRK8BlockPos
    TransporterComponent(); // _ZN20TransporterComponentC2Ev
};
