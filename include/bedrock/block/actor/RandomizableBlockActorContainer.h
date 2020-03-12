#pragma once

#include <string>
#include "../../container/Container.h"
#include "RandomizableBlockActorContainerBase.h"


class RandomizableBlockActorContainer : RandomizableBlockActorContainerBase, Container {

public:
    ~RandomizableBlockActorContainer();
    virtual void dropContents(BlockSource &, Vec3 const&, bool);
    virtual void startOpen(Player &);
//  RandomizableBlockActorContainer(BlockActorType, std::string const&, BlockPos const&, ContainerType); //TODO: incomplete function definition
};
