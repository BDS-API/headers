#pragma once

class BlockIntersectionConstraint : IStructureConstraint {

public:
    virtual BlockIntersectionConstraint::~BlockIntersectionConstraint();
    virtual bool isSatisfied(IBlockPlacementTarget const&, BlockPos const&, Rotation const&)const;

    BlockIntersectionConstraint(LegacyStructureTemplate &);
};
