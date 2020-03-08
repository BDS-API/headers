#pragma once



class JigsawStructureRegistry {

public:

    JigsawStructureRegistry(void);
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
