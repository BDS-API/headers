#pragma once

#include <string>
#include "RandomizableBlockActorContainerBase.h"
#include "../../container/FillingContainer.h"


class RandomizableBlockActorFillingContainer : RandomizableBlockActorContainerBase, FillingContainer {

public:
    virtual void startOpen(Player &);
    ~RandomizableBlockActorFillingContainer();
    virtual void dropContents(BlockSource &, Vec3 const&, bool);
//  RandomizableBlockActorFillingContainer(BlockActorType, std::string const&, BlockPos const&, int, ContainerType); //TODO: incomplete function definition
};
