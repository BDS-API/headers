#pragma once

#include <string>
#include "ActorBlock.h"


class MovingBlock : ActorBlock {

public:
    ~MovingBlock(); // _ZN11MovingBlockD2Ev
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const; // _ZNK11MovingBlock17getCollisionShapeER4AABBRK5BlockR11BlockSourceRK8BlockPosP5Actor
    virtual void onFallOn(BlockSource &, BlockPos const&, Actor *, float)const; // _ZNK11MovingBlock8onFallOnER11BlockSourceRK8BlockPosP5Actorf
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const; // _ZNK11MovingBlock17playerWillDestroyER6PlayerRK8BlockPosRK5Block
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK11MovingBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const; // _ZNK11MovingBlock14spawnResourcesER11BlockSourceRK8BlockPosRK5Blockfi
    virtual bool pushesUpFallingBlocks()const; // _ZNK11MovingBlock21pushesUpFallingBlocksEv
    virtual void getVisualShapeInWorld(Block const&, BlockSource &, BlockPos const&, AABB &, bool)const; // _ZNK11MovingBlock21getVisualShapeInWorldERK5BlockR11BlockSourceRK8BlockPosR4AABBb
    MovingBlock(std::string const&, int); // _ZN11MovingBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
