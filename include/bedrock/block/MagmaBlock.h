#pragma once

#include <string>
#include "BlockLegacy.h"


class MagmaBlock : BlockLegacy {

public:
    ~MagmaBlock(); // _ZN10MagmaBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK10MagmaBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const; // _ZNK10MagmaBlock15checkIsPathableER5ActorRK8BlockPosS4_
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK10MagmaBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK10MagmaBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getVariant(Block const&)const; // _ZNK10MagmaBlock10getVariantERK5Block
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const; // _ZNK10MagmaBlock11animateTickER11BlockSourceRK8BlockPosR6Random
    MagmaBlock(std::string const&, int); // _ZN10MagmaBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void getTickDelay()const; // _ZNK10MagmaBlock12getTickDelayEv
    void addToTickQueue(BlockSource &, BlockPos const&, Random &)const; // _ZNK10MagmaBlock14addToTickQueueER11BlockSourceRK8BlockPosR6Random
};
