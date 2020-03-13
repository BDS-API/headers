#pragma once

#include <string>
#include "ActorBlock.h"
#include <vector>


class EndPortalBlock : ActorBlock {

public:
    ~EndPortalBlock(); // _ZN14EndPortalBlockD2Ev
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const; // _ZNK14EndPortalBlock17getCollisionShapeER4AABBRK5BlockR11BlockSourceRK8BlockPosP5Actor
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK14EndPortalBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &, Actor *)const; // _ZNK14EndPortalBlock18addCollisionShapesERK5BlockR11BlockSourceRK8BlockPosPK4AABBRSt6vectorIS8_SaIS8_EEP5Actor
    virtual bool isWaterBlocking()const; // _ZNK14EndPortalBlock15isWaterBlockingEv
    virtual void waterSpreadCausesSpawn()const; // _ZNK14EndPortalBlock22waterSpreadCausesSpawnEv
    virtual bool canContainLiquid()const; // _ZNK14EndPortalBlock16canContainLiquidEv
    virtual void onFallOn(BlockSource &, BlockPos const&, Actor *, float)const; // _ZNK14EndPortalBlock8onFallOnER11BlockSourceRK8BlockPosP5Actorf
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK14EndPortalBlock16getResourceCountER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK14EndPortalBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const; // _ZNK14EndPortalBlock14spawnResourcesER11BlockSourceRK8BlockPosRK5Blockfi
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const; // _ZNK14EndPortalBlock12entityInsideER11BlockSourceRK8BlockPosR5Actor
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const; // _ZNK14EndPortalBlock11animateTickER11BlockSourceRK8BlockPosR6Random
    virtual void getEntityResourceItem(Random &, BlockActor const&, int)const; // _ZNK14EndPortalBlock21getEntityResourceItemER6RandomRK10BlockActori
    EndPortalBlock(std::string const&, int); // _ZN14EndPortalBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
