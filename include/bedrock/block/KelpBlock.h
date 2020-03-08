#pragma once

#include "../../unmapped/Block"
#include "../../unmapped/BlockSource"
#include "../../unmapped/Random"


class KelpBlock : BlockLegacy {

public:
    virtual KelpBlock::~KelpBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void waterSpreadCausesSpawn(void)const;
    virtual bool canContainLiquid(void)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const;
    virtual void mayConsumeFertilizer(BlockSource &)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void getColor(Block const&)const;
    virtual void onGraphicsModeChanged(bool, bool, bool);
    virtual bool canBeSilkTouched(void)const;

    KelpBlock(std::string const&, int);
    void checkAlive(BlockSource &, BlockPos const&)const;
    void shouldGrow(BlockSource &, BlockPos const&)const;
    void getAge(Block const&)const;
    void _tryGrow(BlockSource &, BlockPos const&, int)const;
};
