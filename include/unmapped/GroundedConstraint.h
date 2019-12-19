#pragma once

class GroundedConstraint : IStructureConstraint {

public:
    virtual GroundedConstraint::~GroundedConstraint();
    virtual bool isSatisfied(IBlockPlacementTarget const&, BlockPos const&, Rotation const&)const;

    GroundedConstraint(LegacyStructureTemplate &);
};
