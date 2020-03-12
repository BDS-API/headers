#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../actor/Actor.h"
#include "../../unmapped/Block.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class CactusBlock : BlockLegacy {

public:
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual bool dealsContactDamage(Actor const&, Block const&, bool)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    ~CactusBlock();
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual bool canBeSilkTouched()const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void onGraphicsModeChanged(bool, bool, bool);
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    CactusBlock(std::string const&, int);
    void _checkAlive(BlockSource &, BlockPos const&)const;
};
