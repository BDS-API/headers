#pragma once

#include "../bedrock/level/circuit/component/BaseCircuitComponent.h"
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "../bedrock/util/ChunkPos.h"
#include <memory>


class CircuitSceneGraph {

public:
    class PendingEntry;

    ~CircuitSceneGraph();
    void preSetupPoweredBlocks(ChunkPos const&);
    void update(BlockSource *);
    void addIfPoweredBlockAt(BlockSource &, BlockPos const&);
    CircuitSceneGraph();
    void getBaseComponent(BlockPos const&);
    void getFromPendingAdd(BlockPos const&, unsigned long);
    bool processPendingRemoves();
    void add(BlockPos const&, std::unique_ptr<BaseCircuitComponent>);
    bool isPendingAdd(BlockPos const&);
    void scheduleRelationshipUpdate(BlockPos const&, BaseCircuitComponent *);
    void getFromPendingAdd(BlockPos const&);
    bool processPendingUpdates(BlockSource *);
    bool processPendingAdds();
    void getComponents_FastLookupByChunkPos();
    void findRelationships(BlockPos const&, BaseCircuitComponent *, BlockSource *);
    void setPendingAddAsNewlyLoaded();
    void addPositionToReEvaluate(ChunkPos const&, BlockPos const&);
    void invalidatePos(BlockPos const&);
    void remove(BlockPos const&, BaseCircuitComponent *);
    void removeComponent(BlockPos const&);
    void removeStaleRelationships();
    void getComponent(BlockPos const&, unsigned long);
    void getComponents_FastIterationAcrossActive();
    class PendingEntry {

    public:
        ~PendingEntry();
        PendingEntry(CircuitSceneGraph::PendingEntry &&);
        PendingEntry(BlockPos const&, std::unique_ptr<BaseCircuitComponent>);
        PendingEntry(BlockPos const&, BaseCircuitComponent *);
    };
};
