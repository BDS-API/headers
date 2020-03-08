#pragma once



class JigsawStructureBlockTagRulesRegistry {

public:

    JigsawStructureBlockTagRulesRegistry(void);
    void registerBlockTagRules(std::string, std::unique_ptr<std::vector<std::unique_ptr<StructurePoolBlockTagRule, std::default_delete<StructurePoolBlockTagRule>>, std::allocator<std::unique_ptr<StructurePoolBlockTagRule, std::default_delete<StructurePoolBlockTagRule>>>>, std::default_delete<std::vector<std::unique_ptr<StructurePoolBlockTagRule, std::default_delete<StructurePoolBlockTagRule>>, std::allocator<std::unique_ptr<StructurePoolBlockTagRule, std::default_delete<StructurePoolBlockTagRule>>>>>> &&);
    void lookupByName(std::string)const;
    void clear();
};
