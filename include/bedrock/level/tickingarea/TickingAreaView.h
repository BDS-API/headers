#pragma once

#include "ITickingAreaView.h"


class TickingAreaView : ITickingAreaView {

public:
    ~TickingAreaView(); // _ZN15TickingAreaViewD2Ev
    virtual void init(Bounds const&, bool); // _ZN15TickingAreaView4initERK6Boundsb
    virtual void tick(Tick const&, BlockSource &, bool); // _ZN15TickingAreaView4tickERK4TickR11BlockSourceb
    virtual void tickSeasons(BlockSource &, Random &); // _ZN15TickingAreaView11tickSeasonsER11BlockSourceR6Random
    virtual void getDimensionId()const; // _ZNK15TickingAreaView14getDimensionIdEv
    virtual void getBounds()const; // _ZNK15TickingAreaView9getBoundsEv
    virtual bool isCircle()const; // _ZNK15TickingAreaView8isCircleEv
    virtual bool isDoneLoading()const; // _ZNK15TickingAreaView13isDoneLoadingEv
    virtual void checkInitialLoadDone(); // _ZN15TickingAreaView20checkInitialLoadDoneEv
    virtual void getInitialLoadPercentage(); // _ZN15TickingAreaView24getInitialLoadPercentageEv
    virtual void move(Bounds const&); // _ZN15TickingAreaView4moveERK6Bounds
    virtual void createChildSource(); // _ZN15TickingAreaView17createChildSourceEv
    virtual void getAvailableChunk(ChunkPos const&); // _ZN15TickingAreaView17getAvailableChunkERK8ChunkPos
    TickingAreaView(ChunkSource &); // _ZN15TickingAreaViewC2ER11ChunkSource
    void _tickChunk(Tick const&, BlockSource &, Level &, ChunkPos const&); // _ZN15TickingAreaView10_tickChunkERK4TickR11BlockSourceR5LevelRK8ChunkPos
};
