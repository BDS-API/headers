#pragma once

#include "../../../../unmapped/CircuitSceneGraph"
#include "../../../../unmapped/CircuitSystem"


class PoweredBlockComponent : BaseCircuitComponent {

public:
    virtual PoweredBlockComponent::~PoweredBlockComponent();
    virtual void getStrength(void)const;
    virtual bool canConsumerPower(void);
    virtual void getBaseType(void)const;
    virtual void getInstanceType(void)const;
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &);
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    virtual void evaluate(CircuitSystem &, BlockPos const&);
    virtual bool hasChildrenSource(void);

    void setAllowAsPowerSource(bool);
    bool isAllowedAsPowerSource(void);
    bool isPromotedToProducer(void);
    PoweredBlockComponent(unsigned char);
};
