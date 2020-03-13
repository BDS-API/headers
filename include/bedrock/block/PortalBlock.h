#pragma once

#include <string>
#include "BlockLegacy.h"


class PortalBlock : BlockLegacy {

public:
    ~PortalBlock(); // _ZN11PortalBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK11PortalBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK11PortalBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual bool isWaterBlocking()const; // _ZNK11PortalBlock15isWaterBlockingEv
    virtual void waterSpreadCausesSpawn()const; // _ZNK11PortalBlock22waterSpreadCausesSpawnEv
    virtual bool canContainLiquid()const; // _ZNK11PortalBlock16canContainLiquidEv
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK11PortalBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void onRemove(BlockSource &, BlockPos const&)const; // _ZNK11PortalBlock8onRemoveER11BlockSourceRK8BlockPos
    virtual void mayPick(BlockSource &, Block const&, bool)const; // _ZNK11PortalBlock7mayPickER11BlockSourceRK5Blockb
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK11PortalBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK11PortalBlock16getResourceCountER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK11PortalBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const; // _ZNK11PortalBlock12entityInsideER11BlockSourceRK8BlockPosR5Actor
    virtual void getVisualShapeInWorld(Block const&, BlockSource &, BlockPos const&, AABB &, bool)const; // _ZNK11PortalBlock21getVisualShapeInWorldERK5BlockR11BlockSourceRK8BlockPosR4AABBb
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const; // _ZNK11PortalBlock11animateTickER11BlockSourceRK8BlockPosR6Random
    PortalBlock(std::string const&, int); // _ZN11PortalBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
//  void _canSpawnBasedOnDifficulty(Difficulty, unsigned long)const; //TODO: incomplete function definition // _ZNK11PortalBlock26_canSpawnBasedOnDifficultyE10Difficultym
    void _locateFloorYValue(BlockSource &, BlockPos const&)const; // _ZNK11PortalBlock18_locateFloorYValueER11BlockSourceRK8BlockPos
//  void _offsetSpawnPosition(Vec3 &, PortalAxis)const; //TODO: incomplete function definition // _ZNK11PortalBlock20_offsetSpawnPositionER4Vec310PortalAxis
    void trySpawnPortal(BlockSource &, BlockPos const&)const; // _ZNK11PortalBlock14trySpawnPortalER11BlockSourceRK8BlockPos
};
