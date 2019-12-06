#pragma once

class JigsawStructureBlockRulesRegistry {

public:

    void JigsawStructureBlockRulesRegistry(void);
    void registerBlockRules(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::unique_ptr<std::vector<std::unique_ptr<StructurePoolBlockRule, std::default_delete<StructurePoolBlockRule>>, std::allocator<std::unique_ptr<StructurePoolBlockRule, std::default_delete<StructurePoolBlockRule>>>>, std::default_delete<std::vector<std::unique_ptr<StructurePoolBlockRule, std::default_delete<StructurePoolBlockRule>>, std::allocator<std::unique_ptr<StructurePoolBlockRule, std::default_delete<StructurePoolBlockRule>>>>>> &&);
    void lookupByName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>)const;
    void clear(void);
};
