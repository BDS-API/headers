#pragma once

#include "../../../../unmapped/CircuitTrackingInfo.h"
#include "../../../../unmapped/CircuitSystem.h"
#include "../../../../unmapped/CircuitSceneGraph.h"
#include "../../../util/BlockPos.h"
#include "BaseCircuitComponent.h"


class TransporterComponent : BaseCircuitComponent {

public:
    virtual void getInstanceType()const;
    ~TransporterComponent();
    virtual void getBaseType()const;
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    virtual void cacheValues(CircuitSystem &, BlockPos const&);
    virtual void evaluate(CircuitSystem &, BlockPos const&);
    virtual bool canConsumerPower();
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &);
    TransporterComponent();
};
