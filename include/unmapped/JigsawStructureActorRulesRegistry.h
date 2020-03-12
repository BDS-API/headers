#pragma once

#include <memory>
#include <string>


class JigsawStructureActorRulesRegistry {

public:
    JigsawStructureActorRulesRegistry();
    void lookupByName(std::string)const;
    void registerActorRules(std::string, std::unique_ptr<std::vector<std::unique_ptr<StructurePoolActorRule>>> &&);
    void clear();
    ~JigsawStructureActorRulesRegistry();
};
