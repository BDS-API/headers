#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../actor/Actor.h"
#include "../../unmapped/Block.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class KelpBlock : BlockLegacy {

public:
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual bool canBeSilkTouched()const;
    virtual void mayConsumeFertilizer(BlockSource &)const;
    virtual void getColor(Block const&)const;
    virtual bool canContainLiquid()const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onGraphicsModeChanged(bool, bool, bool);
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void waterSpreadCausesSpawn()const;
    ~KelpBlock();
    void getAge(Block const&)const;
    void shouldGrow(BlockSource &, BlockPos const&)const;
    void checkAlive(BlockSource &, BlockPos const&)const;
    void _tryGrow(BlockSource &, BlockPos const&, int)const;
    KelpBlock(std::string const&, int);
};
