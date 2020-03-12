#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../actor/Actor.h"
#include "../util/Vec3.h"
#include "../../unmapped/Block.h"
#include "../actor/Player.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class LanternBlock : BlockLegacy {

public:
    virtual void movedByPiston(BlockSource &, BlockPos const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual bool isWaterBlocking()const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    ~LanternBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual bool canContainLiquid()const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual bool canBeSilkTouched()const;
    virtual void waterSpreadCausesSpawn()const;
    void _checkToQueueTick(BlockSource &, BlockPos const&)const;
    void _couldHang(BlockSource &, BlockPos const&)const;
    LanternBlock(std::string const&, int);
};
