#pragma once

class BaseRailTransporter : BaseCircuitComponent {

public:
    virtual ~BaseRailTransporter();
    virtual void getBaseType(void)const;
    virtual void getInstanceType(void)const;
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &);
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    virtual void evaluate(CircuitSystem &, BlockPos const&);

    void setType(BaseRailTransporter::RailType);
    void BaseRailTransporter(void);
};
