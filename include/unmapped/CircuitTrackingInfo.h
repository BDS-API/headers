#pragma once

#include "./CircuitTrackingInfo.h"
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/level/circuit/component/BaseCircuitComponent.h"


class CircuitTrackingInfo {

public:

    CircuitTrackingInfo(BaseCircuitComponent *, BlockPos const&, int);
    CircuitTrackingInfo(CircuitTrackingInfo const&);
};
