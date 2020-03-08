#pragma once

#include "../bedrock/definition/GeneDefinition"
#include "../bedrock/actor/Actor"
#include "../bedrock/nbt/CompoundTag"


class GeneticsComponent {

public:
    static long INVALID_ALLELE_VALUE;
    static long GENE_ARRAY[abi:cxx11];
    static long MAIN_ALLELE[abi:cxx11];
    static long HIDDEN_ALLELE[abi:cxx11];


    void _createRandomGene(GeneDefinition const&);
    GeneticsComponent(void);
    void addAdditionalSaveData(CompoundTag &)const;
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    bool isCompatible(GeneticsComponent::Gene const&, GeneDefinition const&)const;
    void findGene(std::string const&);
    void initializeGenesFromParents(Actor &, Actor &, Actor &);
    void _crossParentGenes(GeneDefinition const&, GeneticsComponent::Gene &, GeneticsComponent::Gene &);
    void fireGeneEvents(Actor &)const;
    void _matchesGeneticVariant(GeneticsComponent::Gene const&, GeneticVariant const&)const;
    bool hasMatchingGeneValues(unsigned long, int, int)const;
    void buildDebugInfo(std::string &)const;
    void _shouldMutate();
    void _createRandomAllele(GeneDefinition const&);
    GeneticsComponent(GeneticsComponent&&);
};
