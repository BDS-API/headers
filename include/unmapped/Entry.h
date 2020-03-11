#pragma once

#include "./Entry.h"
#include "../bedrock/level/circuit/component/BaseCircuitComponent.h"
#include "../bedrock/util/BlockPos.h"


namespace CircuitTrackingInfo {

class Entry {

public:

    Entry();
    Entry(CircuitTrackingInfo::Entry const&);
    void set(BaseCircuitComponent *, BlockPos const&, unsigned char const&, unsigned long);
};

}