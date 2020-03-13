#pragma once

#include <memory>


class CircuitSceneGraph {

public:
    class PendingEntry;

    CircuitSceneGraph(); // _ZN17CircuitSceneGraphC2Ev
    ~CircuitSceneGraph(); // _ZN17CircuitSceneGraphD2Ev
    void getComponent(BlockPos const&, unsigned long); // _ZN17CircuitSceneGraph12getComponentERK8BlockPosm
    void getBaseComponent(BlockPos const&); // _ZN17CircuitSceneGraph16getBaseComponentERK8BlockPos
    void getFromPendingAdd(BlockPos const&, unsigned long); // _ZN17CircuitSceneGraph17getFromPendingAddERK8BlockPosm
    void getFromPendingAdd(BlockPos const&); // _ZN17CircuitSceneGraph17getFromPendingAddERK8BlockPos
    bool processPendingAdds(); // _ZN17CircuitSceneGraph18processPendingAddsEv
    void scheduleRelationshipUpdate(BlockPos const&, BaseCircuitComponent *); // _ZN17CircuitSceneGraph26scheduleRelationshipUpdateERK8BlockPosP20BaseCircuitComponent
    void setPendingAddAsNewlyLoaded(); // _ZN17CircuitSceneGraph26setPendingAddAsNewlyLoadedEv
    bool isPendingAdd(BlockPos const&); // _ZN17CircuitSceneGraph12isPendingAddERK8BlockPos
    void add(BlockPos const&, std::unique_ptr<BaseCircuitComponent>); // _ZN17CircuitSceneGraph3addERK8BlockPosSt10unique_ptrI20BaseCircuitComponentSt14default_deleteIS4_EE
    void remove(BlockPos const&, BaseCircuitComponent *); // _ZN17CircuitSceneGraph6removeERK8BlockPosP20BaseCircuitComponent
    void removeComponent(BlockPos const&); // _ZN17CircuitSceneGraph15removeComponentERK8BlockPos
    bool processPendingRemoves(); // _ZN17CircuitSceneGraph21processPendingRemovesEv
    void update(BlockSource *); // _ZN17CircuitSceneGraph6updateEP11BlockSource
    bool processPendingUpdates(BlockSource *); // _ZN17CircuitSceneGraph21processPendingUpdatesEP11BlockSource
    void removeStaleRelationships(); // _ZN17CircuitSceneGraph24removeStaleRelationshipsEv
    void findRelationships(BlockPos const&, BaseCircuitComponent *, BlockSource *); // _ZN17CircuitSceneGraph17findRelationshipsERK8BlockPosP20BaseCircuitComponentP11BlockSource
    void addIfPoweredBlockAt(BlockSource &, BlockPos const&); // _ZN17CircuitSceneGraph19addIfPoweredBlockAtER11BlockSourceRK8BlockPos
    void addPositionToReEvaluate(ChunkPos const&, BlockPos const&); // _ZN17CircuitSceneGraph23addPositionToReEvaluateERK8ChunkPosRK8BlockPos
    void invalidatePos(BlockPos const&); // _ZN17CircuitSceneGraph13invalidatePosERK8BlockPos
    void preSetupPoweredBlocks(ChunkPos const&); // _ZN17CircuitSceneGraph21preSetupPoweredBlocksERK8ChunkPos
    void getComponents_FastLookupByChunkPos(); // _ZN17CircuitSceneGraph34getComponents_FastLookupByChunkPosEv
    void getComponents_FastIterationAcrossActive(); // _ZN17CircuitSceneGraph39getComponents_FastIterationAcrossActiveEv
    class PendingEntry {

    public:
        PendingEntry(CircuitSceneGraph::PendingEntry &&); // _ZN17CircuitSceneGraph12PendingEntryC2EOS0_
        PendingEntry(BlockPos const&, std::unique_ptr<BaseCircuitComponent>); // _ZN17CircuitSceneGraph12PendingEntryC2ERK8BlockPosSt10unique_ptrI20BaseCircuitComponentSt14default_deleteIS5_EE
        PendingEntry(BlockPos const&, BaseCircuitComponent *); // _ZN17CircuitSceneGraph12PendingEntryC2ERK8BlockPosP20BaseCircuitComponent
        ~PendingEntry(); // _ZN17CircuitSceneGraph12PendingEntryD2Ev
    };
};
