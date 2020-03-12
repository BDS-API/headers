#pragma once

#include <string>
#include "ActorBlock.h"
#include <vector>


class BrewingStandBlock : ActorBlock {

public:
    virtual bool hasComparatorSignal()const;
    virtual void addAABBs(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &)const;
    virtual std::string buildDescriptionId(Block const&)const;
    ~BrewingStandBlock();
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual bool isCraftingBlock()const;
    virtual bool isContainerBlock()const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual bool isInteractiveBlock()const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &, Actor *)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    BrewingStandBlock(std::string const&, int);
};
