#pragma once

#include "../../unmapped/Block"
#include "../../unmapped/BlockSource"
#include "../actor/Player"
#include "../actor/Actor"


class StonecutterBlock : BlockLegacy {

public:
    virtual StonecutterBlock::~StonecutterBlock();
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool isCraftingBlock(void)const;
    virtual bool canContainLiquid(void)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    StonecutterBlock(std::string const&, int);
};
