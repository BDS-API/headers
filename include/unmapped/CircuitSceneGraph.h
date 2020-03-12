#pragma once

#include <memory>


class CircuitSceneGraph {

public:
    class PendingEntry;

    void add(BlockPos const&, std::unique_ptr<BaseCircuitComponent>);
    void findRelationships(BlockPos const&, BaseCircuitComponent *, BlockSource *);
    void preSetupPoweredBlocks(ChunkPos const&);
    void update(BlockSource *);
    bool isPendingAdd(BlockPos const&);
    void getBaseComponent(BlockPos const&);
    void removeComponent(BlockPos const&);
    void addIfPoweredBlockAt(BlockSource &, BlockPos const&);
    void scheduleRelationshipUpdate(BlockPos const&, BaseCircuitComponent *);
    void getComponent(BlockPos const&, unsigned long);
    void invalidatePos(BlockPos const&);
    ~CircuitSceneGraph();
    void addPositionToReEvaluate(ChunkPos const&, BlockPos const&);
    bool processPendingAdds();
    void getComponents_FastLookupByChunkPos();
    bool processPendingUpdates(BlockSource *);
    bool processPendingRemoves();
    void getFromPendingAdd(BlockPos const&, unsigned long);
    CircuitSceneGraph();
    void getFromPendingAdd(BlockPos const&);
    void setPendingAddAsNewlyLoaded();
    void getComponents_FastIterationAcrossActive();
    void remove(BlockPos const&, BaseCircuitComponent *);
    void removeStaleRelationships();
    class PendingEntry {

    public:
        PendingEntry(BlockPos const&, BaseCircuitComponent *);
        PendingEntry(BlockPos const&, std::unique_ptr<BaseCircuitComponent>);
        ~PendingEntry();
        PendingEntry(CircuitSceneGraph::PendingEntry &&);
    };
};
