#pragma once

#include "../../../../unmapped/CircuitTrackingInfo.h"
#include "../../../../unmapped/CircuitSystem.h"
#include "../../../../unmapped/CircuitSceneGraph.h"
#include "../../../util/BlockPos.h"
#include "BaseCircuitComponent.h"


class PoweredBlockComponent : BaseCircuitComponent {

public:
    virtual void getBaseType()const;
    virtual void getInstanceType()const;
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &);
    virtual void evaluate(CircuitSystem &, BlockPos const&);
    virtual void getStrength()const;
    ~PoweredBlockComponent();
    virtual bool hasChildrenSource();
    virtual bool canConsumerPower();
    void setAllowAsPowerSource(bool);
    bool isPromotedToProducer();
    PoweredBlockComponent(unsigned char);
    bool isAllowedAsPowerSource();
};
