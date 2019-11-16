#pragma once

class IStructureConstraint {

    virtual ~IStructureConstraint();
    virtual ~IStructureConstraint();
    virtual void isSatisfied(IBlockPlacementTarget const&, BlockPos const&, Rotation const&)const;
}
