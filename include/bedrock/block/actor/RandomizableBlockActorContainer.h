#pragma once

#include <string>
#include "RandomizableBlockActorContainerBase.h"
#include "../../container/Container.h"


class RandomizableBlockActorContainer : RandomizableBlockActorContainerBase, Container {

public:
    ~RandomizableBlockActorContainer(); // _ZN31RandomizableBlockActorContainerD2Ev
    virtual void startOpen(Player &); // _ZN31RandomizableBlockActorContainer9startOpenER6Player
    virtual void dropContents(BlockSource &, Vec3 const&, bool); // _ZN31RandomizableBlockActorContainer12dropContentsER11BlockSourceRK4Vec3b
//  RandomizableBlockActorContainer(BlockActorType, std::string const&, BlockPos const&, ContainerType); //TODO: incomplete function definition // _ZN31RandomizableBlockActorContainerC2E14BlockActorTypeRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK8BlockPos13ContainerType
};
