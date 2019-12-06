#pragma once

class NetherReactorBlockActor : BlockActor {

public:
    virtual ~NetherReactorBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;

    void NetherReactorBlockActor(BlockPos const&);
};
