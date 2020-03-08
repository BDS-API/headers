#pragma once

#include "../../../unmapped/IBlockPlacementTarget"
#include "../../util/Random"
#include "../../util/BlockPos"


class StructureTemplateFeature : IFeature {

public:
    StructureTemplateFeature::~StructureTemplateFeature()
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;

    StructureTemplateFeature(void);
    void _findStructurePos(IBlockPlacementTarget const&, BlockPos const&, Rotation const&, BlockPos&)const;
    void _doesSatisfyConstraints(IBlockPlacementTarget const&, BlockPos const&, Rotation const&)const;
};
