#pragma once

#include "../bedrock/util/BlockPos"
#include "../bedrock/level/circuit/component/BaseCircuitComponent"


using namespace CircuitSceneGraph;

class PendingEntry {

public:

    PendingEntry(CircuitSceneGraph::PendingEntry&&);
    PendingEntry(BlockPos const&, std::unique_ptr<BaseCircuitComponent, std::default_delete<BaseCircuitComponent>>);
    PendingEntry(BlockPos const&, BaseCircuitComponent *);
};
