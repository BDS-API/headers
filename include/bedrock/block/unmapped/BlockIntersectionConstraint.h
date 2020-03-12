#pragma once

#include "../../../unmapped/IBlockPlacementTarget.h"
#include "../../../unmapped/LegacyStructureTemplate.h"
#include "../../../unmapped/IStructureConstraint.h"
#include "../../util/BlockPos.h"


class BlockIntersectionConstraint : IStructureConstraint {

public:
    ~BlockIntersectionConstraint();
//  virtual bool isSatisfied(IBlockPlacementTarget const&, BlockPos const&, Rotation const&)const; //TODO: incomplete function definition
    BlockIntersectionConstraint(LegacyStructureTemplate &);
};
