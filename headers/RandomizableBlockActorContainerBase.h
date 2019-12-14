#pragma once

class RandomizableBlockActorContainerBase : BlockActor {

public:
    virtual ~RandomizableBlockActorContainerBase();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;

    void RandomizableBlockActorContainerBase(BlockActorType, std::string const&, BlockPos const&);
    void setLootTable(std::string, int);
    void unPackLootTable(Level &, Container &, Actor *);
};
