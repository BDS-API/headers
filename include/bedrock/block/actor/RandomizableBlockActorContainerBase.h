#pragma once

#include "BlockActor.h"
#include "../../container/Container.h"
#include <string>
#include "../../../unmapped/DataLoadHelper.h"
#include "../../level/Level.h"
#include "../../nbt/CompoundTag.h"
#include "../../actor/Actor.h"
#include "../../util/BlockPos.h"


class RandomizableBlockActorContainerBase : BlockActor {

public:
    virtual void save(CompoundTag &)const;
    ~RandomizableBlockActorContainerBase();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    void unPackLootTable(Level &, Container &, Actor *);
//  RandomizableBlockActorContainerBase(BlockActorType, std::string const&, BlockPos const&); //TODO: incomplete function definition
    void setLootTable(std::string, int);
};
