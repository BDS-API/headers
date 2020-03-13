#pragma once

#include <string>
#include "BlockLegacy.h"


class WebBlock : BlockLegacy {

public:
    ~WebBlock(); // _ZN8WebBlockD2Ev
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK8WebBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual void waterSpreadCausesSpawn()const; // _ZNK8WebBlock22waterSpreadCausesSpawnEv
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK8WebBlock15getResourceItemER6RandomRK5Blocki
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const; // _ZNK8WebBlock12entityInsideER11BlockSourceRK8BlockPosR5Actor
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const; // _ZNK8WebBlock13playerDestroyER6PlayerRK8BlockPosRK5Block
    WebBlock(std::string const&, int); // _ZN8WebBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
