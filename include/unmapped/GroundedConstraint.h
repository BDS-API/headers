#pragma once

#include "IStructureConstraint.h"


class GroundedConstraint : public IStructureConstraint {

public:
    virtual ~GroundedConstraint(); // _ZN18GroundedConstraintD2Ev
    virtual void __fake_function0(); // fake
    virtual bool isSatisfied__incomplete0(IBlockPlacementTarget const&, BlockPos const&, long const&)const; //TODO: incomplete function definition // _ZNK18GroundedConstraint11isSatisfiedERK21IBlockPlacementTargetRK8BlockPosRK8Rotation
    GroundedConstraint(LegacyStructureTemplate &); // _ZN18GroundedConstraintC2ER23LegacyStructureTemplate
};
