#pragma once

class CircuitSceneGraph {

public:

    void CircuitSceneGraph(void);
    void getComponent(BlockPos const&, unsigned long);
    void getBaseComponent(BlockPos const&);
    void getFromPendingAdd(BlockPos const&, unsigned long);
    void getFromPendingAdd(BlockPos const&);
    void processPendingAdds(void);
    void scheduleRelationshipUpdate(BlockPos const&, BaseCircuitComponent *);
    void setPendingAddAsNewlyLoaded(void);
    bool isPendingAdd(BlockPos const&);
    void add(BlockPos const&, std::unique_ptr<BaseCircuitComponent, std::default_delete<BaseCircuitComponent>>);
    void remove(BlockPos const&, BaseCircuitComponent *);
    void removeComponent(BlockPos const&);
    void processPendingRemoves(void);
    void update(BlockSource *);
    void processPendingUpdates(BlockSource *);
    void removeStaleRelationships(void);
    void findRelationships(BlockPos const&, BaseCircuitComponent *, BlockSource *);
    void addIfPoweredBlockAt(BlockSource &, BlockPos const&);
    void addPositionToReEvaluate(ChunkPos const&, BlockPos const&);
    void invalidatePos(BlockPos const&);
    void preSetupPoweredBlocks(ChunkPos const&);
    void getComponents_FastLookupByChunkPos(void);
    void getComponents_FastIterationAcrossActive(void);
};
