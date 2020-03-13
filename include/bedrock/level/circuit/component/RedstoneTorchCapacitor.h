#pragma once

#include "CapacitorComponent.h"


class RedstoneTorchCapacitor : CapacitorComponent {

public:
    ~RedstoneTorchCapacitor(); // _ZN22RedstoneTorchCapacitorD2Ev
    virtual void getStrength()const; // _ZNK22RedstoneTorchCapacitor11getStrengthEv
    virtual void getInstanceType()const; // _ZNK22RedstoneTorchCapacitor15getInstanceTypeEv
    virtual void removeSource(BlockPos const&, BaseCircuitComponent const*); // _ZN22RedstoneTorchCapacitor12removeSourceERK8BlockPosPK20BaseCircuitComponent
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &); // _ZN22RedstoneTorchCapacitor9addSourceER17CircuitSceneGraphRK19CircuitTrackingInfoRiRb
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &); // _ZN22RedstoneTorchCapacitor15allowConnectionER17CircuitSceneGraphRK19CircuitTrackingInfoRb
    virtual void evaluate(CircuitSystem &, BlockPos const&); // _ZN22RedstoneTorchCapacitor8evaluateER13CircuitSystemRK8BlockPos
    virtual void cacheValues(CircuitSystem &, BlockPos const&); // _ZN22RedstoneTorchCapacitor11cacheValuesER13CircuitSystemRK8BlockPos
    virtual void updateDependencies(CircuitSceneGraph &, BlockPos const&); // _ZN22RedstoneTorchCapacitor18updateDependenciesER17CircuitSceneGraphRK8BlockPos
    virtual bool isHalfPulse(); // _ZN22RedstoneTorchCapacitor11isHalfPulseEv
    virtual void getPoweroutDirection()const; // _ZNK22RedstoneTorchCapacitor20getPoweroutDirectionEv
    void getSelfPowerCount(); // _ZN22RedstoneTorchCapacitor17getSelfPowerCountEv
    RedstoneTorchCapacitor(); // _ZN22RedstoneTorchCapacitorC2Ev
    void FindStrongestStrength(BlockPos const&, CircuitSystem &, bool &); // _ZN22RedstoneTorchCapacitor21FindStrongestStrengthERK8BlockPosR13CircuitSystemRb
    void _canIncrementSelfPower(); // _ZN22RedstoneTorchCapacitor22_canIncrementSelfPowerEv
    void setOn(bool); // _ZN22RedstoneTorchCapacitor5setOnEb
    void resetBurnOutCount(); // _ZN22RedstoneTorchCapacitor17resetBurnOutCountEv
    void setSelfPowerCount(int); // _ZN22RedstoneTorchCapacitor17setSelfPowerCountEi
    void setNextInQueue(RedstoneTorchCapacitor *); // _ZN22RedstoneTorchCapacitor14setNextInQueueEPS_
};
