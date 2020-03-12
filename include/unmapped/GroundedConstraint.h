#pragma once

#include "IStructureConstraint.h"


class GroundedConstraint : IStructureConstraint {

public:
    ~GroundedConstraint();
//  virtual bool isSatisfied(IBlockPlacementTarget const&, BlockPos const&, Rotation const&)const; //TODO: incomplete function definition
    GroundedConstraint(LegacyStructureTemplate &);
};
