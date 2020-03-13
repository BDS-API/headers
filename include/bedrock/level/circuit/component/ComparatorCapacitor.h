#pragma once

#include "CapacitorComponent.h"


class ComparatorCapacitor : CapacitorComponent {

public:
    ~ComparatorCapacitor(); // _ZN19ComparatorCapacitorD2Ev
    virtual void consumePowerAnyDirection(); // _ZN19ComparatorCapacitor24consumePowerAnyDirectionEv
    virtual bool canConsumerPower(); // _ZN19ComparatorCapacitor16canConsumerPowerEv
    virtual void getInstanceType()const; // _ZNK19ComparatorCapacitor15getInstanceTypeEv
    virtual void removeSource(BlockPos const&, BaseCircuitComponent const*); // _ZN19ComparatorCapacitor12removeSourceERK8BlockPosPK20BaseCircuitComponent
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &); // _ZN19ComparatorCapacitor9addSourceER17CircuitSceneGraphRK19CircuitTrackingInfoRiRb
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &); // _ZN19ComparatorCapacitor15allowConnectionER17CircuitSceneGraphRK19CircuitTrackingInfoRb
    virtual void evaluate(CircuitSystem &, BlockPos const&); // _ZN19ComparatorCapacitor8evaluateER13CircuitSystemRK8BlockPos
    virtual void cacheValues(CircuitSystem &, BlockPos const&); // _ZN19ComparatorCapacitor11cacheValuesER13CircuitSystemRK8BlockPos
    virtual void updateDependencies(CircuitSceneGraph &, BlockPos const&); // _ZN19ComparatorCapacitor18updateDependenciesER17CircuitSceneGraphRK8BlockPos
    virtual void getPoweroutDirection()const; // _ZNK19ComparatorCapacitor20getPoweroutDirectionEv
    ComparatorCapacitor(); // _ZN19ComparatorCapacitorC2Ev
    void getOldStrength(); // _ZN19ComparatorCapacitor14getOldStrengthEv
    bool isSubtractMode(); // _ZN19ComparatorCapacitor14isSubtractModeEv
//  void setMode(ComparatorCapacitor::Mode); //TODO: incomplete function definition // _ZN19ComparatorCapacitor7setModeENS_4ModeE
    void clearAnalogStrength(unsigned char); // _ZN19ComparatorCapacitor19clearAnalogStrengthEh
    void setAnalogStrength(int, unsigned char); // _ZN19ComparatorCapacitor17setAnalogStrengthEih
    void GetRearStrength(); // _ZN19ComparatorCapacitor15GetRearStrengthEv
    void GetSideStrength(); // _ZN19ComparatorCapacitor15GetSideStrengthEv
    void setCachedStrength(int); // _ZN19ComparatorCapacitor17setCachedStrengthEi
};
