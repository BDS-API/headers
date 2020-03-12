#pragma once

#include "IBlockPlacementTarget.h"


class WorldBlockTarget : IBlockPlacementTarget {

public:
    ~WorldBlockTarget();
    virtual void mayPlace(BlockPos const&, Block const&)const;
    virtual void shimPlaceForOldFeatures(Feature const&, BlockPos const&, Random &)const;
    virtual void apply()const;
    virtual bool canSurvive(BlockPos const&, Block const&)const;
    virtual void placeLegacyStructure(BlockPos const&, LegacyStructureTemplate &, LegacyStructureSettings &);
    virtual void getBlock(BlockPos const&)const;
    virtual void setBlock(BlockPos const&, Block const&, int);
    WorldBlockTarget(BlockSource &);
};
