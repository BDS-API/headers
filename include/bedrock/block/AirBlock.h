#pragma once

#include <string>
#include "BlockLegacy.h"
#include <vector>


class AirBlock : BlockLegacy {

public:
    ~AirBlock(); // _ZN8AirBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK8AirBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const; // _ZNK8AirBlock17getCollisionShapeER4AABBRK5BlockR11BlockSourceRK8BlockPosP5Actor
    virtual bool isObstructingChests(BlockSource &, BlockPos const&)const; // _ZNK8AirBlock19isObstructingChestsER11BlockSourceRK8BlockPos
    virtual void addAABBs(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &)const; // _ZNK8AirBlock8addAABBsERK5BlockR11BlockSourceRK8BlockPosPK4AABBRSt6vectorIS8_SaIS8_EE
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK8AirBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &, Actor *)const; // _ZNK8AirBlock18addCollisionShapesERK5BlockR11BlockSourceRK8BlockPosPK4AABBRSt6vectorIS8_SaIS8_EEP5Actor
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const; // _ZNK8AirBlock15checkIsPathableER5ActorRK8BlockPosS4_
    virtual void mayPick()const; // _ZNK8AirBlock7mayPickEv
    virtual void mayPick(BlockSource &, Block const&, bool)const; // _ZNK8AirBlock7mayPickER11BlockSourceRK5Blockb
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const; // _ZNK8AirBlock8mayPlaceER11BlockSourceRK8BlockPosh
    virtual void mayPlace(BlockSource &, BlockPos const&)const; // _ZNK8AirBlock8mayPlaceER11BlockSourceRK8BlockPos
    virtual void tryToPlace(BlockSource &, BlockPos const&, Block const&, ActorBlockSyncMessage const*)const; // _ZNK8AirBlock10tryToPlaceER11BlockSourceRK8BlockPosRK5BlockPK21ActorBlockSyncMessage
    virtual void destroy(BlockSource &, BlockPos const&, Block const&, Actor *)const; // _ZNK8AirBlock7destroyER11BlockSourceRK8BlockPosRK5BlockP5Actor
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const; // _ZNK8AirBlock17playerWillDestroyER6PlayerRK8BlockPosRK5Block
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const; // _ZNK8AirBlock12entityInsideER11BlockSourceRK8BlockPosR5Actor
    virtual bool canHaveExtraData()const; // _ZNK8AirBlock16canHaveExtraDataEv
    virtual void getVisualShapeInWorld(Block const&, BlockSource &, BlockPos const&, AABB &, bool)const; // _ZNK8AirBlock21getVisualShapeInWorldERK5BlockR11BlockSourceRK8BlockPosR4AABBb
    virtual void getVisualShape(Block const&, AABB &, bool)const; // _ZNK8AirBlock14getVisualShapeERK5BlockR4AABBb
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const; // _ZNK8AirBlock11animateTickER11BlockSourceRK8BlockPosR6Random
    virtual bool canBeSilkTouched()const; // _ZNK8AirBlock16canBeSilkTouchedEv
    AirBlock(std::string const&, int, Material const&); // _ZN8AirBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiRK8Material
};
