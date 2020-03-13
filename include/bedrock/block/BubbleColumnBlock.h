#pragma once

#include <string>
#include "BlockLegacy.h"
#include <vector>


class BubbleColumnBlock : BlockLegacy {

public:
    ~BubbleColumnBlock(); // _ZN17BubbleColumnBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK17BubbleColumnBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const; // _ZNK17BubbleColumnBlock17getCollisionShapeER4AABBRK5BlockR11BlockSourceRK8BlockPosP5Actor
    virtual void addAABBs(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &)const; // _ZNK17BubbleColumnBlock8addAABBsERK5BlockR11BlockSourceRK8BlockPosPK4AABBRSt6vectorIS8_SaIS8_EE
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK17BubbleColumnBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &, Actor *)const; // _ZNK17BubbleColumnBlock18addCollisionShapesERK5BlockR11BlockSourceRK8BlockPosPK4AABBRSt6vectorIS8_SaIS8_EEP5Actor
    virtual bool canContainLiquid()const; // _ZNK17BubbleColumnBlock16canContainLiquidEv
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const; // _ZNK17BubbleColumnBlock15checkIsPathableER5ActorRK8BlockPosS4_
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK17BubbleColumnBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void mayPick()const; // _ZNK17BubbleColumnBlock7mayPickEv
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK17BubbleColumnBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK17BubbleColumnBlock16getResourceCountER6RandomRK5Blocki
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const; // _ZNK17BubbleColumnBlock12entityInsideER11BlockSourceRK8BlockPosR5Actor
    virtual bool canSurvive(BlockSource &, BlockPos const&)const; // _ZNK17BubbleColumnBlock10canSurviveER11BlockSourceRK8BlockPos
    virtual void onGraphicsModeChanged(bool, bool, bool); // _ZN17BubbleColumnBlock21onGraphicsModeChangedEbbb
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const; // _ZNK17BubbleColumnBlock11animateTickER11BlockSourceRK8BlockPosR6Random
    BubbleColumnBlock(std::string const&, int); // _ZN17BubbleColumnBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void createParticles(BlockSource &, BlockPos const&, Random &, bool); // _ZN17BubbleColumnBlock15createParticlesER11BlockSourceRK8BlockPosR6Randomb
    void addBubbleColumnSegment(BlockSource &, BlockPos const&); // _ZN17BubbleColumnBlock22addBubbleColumnSegmentER11BlockSourceRK8BlockPos
    bool isValidBubbleColumnLocation(BlockSource &, BlockPos const&, Block const&); // _ZN17BubbleColumnBlock27isValidBubbleColumnLocationER11BlockSourceRK8BlockPosRK5Block
    void getFlowDownward(Block const&); // _ZN17BubbleColumnBlock15getFlowDownwardERK5Block
    void getTickDelay(BlockSource &)const; // _ZNK17BubbleColumnBlock12getTickDelayER11BlockSource
    bool isValidBubbleColumnLocation(BlockSource &, BlockPos const&); // _ZN17BubbleColumnBlock27isValidBubbleColumnLocationER11BlockSourceRK8BlockPos
};
