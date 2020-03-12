#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../../unmapped/Material.h"
#include "../../unmapped/Block.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class BushBlock : BlockLegacy {

public:
    static long MAX_GROWTH;

    virtual void checkAlive(BlockSource &, BlockPos const&)const;
    virtual void waterSpreadCausesSpawn()const;
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    ~BushBlock();
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    BushBlock(std::string const&, int, Material const&);
//  void growCrops(BlockSource &, BlockPos const&, FertilizerType)const; //TODO: incomplete function definition
};
