#pragma once

#include "../../../../unmapped/CircuitSceneGraph"
#include "../../../../unmapped/CircuitSystem"


class BaseRailTransporter : BaseCircuitComponent {

public:
    virtual BaseRailTransporter::~BaseRailTransporter();
    virtual void getBaseType(void)const;
    virtual void getInstanceType(void)const;
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &);
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    virtual void evaluate(CircuitSystem &, BlockPos const&);

    void setType(BaseRailTransporter::RailType);
    BaseRailTransporter(void);
};
