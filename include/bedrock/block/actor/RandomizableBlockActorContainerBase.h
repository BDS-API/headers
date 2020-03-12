#pragma once

#include <string>
#include "BlockActor.h"


class RandomizableBlockActorContainerBase : BlockActor {

public:
    virtual void save(CompoundTag &)const;
    ~RandomizableBlockActorContainerBase();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    void unPackLootTable(Level &, Container &, Actor *);
    void setLootTable(std::string, int);
//  RandomizableBlockActorContainerBase(BlockActorType, std::string const&, BlockPos const&); //TODO: incomplete function definition
};
