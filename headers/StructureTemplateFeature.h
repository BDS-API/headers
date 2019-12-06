#pragma once

class StructureTemplateFeature : IFeature {

public:
    virtual ~StructureTemplateFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;

    void StructureTemplateFeature(void);
    void _findStructurePos(IBlockPlacementTarget const&, BlockPos const&, Rotation const&, BlockPos&)const;
    void _doesSatisfyConstraints(IBlockPlacementTarget const&, BlockPos const&, Rotation const&)const;
};
