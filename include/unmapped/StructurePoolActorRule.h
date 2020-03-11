#pragma once

#include "./IStructurePoolActorPredicate.h"
#include <memory>
#include <string>


class StructurePoolActorRule {

public:

    ~StructurePoolActorRule();
    StructurePoolActorRule(std::unique_ptr<IStructurePoolActorPredicate, std::default_delete<IStructurePoolActorPredicate>> &&, std::string);
    bool processRule(std::string const&, std::string &)const;
};
