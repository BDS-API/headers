#pragma once

class BlockIntersectionConstraint : IStructureConstraint {

public:
    virtual ~BlockIntersectionConstraint();
    virtual bool isSatisfied(IBlockPlacementTarget const&, BlockPos const&, Rotation const&)const;

    void BlockIntersectionConstraint(LegacyStructureTemplate &);
};
