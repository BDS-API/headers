#pragma once

#include "IStructureConstraint.h"


class UnburiedConstraint : public IStructureConstraint {

public:
    virtual ~UnburiedConstraint(); // _ZN18UnburiedConstraintD2Ev
    virtual void __fake_function0(); // fake
    virtual bool isSatisfied__incomplete0(IBlockPlacementTarget const&, BlockPos const&, long const&)const; //TODO: incomplete function definition // _ZNK18UnburiedConstraint11isSatisfiedERK21IBlockPlacementTargetRK8BlockPosRK8Rotation
    UnburiedConstraint(LegacyStructureTemplate &); // _ZN18UnburiedConstraintC2ER23LegacyStructureTemplate
};
