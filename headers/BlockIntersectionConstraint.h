#pragma once

class BlockIntersectionConstraint : IStructureConstraint {

    virtual ~BlockIntersectionConstraint();
    virtual ~BlockIntersectionConstraint();
    virtual void isSatisfied(IBlockPlacementTarget const&, BlockPos const&, Rotation const&)const;
}
