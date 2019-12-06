#pragma once

class PulseCapacitor : CapacitorComponent {

public:
    virtual ~PulseCapacitor();
    virtual void getStrength(void)const;
    virtual void setStrength(int);
    virtual void consumePowerAnyDirection(void);
    virtual bool canConsumerPower(void);
    virtual void getInstanceType(void)const;
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    virtual void evaluate(CircuitSystem &, BlockPos const&);
    virtual void getPoweroutDirection(void)const;

    void PulseCapacitor(void);
};
