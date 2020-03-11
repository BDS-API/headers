#pragma once

#include "./StructureTemplatePool.h"
#include <memory>
#include <string>


class JigsawStructureRegistry {

public:

    JigsawStructureRegistry();
    ~JigsawStructureRegistry();
    void clear();
    void registerPool(std::unique_ptr<StructureTemplatePool, std::default_delete<StructureTemplatePool>> &&);
    void lookupByName(std::string)const;
    void getJigsawStructureBlockRulesRegistry()const;
    void getJigsawStructureBlockRulesRegistry();
    void getJigsawStructureBlockTagRulesRegistry()const;
    void getJigsawStructureBlockTagRulesRegistry();
    void getJigsawStructureActorRulesRegistry()const;
    void getJigsawStructureActorRulesRegistry();
    void getJigsawStructureElementRegistry()const;
    void getJigsawStructureElementRegistry();
};
