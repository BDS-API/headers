#pragma once

#include "../../container/Container"
#include "../../actor/Actor"
#include "../../../unmapped/DataLoadHelper"
#include "../../util/BlockPos"
#include "../../nbt/CompoundTag"
#include "../../level/Level"


class RandomizableBlockActorContainerBase : BlockActor {

public:
    RandomizableBlockActorContainerBase::~RandomizableBlockActorContainerBase()
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;

    RandomizableBlockActorContainerBase(BlockActorType, std::string const&, BlockPos const&);
    void setLootTable(std::string, int);
    void unPackLootTable(Level &, Container &, Actor *);
};
