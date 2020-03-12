#pragma once

#include "../../../../unmapped/CircuitTrackingInfo.h"
#include "ConsumerComponent.h"
#include "../../../../unmapped/CircuitSceneGraph.h"


class PistonConsumer : ConsumerComponent {

public:
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &);
    ~PistonConsumer();
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    virtual void getInstanceType()const;
    virtual void consumePowerAnyDirection();
    PistonConsumer();
    void setBlockPowerFace(unsigned char);
};
