#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../actor/Actor.h"
#include "../util/Vec3.h"
#include "../../unmapped/Block.h"
#include <vector>
#include "../actor/Player.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class EndPortalFrameBlock : BlockLegacy {

public:
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void addAABBs(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual bool hasComparatorSignal()const;
    virtual bool isInteractiveBlock()const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &, Actor *)const;
    virtual void use(Player &, BlockPos const&)const;
    ~EndPortalFrameBlock();
    void tryCreatePortal(BlockSource &, BlockPos const&);
    void createPortal(BlockSource &, BlockPos const&);
    EndPortalFrameBlock(std::string const&, int);
};
