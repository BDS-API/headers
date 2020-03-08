#pragma once

#include "../../../../unmapped/CircuitSystem"
#include "../../../../unmapped/CircuitSceneGraph"
#include "../../../util/BlockPos"
#include "../../../../unmapped/CircuitTrackingInfo"


class BaseRailTransporter : BaseCircuitComponent {

public:
    virtual BaseRailTransporter::~BaseRailTransporter()
    virtual void getBaseType()const;
    virtual void getInstanceType()const;
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &);
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    virtual void evaluate(CircuitSystem &, BlockPos const&);

    void setType(BaseRailTransporter::RailType);
    BaseRailTransporter(void);
};
