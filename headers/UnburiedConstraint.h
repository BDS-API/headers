#pragma once

class UnburiedConstraint : IStructureConstraint {

    virtual ~UnburiedConstraint();
    virtual ~UnburiedConstraint();
    virtual void isSatisfied(IBlockPlacementTarget const&, BlockPos const&, Rotation const&)const;
}
