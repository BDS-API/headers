#pragma once

#include "../../../../unmapped/CircuitSceneGraph"


class PistonConsumer : ConsumerComponent {

public:
    virtual PistonConsumer::~PistonConsumer();
    virtual void consumePowerAnyDirection(void);
    virtual void getInstanceType(void)const;
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &);
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);

    PistonConsumer(void);
    void setBlockPowerFace(unsigned char);
};
