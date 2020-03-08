#pragma once

#include "../../../unmapped/LegacyStructureTemplate"
#include "../../util/BlockPos"
#include "../../../unmapped/IBlockPlacementTarget"
#include "../../../unmapped/IStructureConstraint"


class BlockIntersectionConstraint : IStructureConstraint {

public:
    BlockIntersectionConstraint::~BlockIntersectionConstraint()
    virtual bool isSatisfied(IBlockPlacementTarget const&, BlockPos const&, Rotation const&)const;

    BlockIntersectionConstraint(LegacyStructureTemplate &);
};
