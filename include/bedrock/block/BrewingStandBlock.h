#pragma once

#include "unmapped/BlockSource.h"
#include <string>
#include <memory>
#include "./ActorBlock.h"
#include "../util/BlockPos.h"
#include "../actor/Actor.h"
#include <vector>
#include "../util/AABB.h"
#include "../actor/Player.h"
#include "../util/Random.h"
#include "../../unmapped/Block.h"


class BrewingStandBlock : ActorBlock {

public:
    virtual ~BrewingStandBlock();
    virtual void addAABBs(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB, std::allocator<AABB>> &)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB, std::allocator<AABB>> &, Actor *)const;
    virtual bool isContainerBlock()const;
    virtual bool isCraftingBlock()const;
    virtual bool isInteractiveBlock()const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual bool hasComparatorSignal()const;
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;

    BrewingStandBlock(std::string const&, int);
};
