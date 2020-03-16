#pragma once

#include "RotatedPillarBlock.h"
#include <string>


class HayBlockBlock : public RotatedPillarBlock {

public:
    virtual ~HayBlockBlock(); // _ZN13HayBlockBlockD2Ev
    virtual void __fake_function0(); // fake
    virtual void onFallOn(BlockSource &, BlockPos const&, Actor *, float)const; // _ZNK13HayBlockBlock8onFallOnER11BlockSourceRK8BlockPosP5Actorf
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK13HayBlockBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void getVariant(Block const&)const; // _ZNK13HayBlockBlock10getVariantERK5Block
    HayBlockBlock(std::string const&, int); // _ZN13HayBlockBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
