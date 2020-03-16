#pragma once

#include "../../../unmapped/IStructureConstraint.h"


class BlockIntersectionConstraint : public IStructureConstraint {

public:
    virtual ~BlockIntersectionConstraint(); // _ZN27BlockIntersectionConstraintD2Ev
    virtual void __fake_function0(); // fake
    virtual bool isSatisfied__incomplete0(IBlockPlacementTarget const&, BlockPos const&, long const&)const; //TODO: incomplete function definition // _ZNK27BlockIntersectionConstraint11isSatisfiedERK21IBlockPlacementTargetRK8BlockPosRK8Rotation
    BlockIntersectionConstraint(LegacyStructureTemplate &); // _ZN27BlockIntersectionConstraintC2ER23LegacyStructureTemplate
};
