#pragma once

#include "../../container/Container.h"
#include "../../nbt/CompoundTag.h"
#include "./BlockActor.h"
#include "../../actor/Actor.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../level/Level.h"
#include "../../util/BlockPos.h"
#include <string>


class RandomizableBlockActorContainerBase : BlockActor {

public:
    virtual ~RandomizableBlockActorContainerBase();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;

//  RandomizableBlockActorContainerBase(BlockActorType, std::string const&, BlockPos const&); //TODO: incomplete function definition
    void setLootTable(std::string, int);
    void unPackLootTable(Level &, Container &, Actor *);
};
