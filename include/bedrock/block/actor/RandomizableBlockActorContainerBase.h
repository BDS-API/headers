#pragma once

#include <string>
#include "BlockActor.h"


class RandomizableBlockActorContainerBase : public BlockActor {

public:
    virtual ~RandomizableBlockActorContainerBase(); // _ZN35RandomizableBlockActorContainerBaseD2Ev
    virtual void __fake_function0(); // fake
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &); // _ZN35RandomizableBlockActorContainerBase4loadER5LevelRK11CompoundTagR14DataLoadHelper
    virtual void save(CompoundTag &)const; // _ZNK35RandomizableBlockActorContainerBase4saveER11CompoundTag
//    RandomizableBlockActorContainerBase(long, std::string const&, BlockPos const&); //TODO: incomplete function definition // _ZN35RandomizableBlockActorContainerBaseC2E14BlockActorTypeRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK8BlockPos
    void setLootTable(std::string, int); // _ZN35RandomizableBlockActorContainerBase12setLootTableENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void unPackLootTable(Level &, Container &, Actor *); // _ZN35RandomizableBlockActorContainerBase15unPackLootTableER5LevelR9ContainerP5Actor
};
