#pragma once

#include "./IBlockPlacementTarget.h"
#include "./IStructureConstraint.h"
#include "./LegacyStructureTemplate.h"
#include "../bedrock/util/BlockPos.h"


class GroundedConstraint : IStructureConstraint {

public:
    virtual ~GroundedConstraint();
//  virtual bool isSatisfied(IBlockPlacementTarget const&, BlockPos const&, Rotation const&)const; //TODO: incomplete function definition

    GroundedConstraint(LegacyStructureTemplate &);
};
