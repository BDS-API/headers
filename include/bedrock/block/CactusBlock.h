#pragma once

#include <string>
#include "BlockLegacy.h"


class CactusBlock : BlockLegacy {

public:
    virtual bool canBeSilkTouched()const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual bool dealsContactDamage(Actor const&, Block const&, bool)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void onGraphicsModeChanged(bool, bool, bool);
    ~CactusBlock();
    CactusBlock(std::string const&, int);
    void _checkAlive(BlockSource &, BlockPos const&)const;
};
