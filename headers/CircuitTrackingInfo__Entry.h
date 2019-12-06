#pragma once

class CircuitTrackingInfo::Entry {

public:

    void Entry(void);
    void Entry(CircuitTrackingInfo::Entry const&);
    void set(BaseCircuitComponent *, BlockPos const&, unsigned char const&, unsigned long);
};
