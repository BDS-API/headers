#pragma once

#include <memory>
#include "ChunkSource.h"
#include <functional>


class ChunkViewSource : ChunkSource {

public:
//  virtual void createNewChunk(ChunkPos const&, ChunkSource::LoadMode); //TODO: incomplete function definition
    virtual void getRandomChunk(Random &);
    virtual void acquireDiscarded(std::unique_ptr<LevelChunk>);
    virtual bool isWithinWorldLimit(ChunkPos const&)const;
    virtual void getExistingChunk(ChunkPos const&);
    ~ChunkViewSource();
    void move(Bounds const&, bool, std::function<void (buffer_span_mut<std::shared_ptr<LevelChunk>>, buffer_span<unsigned int>)>);
    void move(BlockPos const&, BlockPos const&, bool, std::function<void (buffer_span_mut<std::shared_ptr<LevelChunk>>, buffer_span<unsigned int>)>);
//  ChunkViewSource(ChunkSource &, ChunkSource::LoadMode); //TODO: incomplete function definition
//  ChunkViewSource(ChunkSource &, LevelChunkGridAreaElement<std::weak_ptr<LevelChunk>> &, Bounds const&); //TODO: incomplete function definition
    void getArea()const;
    void move(BlockPos const&, int, bool, std::function<void (buffer_span_mut<std::shared_ptr<LevelChunk>>, buffer_span<unsigned int>)>);
    void clear();
    void enableBlockEntityAccess();
    void getArea();
};
