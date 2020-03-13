#pragma once

#include <string>
#include <functional>
#include "BlockLegacy.h"
#include <vector>


class StairBlock : BlockLegacy {

public:
    static long DEAD_SPACES;

    ~StairBlock(); // _ZN10StairBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK10StairBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual void addAABBs(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &)const; // _ZNK10StairBlock8addAABBsERK5BlockR11BlockSourceRK8BlockPosPK4AABBRSt6vectorIS8_SaIS8_EE
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK10StairBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &, Actor *)const; // _ZNK10StairBlock18addCollisionShapesERK5BlockR11BlockSourceRK8BlockPosPK4AABBRSt6vectorIS8_SaIS8_EEP5Actor
    virtual void getOutline(BlockSource &, BlockPos const&, AABB &)const; // _ZNK10StairBlock10getOutlineER11BlockSourceRK8BlockPosR4AABB
    virtual void getLiquidClipVolume(BlockSource &, BlockPos const&, AABB &)const; // _ZNK10StairBlock19getLiquidClipVolumeER11BlockSourceRK8BlockPosR4AABB
    virtual void liquidCanFlowIntoFromDirection(unsigned char, std::function<Block const& (BlockPos const&)> const&, BlockPos const&)const; // _ZNK10StairBlock30liquidCanFlowIntoFromDirectionEhRKSt8functionIFRK5BlockRK8BlockPosEES6_
    virtual bool canConnect(Block const&, unsigned char, Block const&)const; // _ZNK10StairBlock10canConnectERK5BlockhS2_
    virtual bool isStairBlock()const; // _ZNK10StairBlock12isStairBlockEv
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK10StairBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void onRemove(BlockSource &, BlockPos const&)const; // _ZNK10StairBlock8onRemoveER11BlockSourceRK8BlockPos
    virtual void onExploded(BlockSource &, BlockPos const&, Actor *)const; // _ZNK10StairBlock10onExplodedER11BlockSourceRK8BlockPosP5Actor
    virtual void onStepOn(Actor &, BlockPos const&)const; // _ZNK10StairBlock8onStepOnER5ActorRK8BlockPos
    virtual void getRedstoneProperty(BlockSource &, BlockPos const&)const; // _ZNK10StairBlock19getRedstonePropertyER11BlockSourceRK8BlockPos
    virtual void mayPick()const; // _ZNK10StairBlock7mayPickEv
    virtual void mayPick(BlockSource &, Block const&, bool)const; // _ZNK10StairBlock7mayPickER11BlockSourceRK5Blockb
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const; // _ZNK10StairBlock8mayPlaceER11BlockSourceRK8BlockPosh
    virtual void destroy(BlockSource &, BlockPos const&, Block const&, Actor *)const; // _ZNK10StairBlock7destroyER11BlockSourceRK8BlockPosRK5BlockP5Actor
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK10StairBlock16getResourceCountER6RandomRK5Blocki
    virtual void clip(BlockSource &, BlockPos const&, Vec3 const&, Vec3 const&, bool)const; // _ZNK10StairBlock4clipER11BlockSourceRK8BlockPosRK4Vec3S7_b
    virtual void use(Player &, BlockPos const&)const; // _ZNK10StairBlock3useER6PlayerRK8BlockPos
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const; // _ZNK10StairBlock17getPlacementBlockER5ActorRK8BlockPoshRK4Vec3i
    virtual void attack(Player *, BlockPos const&)const; // _ZNK10StairBlock6attackEP6PlayerRK8BlockPos
    virtual void handleEntityInside(BlockSource &, BlockPos const&, Actor *, Vec3 &)const; // _ZNK10StairBlock18handleEntityInsideER11BlockSourceRK8BlockPosP5ActorR4Vec3
    virtual void getVariant(Block const&)const; // _ZNK10StairBlock10getVariantERK5Block
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const; // _ZNK10StairBlock11animateTickER11BlockSourceRK8BlockPosR6Random
    virtual bool canBeSilkTouched()const; // _ZNK10StairBlock16canBeSilkTouchedEv
    StairBlock(std::string const&, int, BlockLegacy const&, int); // _ZN10StairBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiRK11BlockLegacyi
    void setBaseShape(Block const&, AABB &, bool)const; // _ZNK10StairBlock12setBaseShapeERK5BlockR4AABBb
    void shapeZFightShrink(AABB &)const; // _ZNK10StairBlock17shapeZFightShrinkER4AABB
    void setStepShape(Block const&, BlockSource &, BlockPos const&, AABB &, bool)const; // _ZNK10StairBlock12setStepShapeERK5BlockR11BlockSourceRK8BlockPosR4AABBb
    bool isLockAttached(BlockSource &, BlockPos const&, Block const&)const; // _ZNK10StairBlock14isLockAttachedER11BlockSourceRK8BlockPosRK5Block
    void setInnerPieceShape(Block const&, BlockSource &, BlockPos const&, AABB &, bool)const; // _ZNK10StairBlock18setInnerPieceShapeERK5BlockR11BlockSourceRK8BlockPosR4AABBb
    void _neighboringBlockCheckForCreatingBarrierInDirection(std::function<Block const& (BlockPos const&)> const&, BlockPos const&, Block const&, int)const; // _ZNK10StairBlock51_neighboringBlockCheckForCreatingBarrierInDirectionERKSt8functionIFRK5BlockRK8BlockPosEES6_S3_i
};
