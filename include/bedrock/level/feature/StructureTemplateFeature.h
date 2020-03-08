#pragma once

#include "../../util/Random"
#include "../../util/BlockPos"
#include "../../../unmapped/IBlockPlacementTarget"


class StructureTemplateFeature : IFeature {

public:
    virtual StructureTemplateFeature::~StructureTemplateFeature()
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;

    StructureTemplateFeature(void);
    void _findStructurePos(IBlockPlacementTarget const&, BlockPos const&, Rotation const&, BlockPos&)const;
    void _doesSatisfyConstraints(IBlockPlacementTarget const&, BlockPos const&, Rotation const&)const;
};
