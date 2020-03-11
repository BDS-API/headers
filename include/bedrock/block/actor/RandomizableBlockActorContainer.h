#pragma once

#include "../../container/Container.h"
#include "../../util/Vec3.h"
#include "../../actor/Player.h"
#include "../../util/BlockPos.h"
#include "./RandomizableBlockActorContainerBase.h"
#include "../unmapped/BlockSource.h"
#include <string>


class RandomizableBlockActorContainer : RandomizableBlockActorContainerBase, Container {

public:
    virtual ~RandomizableBlockActorContainer();
    virtual void startOpen(Player &);
    virtual void dropContents(BlockSource &, Vec3 const&, bool);

//  RandomizableBlockActorContainer(BlockActorType, std::string const&, BlockPos const&, ContainerType); //TODO: incomplete function definition
};
