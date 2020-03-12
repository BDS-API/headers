#pragma once

#include <string>
#include "BlockLegacy.h"


class BushBlock : BlockLegacy {

public:
    static long MAX_GROWTH;

    ~BushBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void checkAlive(BlockSource &, BlockPos const&)const;
    virtual void waterSpreadCausesSpawn()const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    BushBlock(std::string const&, int, Material const&);
//  void growCrops(BlockSource &, BlockPos const&, FertilizerType)const; //TODO: incomplete function definition
};
