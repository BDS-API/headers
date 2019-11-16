#pragma once

class GroundedConstraint : IStructureConstraint {

    virtual ~GroundedConstraint();
    virtual ~GroundedConstraint();
    virtual void isSatisfied(IBlockPlacementTarget const&, BlockPos const&, Rotation const&)const;
}
