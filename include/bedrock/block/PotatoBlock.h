#pragma once

#include <string>
#include "CropBlock.h"


class PotatoBlock : CropBlock {

public:
    ~PotatoBlock(); // _ZN11PotatoBlockD2Ev
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK11PotatoBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const; // _ZNK11PotatoBlock14spawnResourcesER11BlockSourceRK8BlockPosRK5Blockfi
    virtual void getVariant(Block const&)const; // _ZNK11PotatoBlock10getVariantERK5Block
    virtual void getBaseSeed()const; // _ZNK11PotatoBlock11getBaseSeedEv
    virtual void getBaseCrop()const; // _ZNK11PotatoBlock11getBaseCropEv
    virtual void getCropNum(Random &, int, int)const; // _ZNK11PotatoBlock10getCropNumER6Randomii
    PotatoBlock(std::string const&, int); // _ZN11PotatoBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
