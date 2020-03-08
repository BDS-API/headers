#pragma once

#include "../bedrock/util/Random"
#include "../bedrock/block/unmapped/BlockSource"
#include "../bedrock/level/feature/Feature"
#include "../bedrock/util/BlockPos"


class WorldBlockTarget : IBlockPlacementTarget {

public:
    virtual WorldBlockTarget::~WorldBlockTarget()
    virtual void getBlock(BlockPos const&)const;
    virtual void setBlock(BlockPos const&, Block const&, int);
    virtual void apply()const;
    virtual void placeLegacyStructure(BlockPos const&, LegacyStructureTemplate &, LegacyStructureSettings &);
    virtual void mayPlace(BlockPos const&, Block const&)const;
    virtual bool canSurvive(BlockPos const&, Block const&)const;
    virtual void shimPlaceForOldFeatures(Feature const&, BlockPos const&, Random &)const;

    WorldBlockTarget(BlockSource &);
};
