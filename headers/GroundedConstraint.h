#pragma once

class GroundedConstraint : IStructureConstraint {

public:
    virtual ~GroundedConstraint();
    virtual bool isSatisfied(IBlockPlacementTarget const&, BlockPos const&, Rotation const&)const;

    void GroundedConstraint(LegacyStructureTemplate &);
};
