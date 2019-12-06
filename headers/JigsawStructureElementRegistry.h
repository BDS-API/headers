#pragma once

class JigsawStructureElementRegistry {

public:

    void JigsawStructureElementRegistry(void);
    void registerStructureElement(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::unique_ptr<StructurePoolElement, std::default_delete<StructurePoolElement>> &&);
    void lookupByName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>)const;
    void clear(void);
};
