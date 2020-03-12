#pragma once

#include "IFeature.h"


class StructureTemplateFeature : IFeature {

public:
    class BoundingBox2D;

    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    ~StructureTemplateFeature();
//  void _doesSatisfyConstraints(IBlockPlacementTarget const&, BlockPos const&, Rotation const&)const; //TODO: incomplete function definition
    StructureTemplateFeature();
//  void _findStructurePos(IBlockPlacementTarget const&, BlockPos const&, Rotation const&, BlockPos &)const; //TODO: incomplete function definition
    class BoundingBox2D {

    public:
        bool isInside(BlockPos const&)const;
        BoundingBox2D(int, int, int, int);
    };
};
