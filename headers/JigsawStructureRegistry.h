#pragma once

class JigsawStructureRegistry {

public:

    void JigsawStructureRegistry(void);
    void clear(void);
    void registerPool(std::unique_ptr<StructureTemplatePool, std::default_delete<StructureTemplatePool>> &&);
    void lookupByName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>)const;
    void getJigsawStructureBlockRulesRegistry(void)const;
    void getJigsawStructureBlockRulesRegistry(void);
    void getJigsawStructureBlockTagRulesRegistry(void)const;
    void getJigsawStructureBlockTagRulesRegistry(void);
    void getJigsawStructureActorRulesRegistry(void)const;
    void getJigsawStructureActorRulesRegistry(void);
    void getJigsawStructureElementRegistry(void)const;
    void getJigsawStructureElementRegistry(void);
};