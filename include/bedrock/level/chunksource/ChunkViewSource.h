#pragma once

#include <memory>
#include <functional>
#include "ChunkSource.h"


class ChunkViewSource : ChunkSource {

public:
    ~ChunkViewSource(); // _ZN15ChunkViewSourceD2Ev
    virtual void getExistingChunk(ChunkPos const&); // _ZN15ChunkViewSource16getExistingChunkERK8ChunkPos
    virtual void getRandomChunk(Random &); // _ZN15ChunkViewSource14getRandomChunkER6Random
//  virtual void createNewChunk(ChunkPos const&, ChunkSource::LoadMode); //TODO: incomplete function definition // _ZN15ChunkViewSource14createNewChunkERK8ChunkPosN11ChunkSource8LoadModeE
    virtual void acquireDiscarded(std::unique_ptr<LevelChunk>); // _ZN15ChunkViewSource16acquireDiscardedESt10unique_ptrI10LevelChunk22LevelChunkFinalDeleterE
    virtual bool isWithinWorldLimit(ChunkPos const&)const; // _ZNK15ChunkViewSource18isWithinWorldLimitERK8ChunkPos
//  ChunkViewSource(ChunkSource &, ChunkSource::LoadMode); //TODO: incomplete function definition // _ZN15ChunkViewSourceC2ER11ChunkSourceNS0_8LoadModeE
//  ChunkViewSource(ChunkSource &, LevelChunkGridAreaElement<std::weak_ptr<LevelChunk>> &, Bounds const&); //TODO: incomplete function definition // _ZN15ChunkViewSourceC2ER11ChunkSourceR25LevelChunkGridAreaElementISt8weak_ptrI10LevelChunkEERK6Bounds
    void move(Bounds const&, bool, std::function<void (buffer_span_mut<std::shared_ptr<LevelChunk>>, buffer_span<unsigned int>)>); // _ZN15ChunkViewSource4moveERK6BoundsbSt8functionIFv15buffer_span_mutISt10shared_ptrI10LevelChunkEE11buffer_spanIjEEE
    void move(BlockPos const&, BlockPos const&, bool, std::function<void (buffer_span_mut<std::shared_ptr<LevelChunk>>, buffer_span<unsigned int>)>); // _ZN15ChunkViewSource4moveERK8BlockPosS2_bSt8functionIFv15buffer_span_mutISt10shared_ptrI10LevelChunkEE11buffer_spanIjEEE
    void move(BlockPos const&, int, bool, std::function<void (buffer_span_mut<std::shared_ptr<LevelChunk>>, buffer_span<unsigned int>)>); // _ZN15ChunkViewSource4moveERK8BlockPosibSt8functionIFv15buffer_span_mutISt10shared_ptrI10LevelChunkEE11buffer_spanIjEEE
    void clear(); // _ZN15ChunkViewSource5clearEv
    void getArea()const; // _ZNK15ChunkViewSource7getAreaEv
    void getArea(); // _ZN15ChunkViewSource7getAreaEv
    void enableBlockEntityAccess(); // _ZN15ChunkViewSource23enableBlockEntityAccessEv
};
