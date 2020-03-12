#pragma once

#include <memory>
#include <vector>
#include <string>
#include "StructurePoolBlockTagRule.h"


class JigsawStructureBlockTagRulesRegistry {

public:
    JigsawStructureBlockTagRulesRegistry();
    void clear();
    void registerBlockTagRules(std::string, std::unique_ptr<std::vector<std::unique_ptr<StructurePoolBlockTagRule>>> &&);
    ~JigsawStructureBlockTagRulesRegistry();
    void lookupByName(std::string)const;
};
