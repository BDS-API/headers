#pragma once

#include "IStructureConstraint.h"


class GroundedConstraint : IStructureConstraint {

public:
    ~GroundedConstraint(); // _ZN18GroundedConstraintD2Ev
//  virtual bool isSatisfied(IBlockPlacementTarget const&, BlockPos const&, Rotation const&)const; //TODO: incomplete function definition // _ZNK18GroundedConstraint11isSatisfiedERK21IBlockPlacementTargetRK8BlockPosRK8Rotation
    GroundedConstraint(LegacyStructureTemplate &); // _ZN18GroundedConstraintC2ER23LegacyStructureTemplate
};
