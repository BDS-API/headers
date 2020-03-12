#pragma once

#include "../../container/Container.h"
#include <string>
#include "../../util/Vec3.h"
#include "../unmapped/BlockSource.h"
#include "RandomizableBlockActorContainerBase.h"
#include "../../util/BlockPos.h"
#include "../../actor/Player.h"


class RandomizableBlockActorContainer : RandomizableBlockActorContainerBase, Container {

public:
    virtual void dropContents(BlockSource &, Vec3 const&, bool);
    ~RandomizableBlockActorContainer();
    virtual void startOpen(Player &);
//  RandomizableBlockActorContainer(BlockActorType, std::string const&, BlockPos const&, ContainerType); //TODO: incomplete function definition
};
