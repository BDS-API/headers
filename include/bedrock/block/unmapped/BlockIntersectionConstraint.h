#pragma once

#include "../../../unmapped/IStructureConstraint.h"


class BlockIntersectionConstraint : IStructureConstraint {

public:
    ~BlockIntersectionConstraint(); // _ZN27BlockIntersectionConstraintD2Ev
//  virtual bool isSatisfied(IBlockPlacementTarget const&, BlockPos const&, Rotation const&)const; //TODO: incomplete function definition // _ZNK27BlockIntersectionConstraint11isSatisfiedERK21IBlockPlacementTargetRK8BlockPosRK8Rotation
    BlockIntersectionConstraint(LegacyStructureTemplate &); // _ZN27BlockIntersectionConstraintC2ER23LegacyStructureTemplate
};
