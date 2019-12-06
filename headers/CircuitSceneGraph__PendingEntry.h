#pragma once

class CircuitSceneGraph::PendingEntry {

public:

    void PendingEntry(CircuitSceneGraph::PendingEntry&&);
    void PendingEntry(BlockPos const&, std::unique_ptr<BaseCircuitComponent, std::default_delete<BaseCircuitComponent>>);
    void PendingEntry(BlockPos const&, BaseCircuitComponent *);
};
