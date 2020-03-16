#pragma once

#include "RandomizableBlockActorContainerBase.h"
#include "../../container/Container.h"
#include <string>


class RandomizableBlockActorContainer : public RandomizableBlockActorContainerBase, public Container {

public:
    virtual ~RandomizableBlockActorContainer(); // _ZN31RandomizableBlockActorContainerD2Ev
    virtual void __fake_function0(); // fake
    virtual void startOpen(Player &); // _ZN31RandomizableBlockActorContainer9startOpenER6Player
    virtual void dropContents(BlockSource &, Vec3 const&, bool); // _ZN31RandomizableBlockActorContainer12dropContentsER11BlockSourceRK4Vec3b
//    RandomizableBlockActorContainer(long, std::string const&, BlockPos const&, long); //TODO: incomplete function definition // _ZN31RandomizableBlockActorContainerC2E14BlockActorTypeRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK8BlockPos13ContainerType
};
