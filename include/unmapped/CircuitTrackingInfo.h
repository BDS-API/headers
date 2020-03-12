#pragma once



class CircuitTrackingInfo {

public:
    class Entry;

    CircuitTrackingInfo(BaseCircuitComponent *, BlockPos const&, int);
    CircuitTrackingInfo(CircuitTrackingInfo const&);
    class Entry {

    public:
        Entry(CircuitTrackingInfo::Entry const&);
        void set(BaseCircuitComponent *, BlockPos const&, unsigned char const&, unsigned long);
        Entry();
    };
};
