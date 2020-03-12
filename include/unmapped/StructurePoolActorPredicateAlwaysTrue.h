#pragma once

#include <string>
#include "IStructurePoolActorPredicate.h"


class StructurePoolActorPredicateAlwaysTrue : IStructurePoolActorPredicate {

public:
    ~StructurePoolActorPredicateAlwaysTrue();
    virtual void test(std::string const&)const;
    StructurePoolActorPredicateAlwaysTrue();
};
