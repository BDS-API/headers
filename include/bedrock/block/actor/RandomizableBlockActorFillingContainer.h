#pragma once

#include "../../util/Vec3"
#include "../unmapped/BlockSource"
#include "../../util/BlockPos"
#include "../../container/FillingContainer"
#include "../../actor/Player"


class RandomizableBlockActorFillingContainer : RandomizableBlockActorContainerBase, FillingContainer {

public:
    RandomizableBlockActorFillingContainer::~RandomizableBlockActorFillingContainer()
    virtual void startOpen(Player &);
    virtual void dropContents(BlockSource &, Vec3 const&, bool);

    RandomizableBlockActorFillingContainer(BlockActorType, std::string const&, BlockPos const&, int, ContainerType);
};
