#pragma once

class TransporterComponent : BaseCircuitComponent {

public:
    virtual ~TransporterComponent();
    virtual bool canConsumerPower(void);
    virtual void getBaseType(void)const;
    virtual void getInstanceType(void)const;
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &);
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    virtual void evaluate(CircuitSystem &, BlockPos const&);
    virtual void cacheValues(CircuitSystem &, BlockPos const&);

    void TransporterComponent(void);
};
