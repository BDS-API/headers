#pragma once

#include "IStructurePoolBlockPredicate.h"


class StructurePoolBlockPredicateStateMatch : IStructurePoolBlockPredicate {

public:
    virtual void test(Block const&, Random &)const;
    ~StructurePoolBlockPredicateStateMatch();
    StructurePoolBlockPredicateStateMatch(Block const&);
};
