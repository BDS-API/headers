#pragma once

#include "../../util/Vec3.h"
#include "../../container/FillingContainer.h"
#include "../../actor/Player.h"
#include "../../util/BlockPos.h"
#include "./RandomizableBlockActorContainerBase.h"
#include "../unmapped/BlockSource.h"
#include <string>


class RandomizableBlockActorFillingContainer : RandomizableBlockActorContainerBase, FillingContainer {

public:
    virtual ~RandomizableBlockActorFillingContainer();
    virtual void startOpen(Player &);
    virtual void dropContents(BlockSource &, Vec3 const&, bool);

//  RandomizableBlockActorFillingContainer(BlockActorType, std::string const&, BlockPos const&, int, ContainerType); //TODO: incomplete function definition
};
