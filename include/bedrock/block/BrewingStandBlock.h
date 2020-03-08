#pragma once

#include "../../unmapped/Block"
#include "../../unmapped/BlockSource"
#include "../actor/Player"
#include "../../unmapped/Random"


class BrewingStandBlock : ActorBlock {

public:
    virtual BrewingStandBlock::~BrewingStandBlock();
    virtual void addAABBs(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB, std::allocator<AABB>> &)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB, std::allocator<AABB>> &, Actor *)const;
    virtual bool isContainerBlock(void)const;
    virtual bool isCraftingBlock(void)const;
    virtual bool isInteractiveBlock(void)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual bool hasComparatorSignal(void)const;
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    virtual void buildDescriptionId[abi:cxx11](Block const&)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;

    BrewingStandBlock(std::string const&, int);
};
