#pragma once

class JigsawStructureActorRulesRegistry {

public:

    void JigsawStructureActorRulesRegistry(void);
    void registerActorRules(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::unique_ptr<std::vector<std::unique_ptr<StructurePoolActorRule, std::default_delete<StructurePoolActorRule>>, std::allocator<std::unique_ptr<StructurePoolActorRule, std::default_delete<StructurePoolActorRule>>>>, std::default_delete<std::vector<std::unique_ptr<StructurePoolActorRule, std::default_delete<StructurePoolActorRule>>, std::allocator<std::unique_ptr<StructurePoolActorRule, std::default_delete<StructurePoolActorRule>>>>>> &&);
    void lookupByName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>)const;
    void clear(void);
};
