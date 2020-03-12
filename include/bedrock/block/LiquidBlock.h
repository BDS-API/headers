#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../actor/Actor.h"
#include "../../unmapped/Material.h"
#include "../util/Vec3.h"
#include "../../unmapped/Block.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class LiquidBlock : BlockLegacy {

public:
    virtual void mayPick(BlockSource &, Block const&, bool)const;
    virtual void getColorAtPos(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void handleEntityInside(BlockSource &, BlockPos const&, Actor *, Vec3 &)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool canBeSilkTouched()const;
    virtual bool canContainLiquid()const;
    virtual void getColor(Block const&)const;
    ~LiquidBlock();
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    void getTickDelay(BlockSource &)const;
    void trySpreadFire(BlockSource &, BlockPos const&, Random &)const;
    void getDepth(BlockSource &, BlockPos const&)const;
    void solidify(BlockSource &, BlockPos const&, BlockPos const&)const;
    void getSlopeAngle(BlockSource &, BlockPos const&, Material const&);
    LiquidBlock(std::string const&, int, Material const&);
    void getHeightFromData(int);
    void getBrightness(BlockSource &, BlockPos const&);
    void emitFizzParticle(BlockSource &, BlockPos const&)const;
    void getRenderedDepth(BlockSource &, BlockPos const&)const;
    void getHeightFromDepth(int);
    void _getFlow(BlockSource &, BlockPos const&)const;
};
