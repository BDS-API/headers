#pragma once

#include "StructurePoolBlockRule.h"
#include <vector>
#include <string>
#include <memory>


class JigsawStructureBlockRulesRegistry {

public:
    JigsawStructureBlockRulesRegistry();
    ~JigsawStructureBlockRulesRegistry();
    void registerBlockRules(std::string, std::unique_ptr<std::vector<std::unique_ptr<StructurePoolBlockRule>>> &&);
    void clear();
    void lookupByName(std::string)const;
};
