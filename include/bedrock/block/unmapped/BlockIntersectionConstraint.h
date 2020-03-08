#pragma once

#include "../../../unmapped/IStructureConstraint"
#include "../../../unmapped/LegacyStructureTemplate"
#include "../../util/BlockPos"
#include "../../../unmapped/IBlockPlacementTarget"


class BlockIntersectionConstraint : IStructureConstraint {

public:
    virtual BlockIntersectionConstraint::~BlockIntersectionConstraint()
    virtual bool isSatisfied(IBlockPlacementTarget const&, BlockPos const&, Rotation const&)const;

    BlockIntersectionConstraint(LegacyStructureTemplate &);
};
