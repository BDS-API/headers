#pragma once

#include "../actor/Player"
#include "../actor/Actor"
#include "../util/Vec3"
#include "../util/Random"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"
#include "../util/AABB"


class AnvilBlock : HeavyBlock {

public:
    AnvilBlock::~AnvilBlock()
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void getLiquidClipVolume(BlockSource &, BlockPos const&, AABB &)const;
    virtual bool isCraftingBlock()const;
    virtual bool canContainLiquid()const;
    virtual bool breaksFallingBlocks(Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getVariant(Block const&)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool canBeSilkTouched()const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void getDustColor(Block const&)const;
    virtual void getDustParticleName(Block const&)const;
    virtual void falling()const;
    virtual void onLand(BlockSource &, BlockPos const&)const;

    AnvilBlock(std::string const&, int);
    bool isCubeShaped();
    bool isSolidRender()const;
};
