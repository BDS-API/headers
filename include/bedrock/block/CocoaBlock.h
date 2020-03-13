#pragma once

#include <string>
#include "BlockLegacy.h"


class CocoaBlock : BlockLegacy {

public:
    ~CocoaBlock(); // _ZN10CocoaBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK10CocoaBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK10CocoaBlock7onPlaceER11BlockSourceRK8BlockPos
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition // _ZNK10CocoaBlock12onFertilizedER11BlockSourceRK8BlockPosP5Actor14FertilizerType
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK10CocoaBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK10CocoaBlock16getResourceCountER6RandomRK5Blocki
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK10CocoaBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK10CocoaBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const; // _ZNK10CocoaBlock17getPlacementBlockER5ActorRK8BlockPoshRK4Vec3i
    virtual bool canSurvive(BlockSource &, BlockPos const&)const; // _ZNK10CocoaBlock10canSurviveER11BlockSourceRK8BlockPos
    virtual void getVisualShape(Block const&, AABB &, bool)const; // _ZNK10CocoaBlock14getVisualShapeERK5BlockR4AABBb
    virtual bool canBeSilkTouched()const; // _ZNK10CocoaBlock16canBeSilkTouchedEv
    CocoaBlock(std::string const&, int); // _ZN10CocoaBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
