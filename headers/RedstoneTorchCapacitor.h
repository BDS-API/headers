#pragma once

class RedstoneTorchCapacitor : CapacitorComponent {

public:
    virtual ~RedstoneTorchCapacitor();
    virtual void getStrength(void)const;
    virtual void getInstanceType(void)const;
    virtual void removeSource(BlockPos const&, BaseCircuitComponent const*);
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &);
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    virtual void evaluate(CircuitSystem &, BlockPos const&);
    virtual void cacheValues(CircuitSystem &, BlockPos const&);
    virtual void updateDependencies(CircuitSceneGraph &, BlockPos const&);
    virtual bool isHalfPulse(void);
    virtual void getPoweroutDirection(void)const;

    void getSelfPowerCount(void);
    void RedstoneTorchCapacitor(void);
    void FindStrongestStrength(BlockPos const&, CircuitSystem &, bool &);
    void _canIncrementSelfPower(void);
    void setOn(bool);
    void resetBurnOutCount(void);
    void setSelfPowerCount(int);
    void setNextInQueue(RedstoneTorchCapacitor*);
};
