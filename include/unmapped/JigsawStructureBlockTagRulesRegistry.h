#pragma once

#include <memory>
#include <string>


class JigsawStructureBlockTagRulesRegistry {

public:
    ~JigsawStructureBlockTagRulesRegistry();
    void clear();
    JigsawStructureBlockTagRulesRegistry();
    void registerBlockTagRules(std::string, std::unique_ptr<std::vector<std::unique_ptr<StructurePoolBlockTagRule>>> &&);
    void lookupByName(std::string)const;
};
