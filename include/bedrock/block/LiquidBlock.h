#pragma once

#include "unmapped/BlockSource"
#include "../actor/Actor"
#include "../util/Random"
#include "../../unmapped/Material"
#include "../../unmapped/Block"
#include "../util/BlockPos"
#include "../util/Vec3"
#include "../util/AABB"


class LiquidBlock : BlockLegacy {

public:
    virtual LiquidBlock::~LiquidBlock()
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool canContainLiquid()const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void mayPick(BlockSource &, Block const&, bool)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void handleEntityInside(BlockSource &, BlockPos const&, Actor *, Vec3 &)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual void getColor(Block const&)const;
    virtual void getColorAtPos(BlockSource &, BlockPos const&)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool canBeSilkTouched()const;

    LiquidBlock(std::string const&, int, Material const&);
    void trySpreadFire(BlockSource &, BlockPos const&, Random &)const;
    void getHeightFromDepth(int);
    void getHeightFromData(int);
    void _getFlow(BlockSource &, BlockPos const&)const;
    void getTickDelay(BlockSource &)const;
    void getBrightness(BlockSource &, BlockPos const&);
    void getSlopeAngle(BlockSource &, BlockPos const&, Material const&);
    void emitFizzParticle(BlockSource &, BlockPos const&)const;
    void getDepth(BlockSource &, BlockPos const&)const;
    void getRenderedDepth(BlockSource &, BlockPos const&)const;
    void solidify(BlockSource &, BlockPos const&, BlockPos const&)const;
};
