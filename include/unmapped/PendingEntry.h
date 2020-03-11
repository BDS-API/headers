#pragma once

#include <memory>
#include "./PendingEntry.h"
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/level/circuit/component/BaseCircuitComponent.h"


namespace CircuitSceneGraph {

class PendingEntry {

public:

    PendingEntry(CircuitSceneGraph::PendingEntry &&);
    PendingEntry(BlockPos const&, std::unique_ptr<BaseCircuitComponent, std::default_delete<BaseCircuitComponent>>);
    PendingEntry(BlockPos const&, BaseCircuitComponent *);
    ~PendingEntry();
};

}