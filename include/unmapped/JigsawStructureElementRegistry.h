#pragma once



class JigsawStructureElementRegistry {

public:

    JigsawStructureElementRegistry(void);
    void registerStructureElement(std::string, std::unique_ptr<StructurePoolElement, std::default_delete<StructurePoolElement>> &&);
    void lookupByName(std::string)const;
    void clear();
};
