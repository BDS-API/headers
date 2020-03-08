#pragma once

#include "../util/Random"
#include "unmapped/BlockSource"
#include "../../unmapped/Material"
#include "../../unmapped/Block"
#include "../util/BlockPos"
#include "../util/AABB"


class BushBlock : BlockLegacy {

public:
    static long MAX_GROWTH;

    virtual BushBlock::~BushBlock()
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void waterSpreadCausesSpawn()const;
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void checkAlive(BlockSource &, BlockPos const&)const;

    BushBlock(std::string const&, int, Material const&);
    void growCrops(BlockSource &, BlockPos const&, FertilizerType)const;
};
