#pragma once

#include "../../../../unmapped/CircuitSceneGraph"
#include "../../../../unmapped/CircuitTrackingInfo"


class PistonConsumer : ConsumerComponent {

public:
    virtual PistonConsumer::~PistonConsumer()
    virtual void consumePowerAnyDirection();
    virtual void getInstanceType()const;
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &);
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);

    PistonConsumer(void);
    void setBlockPowerFace(unsigned char);
};
