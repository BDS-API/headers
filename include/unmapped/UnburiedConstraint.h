#pragma once

#include "../bedrock/util/BlockPos"


class UnburiedConstraint : IStructureConstraint {

public:
    UnburiedConstraint::~UnburiedConstraint()
    virtual bool isSatisfied(IBlockPlacementTarget const&, BlockPos const&, Rotation const&)const;

    UnburiedConstraint(LegacyStructureTemplate &);
};
