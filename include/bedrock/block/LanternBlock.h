#pragma once

#include <string>
#include "BlockLegacy.h"


class LanternBlock : BlockLegacy {

public:
    virtual void waterSpreadCausesSpawn()const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual bool isWaterBlocking()const;
    ~LanternBlock();
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual bool canBeSilkTouched()const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual bool canContainLiquid()const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void movedByPiston(BlockSource &, BlockPos const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    LanternBlock(std::string const&, int);
    void _checkToQueueTick(BlockSource &, BlockPos const&)const;
    void _couldHang(BlockSource &, BlockPos const&)const;
};
