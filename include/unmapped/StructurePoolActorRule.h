#pragma once

#include <memory>
#include <string>


class StructurePoolActorRule {

public:
    ~StructurePoolActorRule();
    bool processRule(std::string const&, std::string &)const;
    StructurePoolActorRule(std::unique_ptr<IStructurePoolActorPredicate> &&, std::string);
};
