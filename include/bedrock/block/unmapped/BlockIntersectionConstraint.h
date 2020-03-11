#pragma once

#include "../../util/BlockPos.h"
#include "../../../unmapped/IStructureConstraint.h"
#include "../../../unmapped/IBlockPlacementTarget.h"
#include "../../../unmapped/LegacyStructureTemplate.h"


class BlockIntersectionConstraint : IStructureConstraint {

public:
    virtual ~BlockIntersectionConstraint();
//  virtual bool isSatisfied(IBlockPlacementTarget const&, BlockPos const&, Rotation const&)const; //TODO: incomplete function definition

    BlockIntersectionConstraint(LegacyStructureTemplate &);
};
