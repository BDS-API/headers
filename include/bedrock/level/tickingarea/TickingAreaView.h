#pragma once

#include "../Level.h"
#include "../../util/ChunkPos.h"
#include "ITickingAreaView.h"
#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "../chunksource/ChunkSource.h"
#include "../../../unmapped/Bounds.h"
#include "../../util/Tick.h"


class TickingAreaView : ITickingAreaView {

public:
    virtual void tick(Tick const&, BlockSource &, bool);
    virtual void move(Bounds const&);
    virtual bool isCircle()const;
    virtual void getAvailableChunk(ChunkPos const&);
    virtual void getInitialLoadPercentage();
    virtual void tickSeasons(BlockSource &, Random &);
    virtual bool isDoneLoading()const;
    virtual void init(Bounds const&, bool);
    virtual void getBounds()const;
    ~TickingAreaView();
    virtual void getDimensionId()const;
    virtual void createChildSource();
    virtual void checkInitialLoadDone();
    TickingAreaView(ChunkSource &);
    void _tickChunk(Tick const&, BlockSource &, Level &, ChunkPos const&);
};
