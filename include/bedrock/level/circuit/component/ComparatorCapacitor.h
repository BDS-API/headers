#pragma once

class ComparatorCapacitor : CapacitorComponent {

public:
    virtual ComparatorCapacitor::~ComparatorCapacitor();
    virtual void consumePowerAnyDirection(void);
    virtual bool canConsumerPower(void);
    virtual void getInstanceType(void)const;
    virtual void removeSource(BlockPos const&, BaseCircuitComponent const*);
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &);
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    virtual void evaluate(CircuitSystem &, BlockPos const&);
    virtual void cacheValues(CircuitSystem &, BlockPos const&);
    virtual void updateDependencies(CircuitSceneGraph &, BlockPos const&);
    virtual void getPoweroutDirection(void)const;

    ComparatorCapacitor(void);
    void getOldStrength(void);
    bool isSubtractMode(void);
    void setMode(ComparatorCapacitor::Mode);
    void clearAnalogStrength(unsigned char);
    void setAnalogStrength(int, unsigned char);
    void GetRearStrength(void);
    void GetSideStrength(void);
    void setCachedStrength(int);
};
