#pragma once

class BlockIntersectionConstraint : IStructureConstraint {

    virtual void ~BlockIntersectionConstraint();
    virtual void ~BlockIntersectionConstraint();
    virtual void isSatisfied(IBlockPlacementTarget const&, BlockPos const&, Rotation const&)const;
}
