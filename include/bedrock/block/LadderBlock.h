#pragma once

#include <string>
#include "BlockLegacy.h"


class LadderBlock : BlockLegacy {

public:
    ~LadderBlock(); // _ZN11LadderBlockD2Ev
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK11LadderBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual void getLiquidClipVolume(BlockSource &, BlockPos const&, AABB &)const; // _ZNK11LadderBlock19getLiquidClipVolumeER11BlockSourceRK8BlockPosR4AABB
    virtual bool isWaterBlocking()const; // _ZNK11LadderBlock15isWaterBlockingEv
    virtual void sanitizeFillBlock(BlockSource &, BlockPos const&, Block const&)const; // _ZNK11LadderBlock17sanitizeFillBlockER11BlockSourceRK8BlockPosRK5Block
    virtual void waterSpreadCausesSpawn()const; // _ZNK11LadderBlock22waterSpreadCausesSpawnEv
    virtual bool canContainLiquid()const; // _ZNK11LadderBlock16canContainLiquidEv
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const; // _ZNK11LadderBlock8mayPlaceER11BlockSourceRK8BlockPosh
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK11LadderBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK11LadderBlock16getResourceCountER6RandomRK5Blocki
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const; // _ZNK11LadderBlock17getPlacementBlockER5ActorRK8BlockPoshRK4Vec3i
    virtual void getVisualShape(Block const&, AABB &, bool)const; // _ZNK11LadderBlock14getVisualShapeERK5BlockR4AABBb
    virtual bool canBeSilkTouched()const; // _ZNK11LadderBlock16canBeSilkTouchedEv
    LadderBlock(std::string const&, int); // _ZN11LadderBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
