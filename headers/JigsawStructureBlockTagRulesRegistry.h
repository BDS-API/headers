#pragma once

class JigsawStructureBlockTagRulesRegistry {

public:

    void JigsawStructureBlockTagRulesRegistry(void);
    void registerBlockTagRules(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::unique_ptr<std::vector<std::unique_ptr<StructurePoolBlockTagRule, std::default_delete<StructurePoolBlockTagRule>>, std::allocator<std::unique_ptr<StructurePoolBlockTagRule, std::default_delete<StructurePoolBlockTagRule>>>>, std::default_delete<std::vector<std::unique_ptr<StructurePoolBlockTagRule, std::default_delete<StructurePoolBlockTagRule>>, std::allocator<std::unique_ptr<StructurePoolBlockTagRule, std::default_delete<StructurePoolBlockTagRule>>>>>> &&);
    void lookupByName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>)const;
    void clear(void);
};
