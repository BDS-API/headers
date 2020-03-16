#pragma once

#include "IStructurePoolBlockPredicate.h"


class StructurePoolBlockPredicateStateMatch : public IStructurePoolBlockPredicate {

public:
    virtual ~StructurePoolBlockPredicateStateMatch(); // _ZN37StructurePoolBlockPredicateStateMatchD2Ev
    virtual void __fake_function0(); // fake
    virtual void test(Block const&, Random &)const; // _ZNK37StructurePoolBlockPredicateStateMatch4testERK5BlockR6Random
    StructurePoolBlockPredicateStateMatch(Block const&); // _ZN37StructurePoolBlockPredicateStateMatchC2ERK5Block
};
