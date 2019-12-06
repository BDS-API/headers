#pragma once

class ProducerComponent : BaseCircuitComponent {

public:
    virtual ~ProducerComponent();
    virtual void setStrength(int);
    virtual bool canStopPower(void);
    virtual void setStopPower(bool);
    virtual void getBaseType(void)const;
    virtual void getInstanceType(void)const;
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    virtual void evaluate(CircuitSystem &, BlockPos const&);

    void doesAllowAttachments(void);
    void ProducerComponent(void);
    void allowAttachments(bool);
};
