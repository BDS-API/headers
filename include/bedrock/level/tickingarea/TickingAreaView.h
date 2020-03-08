#pragma once

#include "../Level"
#include "../../../unmapped/Bounds"
#include "../../util/ChunkPos"
#include "../../util/Tick"
#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../chunksource/ChunkSource"


class TickingAreaView : ITickingAreaView {

public:
    TickingAreaView::~TickingAreaView()
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
