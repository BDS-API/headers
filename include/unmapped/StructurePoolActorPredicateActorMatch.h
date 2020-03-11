#pragma once

#include "./IStructurePoolActorPredicate.h"
#include <string>


class StructurePoolActorPredicateActorMatch : IStructurePoolActorPredicate {

public:
    virtual ~StructurePoolActorPredicateActorMatch();
    virtual void test(std::string const&)const;

    StructurePoolActorPredicateActorMatch(std::string);
};
