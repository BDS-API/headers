#pragma once

#include "../../../../unmapped/CircuitTrackingInfo.h"
#include "./ConsumerComponent.h"
#include "../../../../unmapped/CircuitSceneGraph.h"


class PistonConsumer : ConsumerComponent {

public:
    virtual ~PistonConsumer();
    virtual void consumePowerAnyDirection();
    virtual void getInstanceType()const;
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &);
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);

    PistonConsumer();
    void setBlockPowerFace(unsigned char);
};
