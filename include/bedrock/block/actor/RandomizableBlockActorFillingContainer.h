#pragma once

#include "../unmapped/BlockSource"
#include "../../util/BlockPos"
#include "../../actor/Player"
#include "../../util/Vec3"
#include "../../container/FillingContainer"


class RandomizableBlockActorFillingContainer : RandomizableBlockActorContainerBase, FillingContainer {

public:
    virtual RandomizableBlockActorFillingContainer::~RandomizableBlockActorFillingContainer()
    virtual void startOpen(Player &);
    virtual void dropContents(BlockSource &, Vec3 const&, bool);

    RandomizableBlockActorFillingContainer(BlockActorType, std::string const&, BlockPos const&, int, ContainerType);
};
