#pragma once

#include <string>
#include "../../util/Vec3.h"
#include "../../container/FillingContainer.h"
#include "../unmapped/BlockSource.h"
#include "RandomizableBlockActorContainerBase.h"
#include "../../util/BlockPos.h"
#include "../../actor/Player.h"


class RandomizableBlockActorFillingContainer : RandomizableBlockActorContainerBase, FillingContainer {

public:
    virtual void dropContents(BlockSource &, Vec3 const&, bool);
    virtual void startOpen(Player &);
    ~RandomizableBlockActorFillingContainer();
//  RandomizableBlockActorFillingContainer(BlockActorType, std::string const&, BlockPos const&, int, ContainerType); //TODO: incomplete function definition
};
