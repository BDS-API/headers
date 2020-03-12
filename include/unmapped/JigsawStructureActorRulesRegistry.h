#pragma once

#include <string>
#include <vector>
#include "StructurePoolActorRule.h"
#include <memory>


class JigsawStructureActorRulesRegistry {

public:
    void registerActorRules(std::string, std::unique_ptr<std::vector<std::unique_ptr<StructurePoolActorRule>>> &&);
    void clear();
    void lookupByName(std::string)const;
    ~JigsawStructureActorRulesRegistry();
    JigsawStructureActorRulesRegistry();
};
