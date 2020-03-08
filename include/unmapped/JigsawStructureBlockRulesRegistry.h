#pragma once



class JigsawStructureBlockRulesRegistry {

public:

    JigsawStructureBlockRulesRegistry(void);
    void registerBlockRules(std::string, std::unique_ptr<std::vector<std::unique_ptr<StructurePoolBlockRule, std::default_delete<StructurePoolBlockRule>>, std::allocator<std::unique_ptr<StructurePoolBlockRule, std::default_delete<StructurePoolBlockRule>>>>, std::default_delete<std::vector<std::unique_ptr<StructurePoolBlockRule, std::default_delete<StructurePoolBlockRule>>, std::allocator<std::unique_ptr<StructurePoolBlockRule, std::default_delete<StructurePoolBlockRule>>>>>> &&);
    void lookupByName(std::string)const;
    void clear();
};
