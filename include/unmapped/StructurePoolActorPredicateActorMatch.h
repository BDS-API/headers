#pragma once

#include <string>
#include "IStructurePoolActorPredicate.h"


class StructurePoolActorPredicateActorMatch : IStructurePoolActorPredicate {

public:
    ~StructurePoolActorPredicateActorMatch();
    virtual void test(std::string const&)const;
    StructurePoolActorPredicateActorMatch(std::string);
};
