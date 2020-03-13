#pragma once



class BaseCircuitComponent {

public:
    ~BaseCircuitComponent(); // _ZN20BaseCircuitComponentD2Ev
    virtual void getStrength()const; // _ZNK20BaseCircuitComponent11getStrengthEv
    virtual void getDirection()const; // _ZNK20BaseCircuitComponent12getDirectionEv
    virtual void setStrength(int); // _ZN20BaseCircuitComponent11setStrengthEi
    virtual void setDirection(unsigned char); // _ZN20BaseCircuitComponent12setDirectionEh
    virtual void consumePowerAnyDirection(); // _ZN20BaseCircuitComponent24consumePowerAnyDirectionEv
    virtual bool canConsumerPower(); // _ZN20BaseCircuitComponent16canConsumerPowerEv
    virtual bool canStopPower(); // _ZN20BaseCircuitComponent12canStopPowerEv
    virtual void setStopPower(bool); // _ZN20BaseCircuitComponent12setStopPowerEb
    virtual void getBaseType()const; // _ZNK20BaseCircuitComponent11getBaseTypeEv
    virtual void getInstanceType()const; // _ZNK20BaseCircuitComponent15getInstanceTypeEv
    virtual void removeSource(BlockPos const&, BaseCircuitComponent const*); // _ZN20BaseCircuitComponent12removeSourceERK8BlockPosPKS_
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &); // _ZN20BaseCircuitComponent9addSourceER17CircuitSceneGraphRK19CircuitTrackingInfoRiRb
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &); // _ZN20BaseCircuitComponent15allowConnectionER17CircuitSceneGraphRK19CircuitTrackingInfoRb
    virtual void checkLock(CircuitSystem &, BlockPos const&); // _ZN20BaseCircuitComponent9checkLockER13CircuitSystemRK8BlockPos
    virtual void evaluate(CircuitSystem &, BlockPos const&); // _ZN20BaseCircuitComponent8evaluateER13CircuitSystemRK8BlockPos
    virtual void cacheValues(CircuitSystem &, BlockPos const&); // _ZN20BaseCircuitComponent11cacheValuesER13CircuitSystemRK8BlockPos
    virtual void updateDependencies(CircuitSceneGraph &, BlockPos const&); // _ZN20BaseCircuitComponent18updateDependenciesER17CircuitSceneGraphRK8BlockPos
    virtual void allowIndirect(); // _ZN20BaseCircuitComponent13allowIndirectEv
    virtual bool isHalfPulse(); // _ZN20BaseCircuitComponent11isHalfPulseEv
    virtual bool hasSource(BaseCircuitComponent &); // _ZN20BaseCircuitComponent9hasSourceERS_
    virtual bool hasChildrenSource(); // _ZN20BaseCircuitComponent17hasChildrenSourceEv
    virtual bool isSecondaryPowered(); // _ZN20BaseCircuitComponent18isSecondaryPoweredEv
    void clearFirstTimeFlag(); // _ZN20BaseCircuitComponent18clearFirstTimeFlagEv
    bool canAllowPowerUp(); // _ZN20BaseCircuitComponent15canAllowPowerUpEv
    void setAllowPowerUp(bool); // _ZN20BaseCircuitComponent15setAllowPowerUpEb
    BaseCircuitComponent(); // _ZN20BaseCircuitComponentC2Ev
    bool hasDirectPower(); // _ZN20BaseCircuitComponent14hasDirectPowerEv
    void trackPowerSource(CircuitTrackingInfo const&, int, bool, int); // _ZN20BaseCircuitComponent16trackPowerSourceERK19CircuitTrackingInfoibi
    void trackPowerSourceDuplicates(CircuitTrackingInfo const&, int, bool); // _ZN20BaseCircuitComponent26trackPowerSourceDuplicatesERK19CircuitTrackingInfoib
    void calculateValue(CircuitSystem &); // _ZN20BaseCircuitComponent14calculateValueER13CircuitSystem
    void setRemoved(); // _ZN20BaseCircuitComponent10setRemovedEv
    bool isRemoved()const; // _ZNK20BaseCircuitComponent9isRemovedEv
    void setAllowPowerDown(bool); // _ZN20BaseCircuitComponent17setAllowPowerDownEb
    bool canAllowPowerDown(); // _ZN20BaseCircuitComponent17canAllowPowerDownEv
};
