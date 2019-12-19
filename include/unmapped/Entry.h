#pragma once

using namespace CircuitTrackingInfo;

class Entry {

public:

    Entry(void);
    Entry(CircuitTrackingInfo::Entry const&);
    void set(BaseCircuitComponent *, BlockPos const&, unsigned char const&, unsigned long);
};
