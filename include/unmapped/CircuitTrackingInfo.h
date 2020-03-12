#pragma once

#include "../bedrock/level/circuit/component/BaseCircuitComponent.h"
#include "../bedrock/util/BlockPos.h"


class CircuitTrackingInfo {

public:
    class Entry;

    CircuitTrackingInfo(CircuitTrackingInfo const&);
    CircuitTrackingInfo(BaseCircuitComponent *, BlockPos const&, int);
    class Entry {

    public:
        void set(BaseCircuitComponent *, BlockPos const&, unsigned char const&, unsigned long);
        Entry();
        Entry(CircuitTrackingInfo::Entry const&);
    };
};
