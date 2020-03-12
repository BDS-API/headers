#pragma once



class BaseCircuitComponent {

public:
    virtual void setStrength(int);
    virtual bool canStopPower();
    virtual void updateDependencies(CircuitSceneGraph &, BlockPos const&);
    virtual void consumePowerAnyDirection();
    virtual bool isHalfPulse();
    virtual bool isSecondaryPowered();
    virtual bool hasChildrenSource();
    virtual void checkLock(CircuitSystem &, BlockPos const&);
    ~BaseCircuitComponent();
    virtual void setStopPower(bool);
    virtual void getInstanceType()const;
    virtual bool hasSource(BaseCircuitComponent &);
    virtual void evaluate(CircuitSystem &, BlockPos const&);
    virtual void getBaseType()const;
    virtual void cacheValues(CircuitSystem &, BlockPos const&);
    virtual bool canConsumerPower();
    virtual void getDirection()const;
    virtual void removeSource(BlockPos const&, BaseCircuitComponent const*);
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    virtual void getStrength()const;
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &);
    virtual void allowIndirect();
    virtual void setDirection(unsigned char);
    void clearFirstTimeFlag();
    bool canAllowPowerDown();
    void setAllowPowerUp(bool);
    void trackPowerSource(CircuitTrackingInfo const&, int, bool, int);
    void trackPowerSourceDuplicates(CircuitTrackingInfo const&, int, bool);
    void setRemoved();
    BaseCircuitComponent();
    bool hasDirectPower();
    void setAllowPowerDown(bool);
    bool canAllowPowerUp();
    void calculateValue(CircuitSystem &);
    bool isRemoved()const;
};
