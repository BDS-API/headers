#pragma once

#include "IStructureConstraint.h"


class UnburiedConstraint : IStructureConstraint {

public:
    ~UnburiedConstraint(); // _ZN18UnburiedConstraintD2Ev
//  virtual bool isSatisfied(IBlockPlacementTarget const&, BlockPos const&, Rotation const&)const; //TODO: incomplete function definition // _ZNK18UnburiedConstraint11isSatisfiedERK21IBlockPlacementTargetRK8BlockPosRK8Rotation
    UnburiedConstraint(LegacyStructureTemplate &); // _ZN18UnburiedConstraintC2ER23LegacyStructureTemplate
};
