#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../actor/Actor.h"
#include "../util/Vec3.h"
#include "../../unmapped/Block.h"
#include "../actor/Player.h"
#include "../util/Random.h"
#include "HeavyBlock.h"


class AnvilBlock : HeavyBlock {

public:
    virtual bool isCraftingBlock()const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void onLand(BlockSource &, BlockPos const&)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual std::string getDustParticleName(Block const&)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual bool canContainLiquid()const;
    virtual bool breaksFallingBlocks(Block const&)const;
    virtual void getLiquidClipVolume(BlockSource &, BlockPos const&, AABB &)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void falling()const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool canBeSilkTouched()const;
    virtual void getDustColor(Block const&)const;
    ~AnvilBlock();
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getVariant(Block const&)const;
    bool isSolidRender()const;
    bool isCubeShaped();
    AnvilBlock(std::string const&, int);
};
