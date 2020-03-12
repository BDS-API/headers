#pragma once

#include "IBlockPlacementTarget.h"
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "Block.h"
#include "../bedrock/level/feature/Feature.h"
#include "../bedrock/util/Random.h"
#include "LegacyStructureSettings.h"
#include "LegacyStructureTemplate.h"


class WorldBlockTarget : IBlockPlacementTarget {

public:
    ~WorldBlockTarget();
    virtual void mayPlace(BlockPos const&, Block const&)const;
    virtual void placeLegacyStructure(BlockPos const&, LegacyStructureTemplate &, LegacyStructureSettings &);
    virtual void shimPlaceForOldFeatures(Feature const&, BlockPos const&, Random &)const;
    virtual void apply()const;
    virtual void getBlock(BlockPos const&)const;
    virtual bool canSurvive(BlockPos const&, Block const&)const;
    virtual void setBlock(BlockPos const&, Block const&, int);
    WorldBlockTarget(BlockSource &);
};
