#pragma once

#include "../../../unmapped/IStructureConstraint.h"


class BlockIntersectionConstraint : IStructureConstraint {

public:
    ~BlockIntersectionConstraint();
//  virtual bool isSatisfied(IBlockPlacementTarget const&, BlockPos const&, Rotation const&)const; //TODO: incomplete function definition
    BlockIntersectionConstraint(LegacyStructureTemplate &);
};
