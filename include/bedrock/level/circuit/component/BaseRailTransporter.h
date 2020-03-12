#pragma once

#include "BaseCircuitComponent.h"


class BaseRailTransporter : BaseCircuitComponent {

public:
    virtual void evaluate(CircuitSystem &, BlockPos const&);
    virtual void getBaseType()const;
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &);
    ~BaseRailTransporter();
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    virtual void getInstanceType()const;
    BaseRailTransporter();
//  void setType(BaseRailTransporter::RailType); //TODO: incomplete function definition
};
