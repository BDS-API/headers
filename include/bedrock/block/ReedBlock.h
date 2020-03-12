#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../actor/Actor.h"
#include "../../unmapped/Block.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class ReedBlock : BlockLegacy {

public:
    ~ReedBlock();
    virtual bool canContainLiquid()const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual bool canBeSilkTouched()const;
    virtual void waterSpreadCausesSpawn()const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const;
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void getColor(Block const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void onGraphicsModeChanged(bool, bool, bool);
    virtual void getColorAtPos(BlockSource &, BlockPos const&)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    ReedBlock(std::string const&, int);
    void checkAlive(BlockSource &, BlockPos const&)const;
};
