#pragma once

#include "RandomizableBlockActorContainerBase.h"
#include "../../container/FillingContainer.h"
#include <string>


class RandomizableBlockActorFillingContainer : public RandomizableBlockActorContainerBase, public FillingContainer {

public:
    virtual ~RandomizableBlockActorFillingContainer(); // _ZN38RandomizableBlockActorFillingContainerD2Ev
    virtual void __fake_function0(); // fake
    virtual void startOpen(Player &); // _ZN38RandomizableBlockActorFillingContainer9startOpenER6Player
    virtual void dropContents(BlockSource &, Vec3 const&, bool); // _ZN38RandomizableBlockActorFillingContainer12dropContentsER11BlockSourceRK4Vec3b
//    RandomizableBlockActorFillingContainer(long, std::string const&, BlockPos const&, int, long); //TODO: incomplete function definition // _ZN38RandomizableBlockActorFillingContainerC2E14BlockActorTypeRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK8BlockPosi13ContainerType
};
