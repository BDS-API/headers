#pragma once

#include "../bedrock/util/BlockPos"
#include "../bedrock/level/circuit/component/BaseCircuitComponent"


class CircuitTrackingInfo {

public:

    CircuitTrackingInfo(BaseCircuitComponent *, BlockPos const&, int);
    CircuitTrackingInfo(CircuitTrackingInfo const&);
};
