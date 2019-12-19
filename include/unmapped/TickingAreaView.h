#pragma once

class TickingAreaView : ITickingAreaView {

public:
    virtual TickingAreaView::~TickingAreaView();
    virtual void init(Bounds const&, bool);
    virtual void tick(Tick const&, BlockSource &, bool);
    virtual void tickSeasons(BlockSource &, Random &);
    virtual void getDimensionId(void)const;
    virtual void getBounds(void)const;
    virtual bool isCircle(void)const;
    virtual bool isDoneLoading(void)const;
    virtual void checkInitialLoadDone(void);
    virtual void getInitialLoadPercentage(void);
    virtual void move(Bounds const&);
    virtual void createChildSource(void);
    virtual void getAvailableChunk(ChunkPos const&);

    TickingAreaView(ChunkSource &);
    void _tickChunk(Tick const&, BlockSource &, Level &, ChunkPos const&);
};
