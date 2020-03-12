#pragma once

#include <memory>
#include <string>


class JigsawStructureElementRegistry {

public:
    void registerStructureElement(std::string, std::unique_ptr<StructurePoolElement> &&);
    JigsawStructureElementRegistry();
    void lookupByName(std::string)const;
    ~JigsawStructureElementRegistry();
    void clear();
};
