#pragma once

#include "../../util/Random.h"
#include "./IFeature.h"
#include "../../util/BlockPos.h"
#include "../../../unmapped/IBlockPlacementTarget.h"


class StructureTemplateFeature : IFeature {

public:
    virtual ~StructureTemplateFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;

    StructureTemplateFeature();
//  void _findStructurePos(IBlockPlacementTarget const&, BlockPos const&, Rotation const&, BlockPos &)const; //TODO: incomplete function definition
//  void _doesSatisfyConstraints(IBlockPlacementTarget const&, BlockPos const&, Rotation const&)const; //TODO: incomplete function definition
};
