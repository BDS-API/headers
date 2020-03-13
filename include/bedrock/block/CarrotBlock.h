#pragma once

#include <string>
#include "CropBlock.h"


class CarrotBlock : CropBlock {

public:
    ~CarrotBlock(); // _ZN11CarrotBlockD2Ev
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK11CarrotBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK11CarrotBlock16getResourceCountER6RandomRK5Blocki
    virtual void getRenderLayer()const; // _ZNK11CarrotBlock14getRenderLayerEv
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const; // _ZNK11CarrotBlock14getRenderLayerERK5BlockR11BlockSourceRK8BlockPos
    virtual void getVariant(Block const&)const; // _ZNK11CarrotBlock10getVariantERK5Block
    virtual void getBaseSeed()const; // _ZNK11CarrotBlock11getBaseSeedEv
    virtual void getBaseCrop()const; // _ZNK11CarrotBlock11getBaseCropEv
    virtual void getCropNum(Random &, int, int)const; // _ZNK11CarrotBlock10getCropNumER6Randomii
    CarrotBlock(std::string const&, int); // _ZN11CarrotBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _getRenderLayerImpl()const; // _ZNK11CarrotBlock19_getRenderLayerImplEv
};
