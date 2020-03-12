#pragma once

#include <string>
#include "BlockLegacy.h"


class KelpBlock : BlockLegacy {

public:
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void mayConsumeFertilizer(BlockSource &)const;
    virtual void waterSpreadCausesSpawn()const;
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void getColor(Block const&)const;
    virtual void onGraphicsModeChanged(bool, bool, bool);
    ~KelpBlock();
    virtual bool canBeSilkTouched()const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool canContainLiquid()const;
    void checkAlive(BlockSource &, BlockPos const&)const;
    void shouldGrow(BlockSource &, BlockPos const&)const;
    void getAge(Block const&)const;
    KelpBlock(std::string const&, int);
    void _tryGrow(BlockSource &, BlockPos const&, int)const;
};
