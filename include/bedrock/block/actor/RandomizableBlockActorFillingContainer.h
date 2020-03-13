#pragma once

#include <string>
#include "../../container/FillingContainer.h"
#include "RandomizableBlockActorContainerBase.h"


class RandomizableBlockActorFillingContainer : RandomizableBlockActorContainerBase, FillingContainer {

public:
    ~RandomizableBlockActorFillingContainer(); // _ZN38RandomizableBlockActorFillingContainerD2Ev
    virtual void startOpen(Player &); // _ZN38RandomizableBlockActorFillingContainer9startOpenER6Player
    virtual void dropContents(BlockSource &, Vec3 const&, bool); // _ZN38RandomizableBlockActorFillingContainer12dropContentsER11BlockSourceRK4Vec3b
//  RandomizableBlockActorFillingContainer(BlockActorType, std::string const&, BlockPos const&, int, ContainerType); //TODO: incomplete function definition // _ZN38RandomizableBlockActorFillingContainerC2E14BlockActorTypeRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK8BlockPosi13ContainerType
};
