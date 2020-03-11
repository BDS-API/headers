#pragma once

#include "../../util/Random.h"
#include "../../../unmapped/Bounds.h"
#include <memory>
#include "./ChunkSource.h"
#include "../../util/BlockPos.h"
#include "../../util/ChunkPos.h"
#include "../LevelChunkFinalDeleter.h"
#include "../LevelChunk.h"
#include <functional>


class ChunkViewSource : ChunkSource {

public:
    virtual ~ChunkViewSource();
    virtual void getExistingChunk(ChunkPos const&);
    virtual void getRandomChunk(Random &);
//  virtual void createNewChunk(ChunkPos const&, ChunkSource::LoadMode); //TODO: incomplete function definition
    virtual void acquireDiscarded(std::unique_ptr<LevelChunk, LevelChunkFinalDeleter>);
    virtual bool isWithinWorldLimit(ChunkPos const&)const;

//  ChunkViewSource(ChunkSource &, ChunkSource::LoadMode); //TODO: incomplete function definition
//  ChunkViewSource(ChunkSource &, LevelChunkGridAreaElement<std::weak_ptr<LevelChunk>> &, Bounds const&); //TODO: incomplete function definition
//  void move(Bounds const&, bool, std::function<void (buffer_span_mut<std::shared_ptr<LevelChunk>>, buffer_span<unsigned int>)>); //TODO: incomplete function definition
//  void move(BlockPos const&, BlockPos const&, bool, std::function<void (buffer_span_mut<std::shared_ptr<LevelChunk>>, buffer_span<unsigned int>)>); //TODO: incomplete function definition
//  void move(BlockPos const&, int, bool, std::function<void (buffer_span_mut<std::shared_ptr<LevelChunk>>, buffer_span<unsigned int>)>); //TODO: incomplete function definition
    void clear();
    void getArea()const;
    void getArea();
    void enableBlockEntityAccess();
};
