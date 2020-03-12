#pragma once

#include "StructureTemplatePool.h"
#include <string>
#include <memory>


class JigsawStructureRegistry {

public:
    void getJigsawStructureElementRegistry()const;
    void getJigsawStructureBlockRulesRegistry();
    void getJigsawStructureBlockTagRulesRegistry()const;
    ~JigsawStructureRegistry();
    void lookupByName(std::string)const;
    void registerPool(std::unique_ptr<StructureTemplatePool> &&);
    void getJigsawStructureActorRulesRegistry()const;
    void getJigsawStructureActorRulesRegistry();
    JigsawStructureRegistry();
    void clear();
    void getJigsawStructureBlockTagRulesRegistry();
    void getJigsawStructureBlockRulesRegistry()const;
    void getJigsawStructureElementRegistry();
};
