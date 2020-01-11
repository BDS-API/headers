#pragma once

class BaseCircuitComponent {

public:
    virtual BaseCircuitComponent::~BaseCircuitComponent();
    virtual void getStrength(void)const;
    virtual void getDirection(void)const;
    virtual void setStrength(int);
    virtual void setDirection(unsigned char);
    virtual void consumePowerAnyDirection(void);
    virtual bool canConsumerPower(void);
    virtual bool canStopPower(void);
    virtual void setStopPower(bool);
    virtual void getBaseType(void)const;
    virtual void getInstanceType(void)const;
    virtual void removeSource(BlockPos const&, BaseCircuitComponent const*);
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &);
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    virtual void checkLock(CircuitSystem &, BlockPos const&);
    virtual void evaluate(CircuitSystem &, BlockPos const&);
    virtual void cacheValues(CircuitSystem &, BlockPos const&);
    virtual void updateDependencies(CircuitSceneGraph &, BlockPos const&);
    virtual void allowIndirect(void);
    virtual bool isHalfPulse(void);
    virtual bool hasSource(BaseCircuitComponent&);
    virtual bool hasChildrenSource(void);
    virtual bool isSecondaryPowered(void);

    void clearFirstTimeFlag(void);
    bool canAllowPowerUp(void);
    void setAllowPowerUp(bool);
    BaseCircuitComponent(void);
    bool hasDirectPower(void);
    void trackPowerSource(CircuitTrackingInfo const&, int, bool, int);
    void trackPowerSourceDuplicates(CircuitTrackingInfo const&, int, bool);
    void calculateValue(CircuitSystem &);
    void setRemoved(void);
    bool isRemoved(void)const;
    void setAllowPowerDown(bool);
    bool canAllowPowerDown(void);
};
