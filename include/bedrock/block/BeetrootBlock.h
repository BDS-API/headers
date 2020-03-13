#pragma once

#include <string>
#include "CropBlock.h"


class BeetrootBlock : CropBlock {

public:
    ~BeetrootBlock(); // _ZN13BeetrootBlockD2Ev
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK13BeetrootBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual void getVariant(Block const&)const; // _ZNK13BeetrootBlock10getVariantERK5Block
    virtual void getBaseSeed()const; // _ZNK13BeetrootBlock11getBaseSeedEv
    virtual void getBaseCrop()const; // _ZNK13BeetrootBlock11getBaseCropEv
    virtual void getCropNum(Random &, int, int)const; // _ZNK13BeetrootBlock10getCropNumER6Randomii
    BeetrootBlock(std::string const&, int); // _ZN13BeetrootBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
