#pragma once

#include <memory>
#include <string>


class JigsawStructureBlockRulesRegistry {

public:
    JigsawStructureBlockRulesRegistry();
    void lookupByName(std::string)const;
    ~JigsawStructureBlockRulesRegistry();
    void clear();
    void registerBlockRules(std::string, std::unique_ptr<std::vector<std::unique_ptr<StructurePoolBlockRule>>> &&);
};
