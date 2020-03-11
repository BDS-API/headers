#pragma once

#include "./IBlockPlacementTarget.h"
#include "./IStructureConstraint.h"
#include "./LegacyStructureTemplate.h"
#include "../bedrock/util/BlockPos.h"


class UnburiedConstraint : IStructureConstraint {

public:
    virtual ~UnburiedConstraint();
//  virtual bool isSatisfied(IBlockPlacementTarget const&, BlockPos const&, Rotation const&)const; //TODO: incomplete function definition

    UnburiedConstraint(LegacyStructureTemplate &);
};
