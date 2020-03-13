#pragma once

#include "CapacitorComponent.h"


class PulseCapacitor : CapacitorComponent {

public:
    ~PulseCapacitor(); // _ZN14PulseCapacitorD2Ev
    virtual void getStrength()const; // _ZNK14PulseCapacitor11getStrengthEv
    virtual void setStrength(int); // _ZN14PulseCapacitor11setStrengthEi
    virtual void consumePowerAnyDirection(); // _ZN14PulseCapacitor24consumePowerAnyDirectionEv
    virtual bool canConsumerPower(); // _ZN14PulseCapacitor16canConsumerPowerEv
    virtual void getInstanceType()const; // _ZNK14PulseCapacitor15getInstanceTypeEv
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &); // _ZN14PulseCapacitor15allowConnectionER17CircuitSceneGraphRK19CircuitTrackingInfoRb
    virtual void evaluate(CircuitSystem &, BlockPos const&); // _ZN14PulseCapacitor8evaluateER13CircuitSystemRK8BlockPos
    virtual void getPoweroutDirection()const; // _ZNK14PulseCapacitor20getPoweroutDirectionEv
    PulseCapacitor(); // _ZN14PulseCapacitorC2Ev
};
