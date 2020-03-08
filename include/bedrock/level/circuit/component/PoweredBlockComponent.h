#pragma once

#include "../../../../unmapped/CircuitSystem"
#include "../../../../unmapped/CircuitSceneGraph"
#include "../../../util/BlockPos"
#include "../../../../unmapped/CircuitTrackingInfo"


class PoweredBlockComponent : BaseCircuitComponent {

public:
    virtual PoweredBlockComponent::~PoweredBlockComponent()
    virtual void getStrength()const;
    virtual bool canConsumerPower();
    virtual void getBaseType()const;
    virtual void getInstanceType()const;
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &);
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    virtual void evaluate(CircuitSystem &, BlockPos const&);
    virtual bool hasChildrenSource();

    void setAllowAsPowerSource(bool);
    bool isAllowedAsPowerSource();
    bool isPromotedToProducer();
    PoweredBlockComponent(unsigned char);
};
