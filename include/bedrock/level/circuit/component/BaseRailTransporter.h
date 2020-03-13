#pragma once

#include "BaseCircuitComponent.h"


class BaseRailTransporter : BaseCircuitComponent {

public:
    ~BaseRailTransporter(); // _ZN19BaseRailTransporterD2Ev
    virtual void getBaseType()const; // _ZNK19BaseRailTransporter11getBaseTypeEv
    virtual void getInstanceType()const; // _ZNK19BaseRailTransporter15getInstanceTypeEv
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &); // _ZN19BaseRailTransporter9addSourceER17CircuitSceneGraphRK19CircuitTrackingInfoRiRb
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &); // _ZN19BaseRailTransporter15allowConnectionER17CircuitSceneGraphRK19CircuitTrackingInfoRb
    virtual void evaluate(CircuitSystem &, BlockPos const&); // _ZN19BaseRailTransporter8evaluateER13CircuitSystemRK8BlockPos
//  void setType(BaseRailTransporter::RailType); //TODO: incomplete function definition // _ZN19BaseRailTransporter7setTypeENS_8RailTypeE
    BaseRailTransporter(); // _ZN19BaseRailTransporterC2Ev
};
