#pragma once

#include "ITickingAreaView.h"


class TickingAreaView : ITickingAreaView {

public:
    ~TickingAreaView();
    virtual void getBounds()const;
    virtual void createChildSource();
    virtual void getDimensionId()const;
    virtual void move(Bounds const&);
    virtual bool isDoneLoading()const;
    virtual void init(Bounds const&, bool);
    virtual bool isCircle()const;
    virtual void tick(Tick const&, BlockSource &, bool);
    virtual void checkInitialLoadDone();
    virtual void tickSeasons(BlockSource &, Random &);
    virtual void getAvailableChunk(ChunkPos const&);
    virtual void getInitialLoadPercentage();
    TickingAreaView(ChunkSource &);
    void _tickChunk(Tick const&, BlockSource &, Level &, ChunkPos const&);
};
