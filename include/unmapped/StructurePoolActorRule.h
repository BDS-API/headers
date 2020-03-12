#pragma once

#include "IStructurePoolActorPredicate.h"
#include <string>
#include <memory>


class StructurePoolActorRule {

public:
    StructurePoolActorRule(std::unique_ptr<IStructurePoolActorPredicate> &&, std::string);
    ~StructurePoolActorRule();
    bool processRule(std::string const&, std::string &)const;
};
