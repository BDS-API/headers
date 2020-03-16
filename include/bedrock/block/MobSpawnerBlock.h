#pragma once

#include <string>
#include "ActorBlock.h"


class MobSpawnerBlock : public ActorBlock {

public:
    virtual ~MobSpawnerBlock(); // _ZN15MobSpawnerBlockD2Ev
    virtual void __fake_function0(); // fake
    virtual bool canProvideSupport__incomplete0(Block const&, unsigned char, long)const; //TODO: incomplete function definition // _ZNK15MobSpawnerBlock17canProvideSupportERK5Blockh16BlockSupportType
    virtual bool isInteractiveBlock()const; // _ZNK15MobSpawnerBlock18isInteractiveBlockEv
    virtual bool canContainLiquid()const; // _ZNK15MobSpawnerBlock16canContainLiquidEv
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK15MobSpawnerBlock16getResourceCountER6RandomRK5Blocki
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK15MobSpawnerBlock15getResourceItemER6RandomRK5Blocki
    virtual void getExperienceDrop(Random &)const; // _ZNK15MobSpawnerBlock17getExperienceDropER6Random
    MobSpawnerBlock(std::string const&, int); // _ZN15MobSpawnerBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
