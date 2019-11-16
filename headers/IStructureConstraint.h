#pragma once

class IStructureConstraint {

    virtual void ~IStructureConstraint();
    virtual void ~IStructureConstraint();
    virtual void isSatisfied(IBlockPlacementTarget const&, BlockPos const&, Rotation const&)const;
}
