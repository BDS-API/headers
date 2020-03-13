#pragma once

#include <string>
#include "ActorBlock.h"


class NetherReactorBlock : ActorBlock {

public:
    ~NetherReactorBlock(); // _ZN18NetherReactorBlockD2Ev
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK18NetherReactorBlock16getResourceCountER6RandomRK5Blocki
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const; // _ZNK18NetherReactorBlock14spawnResourcesER11BlockSourceRK8BlockPosRK5Blockfi
    NetherReactorBlock(std::string const&, int, Material const&); // _ZN18NetherReactorBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiRK8Material
};
