#pragma once

#include "IFeature.h"


class StructureTemplateFeature : IFeature {

public:
    class BoundingBox2D;

    ~StructureTemplateFeature(); // _ZN24StructureTemplateFeatureD2Ev
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const; // _ZNK24StructureTemplateFeature5placeER21IBlockPlacementTargetRK8BlockPosR6Random
    StructureTemplateFeature(); // _ZN24StructureTemplateFeatureC2Ev
//  void _findStructurePos(IBlockPlacementTarget const&, BlockPos const&, Rotation const&, BlockPos &)const; //TODO: incomplete function definition // _ZNK24StructureTemplateFeature17_findStructurePosERK21IBlockPlacementTargetRK8BlockPosRK8RotationRS3_
//  void _doesSatisfyConstraints(IBlockPlacementTarget const&, BlockPos const&, Rotation const&)const; //TODO: incomplete function definition // _ZNK24StructureTemplateFeature23_doesSatisfyConstraintsERK21IBlockPlacementTargetRK8BlockPosRK8Rotation
    class BoundingBox2D {

    public:
        BoundingBox2D(int, int, int, int); // _ZN24StructureTemplateFeature13BoundingBox2DC2Eiiii
        bool isInside(BlockPos const&)const; // _ZNK24StructureTemplateFeature13BoundingBox2D8isInsideERK8BlockPos
    };
};
