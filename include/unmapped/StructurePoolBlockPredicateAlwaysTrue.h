#pragma once

#include "../bedrock/util/Random"


class StructurePoolBlockPredicateAlwaysTrue : IStructurePoolBlockPredicate {

public:
    StructurePoolBlockPredicateAlwaysTrue::~StructurePoolBlockPredicateAlwaysTrue()
    virtual void test(Block const&, Random &)const;

    StructurePoolBlockPredicateAlwaysTrue(void);
};
