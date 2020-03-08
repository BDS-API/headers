#pragma once

#include "../../../unmapped/BlockPos"
#include "../LevelChunkFinalDeleter"
#include "../../../unmapped/ChunkPos"
#include "../LevelChunk"
#include "../../../unmapped/Bounds"
#include "../../../unmapped/Random"


class ChunkViewSource : ChunkSource {

public:
    virtual ChunkViewSource::~ChunkViewSource();
    virtual void getExistingChunk(ChunkPos const&);
    virtual void getRandomChunk(Random &);
    virtual void createNewChunk(ChunkPos const&, ChunkSource::LoadMode);
    virtual void acquireDiscarded(std::unique_ptr<LevelChunk, LevelChunkFinalDeleter>);
    virtual bool isWithinWorldLimit(ChunkPos const&)const;

    ChunkViewSource(ChunkSource &, ChunkSource::LoadMode);
    ChunkViewSource(ChunkSource &, LevelChunkGridAreaElement<std::weak_ptr<LevelChunk>> &, Bounds const&);
    void move(Bounds const&, bool, std::function<void ()(buffer_span_mut<std::shared_ptr<LevelChunk>>, buffer_span<unsigned int>)>);
    void move(BlockPos const&, BlockPos const&, bool, std::function<void ()(buffer_span_mut<std::shared_ptr<LevelChunk>>, buffer_span<unsigned int>)>);
    void move(BlockPos const&, int, bool, std::function<void ()(buffer_span_mut<std::shared_ptr<LevelChunk>>, buffer_span<unsigned int>)>);
    void clear(void);
    void getArea(void)const;
    void getArea(void);
    void enableBlockEntityAccess(void);
};
