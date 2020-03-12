#pragma once

#include "../util/AABB.h"
#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "ActorBlock.h"
#include "../../unmapped/Block.h"
#include <vector>
#include "../actor/Player.h"
#include "../util/Random.h"


class BrewingStandBlock : ActorBlock {

public:
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &, Actor *)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool hasComparatorSignal()const;
    virtual std::string buildDescriptionId(Block const&)const;
    ~BrewingStandBlock();
    virtual void addAABBs(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &)const;
    virtual bool isInteractiveBlock()const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool isContainerBlock()const;
    virtual bool isCraftingBlock()const;
    BrewingStandBlock(std::string const&, int);
};
