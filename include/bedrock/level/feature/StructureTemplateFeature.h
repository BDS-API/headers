#pragma once

#include "../../../unmapped/IBlockPlacementTarget.h"
#include "IFeature.h"
#include "../../util/BlockPos.h"
#include "../../util/Random.h"


class StructureTemplateFeature : IFeature {

public:
    class BoundingBox2D;

    ~StructureTemplateFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
//  void _doesSatisfyConstraints(IBlockPlacementTarget const&, BlockPos const&, Rotation const&)const; //TODO: incomplete function definition
    StructureTemplateFeature();
//  void _findStructurePos(IBlockPlacementTarget const&, BlockPos const&, Rotation const&, BlockPos &)const; //TODO: incomplete function definition
    class BoundingBox2D {

    public:
        bool isInside(BlockPos const&)const;
        BoundingBox2D(int, int, int, int);
    };
};
