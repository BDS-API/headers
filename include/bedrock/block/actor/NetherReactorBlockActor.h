#pragma once

class NetherReactorBlockActor : BlockActor {

public:
    virtual NetherReactorBlockActor::~NetherReactorBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;

    NetherReactorBlockActor(BlockPos const&);
};
