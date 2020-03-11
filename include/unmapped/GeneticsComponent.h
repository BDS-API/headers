#pragma once

#include "./GeneticVariant.h"
#include "./DataLoadHelper.h"
#include "../bedrock/nbt/CompoundTag.h"
#include "../bedrock/definition/GeneDefinition.h"
#include "../bedrock/actor/Actor.h"
#include "./Gene.h"
#include "./GeneticsComponent.h"
#include <string>


class GeneticsComponent {

public:
    static long INVALID_ALLELE_VALUE;
    static std::string GENE_ARRAY;
    static std::string MAIN_ALLELE;
    static std::string HIDDEN_ALLELE;


    void _createRandomGene(GeneDefinition const&);
    GeneticsComponent();
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
    ~GeneticsComponent();
    GeneticsComponent(GeneticsComponent &&);
};
