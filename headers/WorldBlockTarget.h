#pragma once

class WorldBlockTarget : IBlockPlacementTarget {

public:
    virtual ~WorldBlockTarget();
    virtual void getBlock(BlockPos const&)const;
    virtual void setBlock(BlockPos const&, Block const&, int);
    virtual void apply(void)const;
    virtual void placeLegacyStructure(BlockPos const&, LegacyStructureTemplate &, LegacyStructureSettings &);
    virtual void mayPlace(BlockPos const&, Block const&)const;
    virtual bool canSurvive(BlockPos const&, Block const&)const;
    virtual void shimPlaceForOldFeatures(Feature const&, BlockPos const&, Random &)const;

    void WorldBlockTarget(BlockSource &);
};
