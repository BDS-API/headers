#pragma once

#include "../../container/Container"
#include "../../util/Vec3"
#include "../../util/BlockPos"
#include "../unmapped/BlockSource"
#include "../../actor/Player"


class RandomizableBlockActorContainer : RandomizableBlockActorContainerBase, Container {

public:
    RandomizableBlockActorContainer::~RandomizableBlockActorContainer()
    virtual void startOpen(Player &);
    virtual void dropContents(BlockSource &, Vec3 const&, bool);

    RandomizableBlockActorContainer(BlockActorType, std::string const&, BlockPos const&, ContainerType);
};
