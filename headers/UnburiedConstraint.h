#pragma once

class UnburiedConstraint : IStructureConstraint {

public:
    virtual ~UnburiedConstraint();
    virtual bool isSatisfied(IBlockPlacementTarget const&, BlockPos const&, Rotation const&)const;

    void UnburiedConstraint(LegacyStructureTemplate &);
};
