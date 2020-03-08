#pragma once

#include "../../../../unmapped/CircuitSystem"
#include "../../../../unmapped/CircuitSceneGraph"
#include "../../../util/BlockPos"
#include "../../../../unmapped/CircuitTrackingInfo"


class BaseCircuitComponent {

public:
    virtual BaseCircuitComponent::~BaseCircuitComponent()
    virtual void getStrength()const;
    virtual void getDirection()const;
    virtual void setStrength(int);
    virtual void setDirection(unsigned char);
    virtual void consumePowerAnyDirection();
    virtual bool canConsumerPower();
    virtual bool canStopPower();
    virtual void setStopPower(bool);
    virtual void getBaseType()const;
    virtual void getInstanceType()const;
    virtual void removeSource(BlockPos const&, BaseCircuitComponent const*);
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &);
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    virtual void checkLock(CircuitSystem &, BlockPos const&);
    virtual void evaluate(CircuitSystem &, BlockPos const&);
    virtual void cacheValues(CircuitSystem &, BlockPos const&);
    virtual void updateDependencies(CircuitSceneGraph &, BlockPos const&);
    virtual void allowIndirect();
    virtual bool isHalfPulse();
    virtual bool hasSource(BaseCircuitComponent&);
    virtual bool hasChildrenSource();
    virtual bool isSecondaryPowered();

    void clearFirstTimeFlag();
    bool canAllowPowerUp();
    void setAllowPowerUp(bool);
    BaseCircuitComponent(void);
    bool hasDirectPower();
    void trackPowerSource(CircuitTrackingInfo const&, int, bool, int);
    void trackPowerSourceDuplicates(CircuitTrackingInfo const&, int, bool);
    void calculateValue(CircuitSystem &);
    void setRemoved();
    bool isRemoved()const;
    void setAllowPowerDown(bool);
    bool canAllowPowerDown();
};
