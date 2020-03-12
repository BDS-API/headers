#pragma once

#include "ConsumerComponent.h"


class PistonConsumer : ConsumerComponent {

public:
    virtual void getInstanceType()const;
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &);
    virtual void consumePowerAnyDirection();
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    ~PistonConsumer();
    void setBlockPowerFace(unsigned char);
    PistonConsumer();
};
