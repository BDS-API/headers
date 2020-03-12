#pragma once

#include <string>
#include "BlockLegacy.h"


class LiquidBlock : BlockLegacy {

public:
    ~LiquidBlock();
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual bool canContainLiquid()const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void mayPick(BlockSource &, Block const&, bool)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool canBeSilkTouched()const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual void getColorAtPos(BlockSource &, BlockPos const&)const;
    virtual void handleEntityInside(BlockSource &, BlockPos const&, Actor *, Vec3 &)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void getColor(Block const&)const;
    void trySpreadFire(BlockSource &, BlockPos const&, Random &)const;
    void getDepth(BlockSource &, BlockPos const&)const;
    void solidify(BlockSource &, BlockPos const&, BlockPos const&)const;
    void getBrightness(BlockSource &, BlockPos const&);
    void emitFizzParticle(BlockSource &, BlockPos const&)const;
    void getSlopeAngle(BlockSource &, BlockPos const&, Material const&);
    void getHeightFromDepth(int);
    LiquidBlock(std::string const&, int, Material const&);
    void _getFlow(BlockSource &, BlockPos const&)const;
    void getTickDelay(BlockSource &)const;
    void getRenderedDepth(BlockSource &, BlockPos const&)const;
    void getHeightFromData(int);
};
