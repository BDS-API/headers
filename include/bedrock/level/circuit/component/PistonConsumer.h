#pragma once

#include "ConsumerComponent.h"


class PistonConsumer : ConsumerComponent {

public:
    ~PistonConsumer(); // _ZN14PistonConsumerD2Ev
    virtual void consumePowerAnyDirection(); // _ZN14PistonConsumer24consumePowerAnyDirectionEv
    virtual void getInstanceType()const; // _ZNK14PistonConsumer15getInstanceTypeEv
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &); // _ZN14PistonConsumer9addSourceER17CircuitSceneGraphRK19CircuitTrackingInfoRiRb
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &); // _ZN14PistonConsumer15allowConnectionER17CircuitSceneGraphRK19CircuitTrackingInfoRb
    PistonConsumer(); // _ZN14PistonConsumerC2Ev
    void setBlockPowerFace(unsigned char); // _ZN14PistonConsumer17setBlockPowerFaceEh
};
