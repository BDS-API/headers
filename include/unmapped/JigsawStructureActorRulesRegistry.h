#pragma once

#include "./StructurePoolActorRule.h"
#include <memory>
#include <vector>
#include <string>


class JigsawStructureActorRulesRegistry {

public:

    JigsawStructureActorRulesRegistry();
    void registerActorRules(std::string, std::unique_ptr<std::vector<std::unique_ptr<StructurePoolActorRule, std::default_delete<StructurePoolActorRule>>, std::allocator<std::unique_ptr<StructurePoolActorRule, std::default_delete<StructurePoolActorRule>>>>, std::default_delete<std::vector<std::unique_ptr<StructurePoolActorRule, std::default_delete<StructurePoolActorRule>>, std::allocator<std::unique_ptr<StructurePoolActorRule, std::default_delete<StructurePoolActorRule>>>>>> &&);
    void lookupByName(std::string)const;
    void clear();
    ~JigsawStructureActorRulesRegistry();
};
