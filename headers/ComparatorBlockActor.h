#pragma once

class ComparatorBlockActor : BlockActor {

public:
    virtual ~ComparatorBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual void getOutputSignal(void);
    virtual void setOutputSignal(int);

    void ComparatorBlockActor(BlockPos const&);
};
