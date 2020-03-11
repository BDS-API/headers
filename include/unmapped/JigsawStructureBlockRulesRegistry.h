#pragma once

#include <string>
#include <memory>
#include <vector>
#include "./StructurePoolBlockRule.h"


class JigsawStructureBlockRulesRegistry {

public:

    JigsawStructureBlockRulesRegistry();
    void registerBlockRules(std::string, std::unique_ptr<std::vector<std::unique_ptr<StructurePoolBlockRule, std::default_delete<StructurePoolBlockRule>>, std::allocator<std::unique_ptr<StructurePoolBlockRule, std::default_delete<StructurePoolBlockRule>>>>, std::default_delete<std::vector<std::unique_ptr<StructurePoolBlockRule, std::default_delete<StructurePoolBlockRule>>, std::allocator<std::unique_ptr<StructurePoolBlockRule, std::default_delete<StructurePoolBlockRule>>>>>> &&);
    void lookupByName(std::string)const;
    void clear();
    ~JigsawStructureBlockRulesRegistry();
};
