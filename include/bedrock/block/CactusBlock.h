#pragma once

#include "../actor/Actor"
#include "../util/Random"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"
#include "../util/AABB"


class CactusBlock : BlockLegacy {

public:
    CactusBlock::~CactusBlock()
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void onGraphicsModeChanged(bool, bool, bool);
    virtual bool canBeSilkTouched()const;
    virtual bool dealsContactDamage(Actor const&, Block const&, bool)const;

    CactusBlock(std::string const&, int);
    void _checkAlive(BlockSource &, BlockPos const&)const;
};
