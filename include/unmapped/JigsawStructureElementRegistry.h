#pragma once

#include <string>
#include "StructurePoolElement.h"
#include <memory>


class JigsawStructureElementRegistry {

public:
    void clear();
    void lookupByName(std::string)const;
    void registerStructureElement(std::string, std::unique_ptr<StructurePoolElement> &&);
    ~JigsawStructureElementRegistry();
    JigsawStructureElementRegistry();
};
