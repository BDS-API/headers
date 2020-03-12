#pragma once

#include <string>
#include "BlockLegacy.h"
#include <vector>


class EndPortalFrameBlock : BlockLegacy {

public:
    ~EndPortalFrameBlock();
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void addAABBs(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &, Actor *)const;
    virtual bool hasComparatorSignal()const;
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual bool isInteractiveBlock()const;
    void createPortal(BlockSource &, BlockPos const&);
    void tryCreatePortal(BlockSource &, BlockPos const&);
    EndPortalFrameBlock(std::string const&, int);
};
