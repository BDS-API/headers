#pragma once

class GroundedConstraint : IStructureConstraint {

    virtual void ~GroundedConstraint();
    virtual void ~GroundedConstraint();
    virtual void isSatisfied(IBlockPlacementTarget const&, BlockPos const&, Rotation const&)const;
}
