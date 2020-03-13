#pragma once

#include <string>
#include "BushBlock.h"


class FlowerBlock : BushBlock {

public:
    ~FlowerBlock(); // _ZN11FlowerBlockD2Ev
    virtual void randomlyModifyPosition(BlockPos const&)const; // _ZNK11FlowerBlock22randomlyModifyPositionERK8BlockPos
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK11FlowerBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual bool canContainLiquid()const; // _ZNK11FlowerBlock16canContainLiquidEv
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition // _ZNK11FlowerBlock12onFertilizedER11BlockSourceRK8BlockPosP5Actor14FertilizerType
    virtual void mayPlace(BlockSource &, BlockPos const&)const; // _ZNK11FlowerBlock8mayPlaceER11BlockSourceRK8BlockPos
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK11FlowerBlock15getResourceItemER6RandomRK5Blocki
    virtual void getRenderLayer()const; // _ZNK11FlowerBlock14getRenderLayerEv
    virtual std::string buildDescriptionId(Block const&)const; // _ZNK11FlowerBlock18buildDescriptionIdB5cxx11ERK5Block
    virtual bool isAuxValueRelevantForPicking()const; // _ZNK11FlowerBlock28isAuxValueRelevantForPickingEv
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const; // _ZNK11FlowerBlock14getRenderLayerERK5BlockR11BlockSourceRK8BlockPos
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK11FlowerBlock24getSilkTouchItemInstanceERK5Block
//  FlowerBlock(std::string const&, int, FlowerBlock::Type); //TODO: incomplete function definition // _ZN11FlowerBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiNS_4TypeE
    void _randomWalk(BlockSource &, int &, int &, int &, int)const; // _ZNK11FlowerBlock11_randomWalkER11BlockSourceRiS2_S2_i
    void _getRenderLayerImpl()const; // _ZNK11FlowerBlock19_getRenderLayerImplEv
};
