#pragma once



class CircuitTrackingInfo {

public:
    class Entry;

    CircuitTrackingInfo(BaseCircuitComponent *, BlockPos const&, int); // _ZN19CircuitTrackingInfoC2EP20BaseCircuitComponentRK8BlockPosi
    CircuitTrackingInfo(CircuitTrackingInfo const&); // _ZN19CircuitTrackingInfoC2ERKS_
    class Entry {

    public:
        Entry(); // _ZN19CircuitTrackingInfo5EntryC2Ev
        Entry(CircuitTrackingInfo::Entry const&); // _ZN19CircuitTrackingInfo5EntryC2ERKS0_
        void set(BaseCircuitComponent *, BlockPos const&, unsigned char const&, unsigned long); // _ZN19CircuitTrackingInfo5Entry3setEP20BaseCircuitComponentRK8BlockPosRKhm
    };
};
