#pragma once

#include "../bedrock/util/BlockPos.h"
#include "../bedrock/util/Random.h"
#include "./LegacyStructureTemplate.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "./IBlockPlacementTarget.h"
#include "./LegacyStructureSettings.h"
#include "./Block.h"
#include "../bedrock/level/feature/Feature.h"


class WorldBlockTarget : IBlockPlacementTarget {

public:
    virtual ~WorldBlockTarget();
    virtual void getBlock(BlockPos const&)const;
    virtual void setBlock(BlockPos const&, Block const&, int);
    virtual void apply()const;
    virtual void placeLegacyStructure(BlockPos const&, LegacyStructureTemplate &, LegacyStructureSettings &);
    virtual void mayPlace(BlockPos const&, Block const&)const;
    virtual bool canSurvive(BlockPos const&, Block const&)const;
    virtual void shimPlaceForOldFeatures(Feature const&, BlockPos const&, Random &)const;

    WorldBlockTarget(BlockSource &);
};
