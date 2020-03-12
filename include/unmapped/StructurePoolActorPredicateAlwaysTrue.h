#pragma once

#include "IStructurePoolActorPredicate.h"
#include <string>


class StructurePoolActorPredicateAlwaysTrue : IStructurePoolActorPredicate {

public:
    ~StructurePoolActorPredicateAlwaysTrue();
    virtual void test(std::string const&)const;
    StructurePoolActorPredicateAlwaysTrue();
};
