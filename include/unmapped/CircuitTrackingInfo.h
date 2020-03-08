#pragma once

#include "../bedrock/level/circuit/component/BaseCircuitComponent"
#include "../bedrock/util/BlockPos"


class CircuitTrackingInfo {

public:

    CircuitTrackingInfo(BaseCircuitComponent *, BlockPos const&, int);
    CircuitTrackingInfo(CircuitTrackingInfo const&);
};
