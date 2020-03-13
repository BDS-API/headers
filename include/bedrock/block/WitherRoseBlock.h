#pragma once

#include <string>
#include "FlowerBlock.h"


class WitherRoseBlock : FlowerBlock {

public:
    ~WitherRoseBlock(); // _ZN15WitherRoseBlockD2Ev
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition // _ZNK15WitherRoseBlock12onFertilizedER11BlockSourceRK8BlockPosP5Actor14FertilizerType
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const; // _ZNK15WitherRoseBlock10mayPlaceOnER11BlockSourceRK8BlockPos
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK15WitherRoseBlock15getResourceItemER6RandomRK5Blocki
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const; // _ZNK15WitherRoseBlock12entityInsideER11BlockSourceRK8BlockPosR5Actor
    virtual std::string buildDescriptionId(Block const&)const; // _ZNK15WitherRoseBlock18buildDescriptionIdB5cxx11ERK5Block
    virtual bool isAuxValueRelevantForPicking()const; // _ZNK15WitherRoseBlock28isAuxValueRelevantForPickingEv
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const; // _ZNK15WitherRoseBlock11animateTickER11BlockSourceRK8BlockPosR6Random
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK15WitherRoseBlock24getSilkTouchItemInstanceERK5Block
    WitherRoseBlock(std::string const&, int); // _ZN15WitherRoseBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _randomParticleOffset(Random &)const; // _ZNK15WitherRoseBlock21_randomParticleOffsetER6Random
};
