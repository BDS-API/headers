#pragma once

#include "IStructurePoolActorPredicate.h"
#include <string>


class StructurePoolActorPredicateActorMatch : IStructurePoolActorPredicate {

public:
    virtual void test(std::string const&)const;
    ~StructurePoolActorPredicateActorMatch();
    StructurePoolActorPredicateActorMatch(std::string);
};
