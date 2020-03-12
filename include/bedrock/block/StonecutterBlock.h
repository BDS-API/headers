#pragma once

#include <string>
#include "BlockLegacy.h"


class StonecutterBlock : BlockLegacy {

public:
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool isCraftingBlock()const;
    ~StonecutterBlock();
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual bool canContainLiquid()const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    StonecutterBlock(std::string const&, int);
};
