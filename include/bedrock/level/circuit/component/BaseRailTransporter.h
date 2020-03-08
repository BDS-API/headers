#pragma once

#include "../../../../unmapped/CircuitSceneGraph"
#include "../../../../unmapped/CircuitSystem"
#include "../../../../unmapped/CircuitTrackingInfo"
#include "../../../util/BlockPos"


class BaseRailTransporter : BaseCircuitComponent {

public:
    BaseRailTransporter::~BaseRailTransporter()
    virtual void getBaseType()const;
    virtual void getInstanceType()const;
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &);
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    virtual void evaluate(CircuitSystem &, BlockPos const&);

    void setType(BaseRailTransporter::RailType);
    BaseRailTransporter(void);
};
