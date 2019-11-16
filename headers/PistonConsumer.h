#pragma once

class PistonConsumer : ConsumerComponent {

    virtual void ~PistonConsumer();
    virtual void ~PistonConsumer();
    virtual void BaseCircuitComponent::getStrength(void)const;
    virtual void BaseCircuitComponent::getDirection(void)const;
    virtual void BaseCircuitComponent::setStrength(int);
    virtual void BaseCircuitComponent::setDirection(unsigned char);
    virtual void consumePowerAnyDirection(void);
    virtual void canConsumerPower(void);
    virtual void BaseCircuitComponent::canStopPower(void);
    virtual void BaseCircuitComponent::setStopPower(bool);
    virtual void getBaseType(void)const;
    virtual void getInstanceType(void)const;
    virtual void BaseCircuitComponent::removeSource(BlockPos const&, BaseCircuitComponent const*);
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &);
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    virtual void BaseCircuitComponent::checkLock(CircuitSystem &, BlockPos const&);
    virtual void evaluate(CircuitSystem &, BlockPos const&);
    virtual void BaseCircuitComponent::cacheValues(CircuitSystem &, BlockPos const&);
    virtual void BaseCircuitComponent::updateDependencies(CircuitSceneGraph &, BlockPos const&);
    virtual void BaseCircuitComponent::allowIndirect(void);
    virtual void BaseCircuitComponent::isHalfPulse(void);
    virtual void BaseCircuitComponent::hasSource(BaseCircuitComponent&);
    virtual void BaseCircuitComponent::hasChildrenSource(void);
    virtual void isSecondaryPowered(void);
}
