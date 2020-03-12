#pragma once

#include "IStructureConstraint.h"


class UnburiedConstraint : IStructureConstraint {

public:
    ~UnburiedConstraint();
//  virtual bool isSatisfied(IBlockPlacementTarget const&, BlockPos const&, Rotation const&)const; //TODO: incomplete function definition
    UnburiedConstraint(LegacyStructureTemplate &);
};
