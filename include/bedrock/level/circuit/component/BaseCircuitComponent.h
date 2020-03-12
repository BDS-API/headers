#pragma once

#include "../../../../unmapped/CircuitTrackingInfo.h"
#include "../../../../unmapped/CircuitSystem.h"
#include "../../../util/BlockPos.h"
#include "../../../../unmapped/CircuitSceneGraph.h"


class BaseCircuitComponent {

public:
    virtual bool hasChildrenSource();
    virtual bool canStopPower();
    virtual void getDirection()const;
    virtual void getInstanceType()const;
    virtual void setDirection(unsigned char);
    virtual bool hasSource(BaseCircuitComponent &);
    virtual bool isHalfPulse();
    virtual void getBaseType()const;
    virtual void checkLock(CircuitSystem &, BlockPos const&);
    virtual void evaluate(CircuitSystem &, BlockPos const&);
    ~BaseCircuitComponent();
    virtual void cacheValues(CircuitSystem &, BlockPos const&);
    virtual void getStrength()const;
    virtual void allowIndirect();
    virtual void consumePowerAnyDirection();
    virtual void updateDependencies(CircuitSceneGraph &, BlockPos const&);
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &);
    virtual void setStrength(int);
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    virtual bool canConsumerPower();
    virtual bool isSecondaryPowered();
    virtual void removeSource(BlockPos const&, BaseCircuitComponent const*);
    virtual void setStopPower(bool);
    bool hasDirectPower();
    void setAllowPowerUp(bool);
    bool canAllowPowerUp();
    bool isRemoved()const;
    void trackPowerSource(CircuitTrackingInfo const&, int, bool, int);
    void setRemoved();
    void clearFirstTimeFlag();
    void trackPowerSourceDuplicates(CircuitTrackingInfo const&, int, bool);
    void calculateValue(CircuitSystem &);
    void setAllowPowerDown(bool);
    BaseCircuitComponent();
    bool canAllowPowerDown();
};
