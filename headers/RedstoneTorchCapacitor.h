#pragma once

class RedstoneTorchCapacitor : CapacitorComponent {

    virtual void ~RedstoneTorchCapacitor();
    virtual void ~RedstoneTorchCapacitor();
    virtual void getStrength(void)const;
    virtual void BaseCircuitComponent::getDirection(void)const;
    virtual void ProducerComponent::setStrength(int);
    virtual void BaseCircuitComponent::setDirection(unsigned char);
    virtual void BaseCircuitComponent::consumePowerAnyDirection(void);
    virtual void BaseCircuitComponent::canConsumerPower(void);
    virtual void ProducerComponent::canStopPower(void);
    virtual void ProducerComponent::setStopPower(bool);
    virtual void getBaseType(void)const;
    virtual void getInstanceType(void)const;
    virtual void removeSource(BlockPos const&, BaseCircuitComponent const*);
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &);
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    virtual void BaseCircuitComponent::checkLock(CircuitSystem &, BlockPos const&);
    virtual void evaluate(CircuitSystem &, BlockPos const&);
    virtual void cacheValues(CircuitSystem &, BlockPos const&);
    virtual void updateDependencies(CircuitSceneGraph &, BlockPos const&);
    virtual void BaseCircuitComponent::allowIndirect(void);
    virtual void isHalfPulse(void);
    virtual void BaseCircuitComponent::hasSource(BaseCircuitComponent&);
    virtual void BaseCircuitComponent::hasChildrenSource(void);
    virtual void BaseCircuitComponent::isSecondaryPowered(void);
    virtual void getPoweroutDirection(void)const;
}
