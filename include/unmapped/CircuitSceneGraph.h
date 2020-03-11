#pragma once

#include <memory>
#include "../bedrock/block/unmapped/BlockSource.h"
#include "../bedrock/util/ChunkPos.h"
#include "../bedrock/level/circuit/component/BaseCircuitComponent.h"
#include "../bedrock/util/BlockPos.h"


class CircuitSceneGraph {

public:

    CircuitSceneGraph();
    ~CircuitSceneGraph();
    void getComponent(BlockPos const&, unsigned long);
    void getBaseComponent(BlockPos const&);
    void getFromPendingAdd(BlockPos const&, unsigned long);
    void getFromPendingAdd(BlockPos const&);
    bool processPendingAdds();
    void scheduleRelationshipUpdate(BlockPos const&, BaseCircuitComponent *);
    void setPendingAddAsNewlyLoaded();
    bool isPendingAdd(BlockPos const&);
    void add(BlockPos const&, std::unique_ptr<BaseCircuitComponent, std::default_delete<BaseCircuitComponent>>);
    void remove(BlockPos const&, BaseCircuitComponent *);
    void removeComponent(BlockPos const&);
    bool processPendingRemoves();
    void update(BlockSource *);
    bool processPendingUpdates(BlockSource *);
    void removeStaleRelationships();
    void findRelationships(BlockPos const&, BaseCircuitComponent *, BlockSource *);
    void addIfPoweredBlockAt(BlockSource &, BlockPos const&);
    void addPositionToReEvaluate(ChunkPos const&, BlockPos const&);
    void invalidatePos(BlockPos const&);
    void preSetupPoweredBlocks(ChunkPos const&);
    void getComponents_FastLookupByChunkPos();
    void getComponents_FastIterationAcrossActive();
};
