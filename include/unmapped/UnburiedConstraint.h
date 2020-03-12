#pragma once

#include "LegacyStructureTemplate.h"
#include "IStructureConstraint.h"
#include "IBlockPlacementTarget.h"
#include "../bedrock/util/BlockPos.h"


class UnburiedConstraint : IStructureConstraint {

public:
//  virtual bool isSatisfied(IBlockPlacementTarget const&, BlockPos const&, Rotation const&)const; //TODO: incomplete function definition
    ~UnburiedConstraint();
    UnburiedConstraint(LegacyStructureTemplate &);
};
