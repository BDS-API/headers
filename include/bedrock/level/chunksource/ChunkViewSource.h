#pragma once

#include "../../util/ChunkPos.h"
#include "../../util/Random.h"
#include "ChunkSource.h"
#include "../../../unmapped/Bounds.h"
#include <functional>
#include <memory>
#include "../../util/BlockPos.h"
#include "../LevelChunk.h"


class ChunkViewSource : ChunkSource {

public:
    virtual void getRandomChunk(Random &);
    ~ChunkViewSource();
    virtual void getExistingChunk(ChunkPos const&);
//  virtual void createNewChunk(ChunkPos const&, ChunkSource::LoadMode); //TODO: incomplete function definition
    virtual void acquireDiscarded(std::unique_ptr<LevelChunk>);
    virtual bool isWithinWorldLimit(ChunkPos const&)const;
//  ChunkViewSource(ChunkSource &, ChunkSource::LoadMode); //TODO: incomplete function definition
//  void move(BlockPos const&, BlockPos const&, bool, std::function<void (buffer_span_mut<std::shared_ptr<LevelChunk>>, buffer_span<unsigned int>)>); //TODO: incomplete function definition
//  ChunkViewSource(ChunkSource &, LevelChunkGridAreaElement<std::weak_ptr<LevelChunk>> &, Bounds const&); //TODO: incomplete function definition
//  void move(Bounds const&, bool, std::function<void (buffer_span_mut<std::shared_ptr<LevelChunk>>, buffer_span<unsigned int>)>); //TODO: incomplete function definition
    void getArea()const;
    void clear();
    void enableBlockEntityAccess();
    void getArea();
//  void move(BlockPos const&, int, bool, std::function<void (buffer_span_mut<std::shared_ptr<LevelChunk>>, buffer_span<unsigned int>)>); //TODO: incomplete function definition
};
