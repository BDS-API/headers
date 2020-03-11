#pragma once

#include <memory>
#include "./StructurePoolElement.h"
#include <string>


class JigsawStructureElementRegistry {

public:

    JigsawStructureElementRegistry();
    void registerStructureElement(std::string, std::unique_ptr<StructurePoolElement, std::default_delete<StructurePoolElement>> &&);
    void lookupByName(std::string)const;
    void clear();
    ~JigsawStructureElementRegistry();
};
