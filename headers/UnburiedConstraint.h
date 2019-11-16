#pragma once

class UnburiedConstraint : IStructureConstraint {

    virtual void ~UnburiedConstraint();
    virtual void ~UnburiedConstraint();
    virtual void isSatisfied(IBlockPlacementTarget const&, BlockPos const&, Rotation const&)const;
}
