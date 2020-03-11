#pragma once

#include "../../../util/BlockPos.h"
#include "../../../../unmapped/CircuitSceneGraph.h"
#include "../../../../unmapped/CircuitSystem.h"
#include "../../../../unmapped/CircuitTrackingInfo.h"
#include "./BaseCircuitComponent.h"


class BaseRailTransporter : BaseCircuitComponent {

public:
    virtual ~BaseRailTransporter();
    virtual void getBaseType()const;
    virtual void getInstanceType()const;
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &);
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    virtual void evaluate(CircuitSystem &, BlockPos const&);

//  void setType(BaseRailTransporter::RailType); //TODO: incomplete function definition
    BaseRailTransporter();
};
