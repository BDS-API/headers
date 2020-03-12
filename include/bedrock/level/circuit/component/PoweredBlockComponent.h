#pragma once

#include "BaseCircuitComponent.h"


class PoweredBlockComponent : BaseCircuitComponent {

public:
    virtual bool hasChildrenSource();
    ~PoweredBlockComponent();
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    virtual void getInstanceType()const;
    virtual void getStrength()const;
    virtual void evaluate(CircuitSystem &, BlockPos const&);
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &);
    virtual bool canConsumerPower();
    virtual void getBaseType()const;
    void setAllowAsPowerSource(bool);
    bool isAllowedAsPowerSource();
    bool isPromotedToProducer();
    PoweredBlockComponent(unsigned char);
};
