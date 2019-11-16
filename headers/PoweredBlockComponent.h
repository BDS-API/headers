#pragma once

class PoweredBlockComponent : BaseCircuitComponent {

    virtual void ~PoweredBlockComponent();
    virtual void ~PoweredBlockComponent();
    virtual void getStrength(void)const;
    virtual void getDirection(void)const;
    virtual void setStrength(int);
    virtual void setDirection(unsigned char);
    virtual void consumePowerAnyDirection(void);
    virtual void canConsumerPower(void);
    virtual void canStopPower(void);
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
    virtual void isHalfPulse(void);
    virtual void hasSource(BaseCircuitComponent&);
    virtual void hasChildrenSource(void);
    virtual void isSecondaryPowered(void);
}
