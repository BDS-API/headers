#pragma once

#include "LegacyStructureTemplate.h"
#include "IStructureConstraint.h"
#include "IBlockPlacementTarget.h"
#include "../bedrock/util/BlockPos.h"


class GroundedConstraint : IStructureConstraint {

public:
    ~GroundedConstraint();
//  virtual bool isSatisfied(IBlockPlacementTarget const&, BlockPos const&, Rotation const&)const; //TODO: incomplete function definition
    GroundedConstraint(LegacyStructureTemplate &);
};
