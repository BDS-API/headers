#pragma once

#include <string>
#include "BlockLegacy.h"


class ActorBlock : BlockLegacy {

public:
    ~ActorBlock(); // _ZN10ActorBlockD2Ev
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const; // _ZNK10ActorBlock17playerWillDestroyER6PlayerRK8BlockPosRK5Block
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK10ActorBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const; // _ZNK10ActorBlock14spawnResourcesER11BlockSourceRK8BlockPosRK5Blockfi
    virtual void triggerEvent(BlockSource &, BlockPos const&, int, int)const; // _ZNK10ActorBlock12triggerEventER11BlockSourceRK8BlockPosii
    virtual bool canBeSilkTouched()const; // _ZNK10ActorBlock16canBeSilkTouchedEv
    virtual void getEntityResourceItem(Random &, BlockActor const&, int)const; // _ZNK10ActorBlock21getEntityResourceItemER6RandomRK10BlockActori
    ActorBlock(std::string const&, int, Material const&); // _ZN10ActorBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiRK8Material
    void newBlockEntity(BlockPos const&, Block const&)const; // _ZNK10ActorBlock14newBlockEntityERK8BlockPosRK5Block
};
