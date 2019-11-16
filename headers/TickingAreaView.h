#pragma once

class TickingAreaView : ITickingAreaView {

    virtual void ~TickingAreaView();
    virtual void ~TickingAreaView();
    virtual void init(Bounds const&, bool);
    virtual void tick(Tick const&, BlockSource &, bool);
    virtual void tickSeasons(BlockSource &, Random &);
    virtual void getDimensionId(void)const;
    virtual void getBounds(void)const;
    virtual void isCircle(void)const;
    virtual void isDoneLoading(void)const;
    virtual void checkInitialLoadDone(void);
    virtual void getInitialLoadPercentage(void);
    virtual void move(Bounds const&);
    virtual void createChildSource(void);
    virtual void getAvailableChunk(ChunkPos const&);
}
