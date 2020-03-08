#pragma once



class UnburiedConstraint : IStructureConstraint {

public:
    virtual UnburiedConstraint::~UnburiedConstraint();
    virtual bool isSatisfied(IBlockPlacementTarget const&, BlockPos const&, Rotation const&)const;

    UnburiedConstraint(LegacyStructureTemplate &);
};
