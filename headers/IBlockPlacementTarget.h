#pragma once

class IBlockPlacementTarget {

    virtual void ~IBlockPlacementTarget();
    virtual void ~IBlockPlacementTarget();
    virtual void getBlock(BlockPos const&)const;
    virtual void setBlock(BlockPos const&, Block const&, int);
    virtual void apply(void)const;
    virtual void placeLegacyStructure(BlockPos const&, LegacyStructureTemplate &, LegacyStructureSettings &);
    virtual void mayPlace(BlockPos const&, Block const&)const;
    virtual void canSurvive(BlockPos const&, Block const&)const;
    virtual void shimPlaceForOldFeatures(Feature const&, BlockPos const&, Random &)const;
}
