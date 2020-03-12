#pragma once

#include <string>
#include "HeavyBlock.h"


class AnvilBlock : HeavyBlock {

public:
    virtual bool breaksFallingBlocks(Block const&)const;
    virtual std::string getDustParticleName(Block const&)const;
    virtual bool canContainLiquid()const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool isCraftingBlock()const;
    virtual void use(Player &, BlockPos const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void onLand(BlockSource &, BlockPos const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool canBeSilkTouched()const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual void falling()const;
    virtual void getDustColor(Block const&)const;
    ~AnvilBlock();
    virtual void getVariant(Block const&)const;
    virtual void getLiquidClipVolume(BlockSource &, BlockPos const&, AABB &)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    bool isSolidRender()const;
    AnvilBlock(std::string const&, int);
    bool isCubeShaped();
};
