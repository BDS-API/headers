#pragma once

#include "../bedrock/util/Random"


class StructurePoolBlockPredicateBlockMatch : IStructurePoolBlockPredicate {

public:
    virtual StructurePoolBlockPredicateBlockMatch::~StructurePoolBlockPredicateBlockMatch()
    virtual void test(Block const&, Random &)const;

    StructurePoolBlockPredicateBlockMatch(Block const&);
};
