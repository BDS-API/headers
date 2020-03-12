#pragma once

#include <memory>
#include <string>


class JigsawStructureRegistry {

public:
    void getJigsawStructureElementRegistry();
    void getJigsawStructureActorRulesRegistry();
    void getJigsawStructureBlockRulesRegistry();
    void getJigsawStructureElementRegistry()const;
    void getJigsawStructureBlockTagRulesRegistry()const;
    ~JigsawStructureRegistry();
    void lookupByName(std::string)const;
    void getJigsawStructureBlockRulesRegistry()const;
    void getJigsawStructureActorRulesRegistry()const;
    JigsawStructureRegistry();
    void registerPool(std::unique_ptr<StructureTemplatePool> &&);
    void clear();
    void getJigsawStructureBlockTagRulesRegistry();
};
