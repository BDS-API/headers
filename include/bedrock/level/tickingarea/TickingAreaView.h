#pragma once

#include "../../util/Random.h"
#include "../../../unmapped/Bounds.h"
#include "../Level.h"
#include "./ITickingAreaView.h"
#include "../../block/unmapped/BlockSource.h"
#include "../../util/Tick.h"
#include "../../util/ChunkPos.h"
#include "../chunksource/ChunkSource.h"


class TickingAreaView : ITickingAreaView {

public:
    virtual ~TickingAreaView();
    virtual void init(Bounds const&, bool);
    virtual void tick(Tick const&, BlockSource &, bool);
    virtual void tickSeasons(BlockSource &, Random &);
    virtual void getDimensionId()const;
    virtual void getBounds()const;
    virtual bool isCircle()const;
    virtual bool isDoneLoading()const;
    virtual void checkInitialLoadDone();
    virtual void getInitialLoadPercentage();
    virtual void move(Bounds const&);
    virtual void createChildSource();
    virtual void getAvailableChunk(ChunkPos const&);

    TickingAreaView(ChunkSource &);
    void _tickChunk(Tick const&, BlockSource &, Level &, ChunkPos const&);
};
