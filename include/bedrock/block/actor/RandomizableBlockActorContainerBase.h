#pragma once

#include "../../actor/Actor"
#include "../../nbt/CompoundTag"
#include "../../level/Level"
#include "../../util/BlockPos"
#include "../../../unmapped/DataLoadHelper"
#include "../../container/Container"


class RandomizableBlockActorContainerBase : BlockActor {

public:
    virtual RandomizableBlockActorContainerBase::~RandomizableBlockActorContainerBase()
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;

    RandomizableBlockActorContainerBase(BlockActorType, std::string const&, BlockPos const&);
    void setLootTable(std::string, int);
    void unPackLootTable(Level &, Container &, Actor *);
};
