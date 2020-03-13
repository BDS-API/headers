#pragma once

#include <string>


class GeneticsComponent {

public:
    class Gene;

    static long INVALID_ALLELE_VALUE;
    static std::string GENE_ARRAY;
    static std::string MAIN_ALLELE;
    static std::string HIDDEN_ALLELE;

    void _createRandomGene(GeneDefinition const&); // _ZN17GeneticsComponent17_createRandomGeneERK14GeneDefinition
    GeneticsComponent(); // _ZN17GeneticsComponentC2Ev
    void addAdditionalSaveData(CompoundTag &)const; // _ZNK17GeneticsComponent21addAdditionalSaveDataER11CompoundTag
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &); // _ZN17GeneticsComponent22readAdditionalSaveDataER5ActorRK11CompoundTagR14DataLoadHelper
    bool isCompatible(GeneticsComponent::Gene const&, GeneDefinition const&)const; // _ZNK17GeneticsComponent12isCompatibleERKNS_4GeneERK14GeneDefinition
    void findGene(std::string const&); // _ZN17GeneticsComponent8findGeneERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void initializeGenesFromParents(Actor &, Actor &, Actor &); // _ZN17GeneticsComponent26initializeGenesFromParentsER5ActorS1_S1_
    void _crossParentGenes(GeneDefinition const&, GeneticsComponent::Gene &, GeneticsComponent::Gene &); // _ZN17GeneticsComponent17_crossParentGenesERK14GeneDefinitionRNS_4GeneES4_
    void fireGeneEvents(Actor &)const; // _ZNK17GeneticsComponent14fireGeneEventsER5Actor
    void _matchesGeneticVariant(GeneticsComponent::Gene const&, GeneticVariant const&)const; // _ZNK17GeneticsComponent22_matchesGeneticVariantERKNS_4GeneERK14GeneticVariant
    bool hasMatchingGeneValues(unsigned long, int, int)const; // _ZNK17GeneticsComponent21hasMatchingGeneValuesEmii
    void buildDebugInfo(std::string &)const; // _ZNK17GeneticsComponent14buildDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void _shouldMutate(); // _ZN17GeneticsComponent13_shouldMutateEv
    void _createRandomAllele(GeneDefinition const&); // _ZN17GeneticsComponent19_createRandomAlleleERK14GeneDefinition
    ~GeneticsComponent(); // _ZN17GeneticsComponentD2Ev
    GeneticsComponent(GeneticsComponent &&); // _ZN17GeneticsComponentC2EOS_
    class Gene {

    public:
        Gene(); // _ZN17GeneticsComponent4GeneC2Ev
    };
};
