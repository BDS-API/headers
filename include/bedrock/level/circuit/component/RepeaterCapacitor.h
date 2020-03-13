#pragma once

#include "CapacitorComponent.h"


class RepeaterCapacitor : CapacitorComponent {

public:
    ~RepeaterCapacitor(); // _ZN17RepeaterCapacitorD2Ev
    virtual void getStrength()const; // _ZNK17RepeaterCapacitor11getStrengthEv
    virtual void setStrength(int); // _ZN17RepeaterCapacitor11setStrengthEi
    virtual void consumePowerAnyDirection(); // _ZN17RepeaterCapacitor24consumePowerAnyDirectionEv
    virtual bool canConsumerPower(); // _ZN17RepeaterCapacitor16canConsumerPowerEv
    virtual void getInstanceType()const; // _ZNK17RepeaterCapacitor15getInstanceTypeEv
    virtual void removeSource(BlockPos const&, BaseCircuitComponent const*); // _ZN17RepeaterCapacitor12removeSourceERK8BlockPosPK20BaseCircuitComponent
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &); // _ZN17RepeaterCapacitor9addSourceER17CircuitSceneGraphRK19CircuitTrackingInfoRiRb
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &); // _ZN17RepeaterCapacitor15allowConnectionER17CircuitSceneGraphRK19CircuitTrackingInfoRb
    virtual void checkLock(CircuitSystem &, BlockPos const&); // _ZN17RepeaterCapacitor9checkLockER13CircuitSystemRK8BlockPos
    virtual void evaluate(CircuitSystem &, BlockPos const&); // _ZN17RepeaterCapacitor8evaluateER13CircuitSystemRK8BlockPos
    virtual void cacheValues(CircuitSystem &, BlockPos const&); // _ZN17RepeaterCapacitor11cacheValuesER13CircuitSystemRK8BlockPos
    virtual void updateDependencies(CircuitSceneGraph &, BlockPos const&); // _ZN17RepeaterCapacitor18updateDependenciesER17CircuitSceneGraphRK8BlockPos
    virtual void getPoweroutDirection()const; // _ZNK17RepeaterCapacitor20getPoweroutDirectionEv
    RepeaterCapacitor(); // _ZN17RepeaterCapacitorC2Ev
    void setDelay(int); // _ZN17RepeaterCapacitor8setDelayEi
//  void delayPulse(RepeaterCapacitor::States); //TODO: incomplete function definition // _ZN17RepeaterCapacitor10delayPulseENS_6StatesE
    void alternatePulse(); // _ZN17RepeaterCapacitor14alternatePulseEv
    void extendPulse(); // _ZN17RepeaterCapacitor11extendPulseEv
};
