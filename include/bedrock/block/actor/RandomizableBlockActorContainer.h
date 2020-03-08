#pragma once

#include "../unmapped/BlockSource"
#include "../../util/BlockPos"
#include "../../actor/Player"
#include "../../util/Vec3"
#include "../../container/Container"


class RandomizableBlockActorContainer : RandomizableBlockActorContainerBase, Container {

public:
    virtual RandomizableBlockActorContainer::~RandomizableBlockActorContainer()
    virtual void startOpen(Player &);
    virtual void dropContents(BlockSource &, Vec3 const&, bool);

    RandomizableBlockActorContainer(BlockActorType, std::string const&, BlockPos const&, ContainerType);
};
