#pragma once

#include "../../container/Container"
#include "../../../unmapped/BlockSource"
#include "../../actor/Player"


class RandomizableBlockActorContainer : RandomizableBlockActorContainerBase, Container {

public:
    virtual RandomizableBlockActorContainer::~RandomizableBlockActorContainer();
    virtual void startOpen(Player &);
    virtual void dropContents(BlockSource &, Vec3 const&, bool);

    RandomizableBlockActorContainer(BlockActorType, std::string const&, BlockPos const&, ContainerType);
};
