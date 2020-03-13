#pragma once

#include "IBlockPlacementTarget.h"


class WorldBlockTarget : IBlockPlacementTarget {

public:
    ~WorldBlockTarget(); // _ZN16WorldBlockTargetD2Ev
    virtual void getBlock(BlockPos const&)const; // _ZNK16WorldBlockTarget8getBlockERK8BlockPos
    virtual void setBlock(BlockPos const&, Block const&, int); // _ZN16WorldBlockTarget8setBlockERK8BlockPosRK5Blocki
    virtual void apply()const; // _ZNK16WorldBlockTarget5applyEv
    virtual void placeLegacyStructure(BlockPos const&, LegacyStructureTemplate &, LegacyStructureSettings &); // _ZN16WorldBlockTarget20placeLegacyStructureERK8BlockPosR23LegacyStructureTemplateR23LegacyStructureSettings
    virtual void mayPlace(BlockPos const&, Block const&)const; // _ZNK16WorldBlockTarget8mayPlaceERK8BlockPosRK5Block
    virtual bool canSurvive(BlockPos const&, Block const&)const; // _ZNK16WorldBlockTarget10canSurviveERK8BlockPosRK5Block
    virtual void shimPlaceForOldFeatures(Feature const&, BlockPos const&, Random &)const; // _ZNK16WorldBlockTarget23shimPlaceForOldFeaturesERK7FeatureRK8BlockPosR6Random
    WorldBlockTarget(BlockSource &); // _ZN16WorldBlockTargetC2ER11BlockSource
};
