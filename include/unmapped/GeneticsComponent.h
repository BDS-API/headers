#pragma once

#include "../bedrock/nbt/CompoundTag.h"
#include "GeneticVariant.h"
#include <string>
#include "../bedrock/definition/GeneDefinition.h"
#include "../bedrock/actor/Actor.h"
#include "DataLoadHelper.h"


class GeneticsComponent {

public:
    class Gene;

    static long INVALID_ALLELE_VALUE;
    static std::string GENE_ARRAY;
    static std::string MAIN_ALLELE;
    static std::string HIDDEN_ALLELE;

    void _createRandomGene(GeneDefinition const&);
    void findGene(std::string const&);
    void _shouldMutate();
    GeneticsComponent(GeneticsComponent &&);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void _crossParentGenes(GeneDefinition const&, GeneticsComponent::Gene &, GeneticsComponent::Gene &);
    bool hasMatchingGeneValues(unsigned long, int, int)const;
    void _matchesGeneticVariant(GeneticsComponent::Gene const&, GeneticVariant const&)const;
    void initializeGenesFromParents(Actor &, Actor &, Actor &);
    void buildDebugInfo(std::string &)const;
    void _createRandomAllele(GeneDefinition const&);
    void addAdditionalSaveData(CompoundTag &)const;
    bool isCompatible(GeneticsComponent::Gene const&, GeneDefinition const&)const;
    ~GeneticsComponent();
    GeneticsComponent();
    void fireGeneEvents(Actor &)const;
    class Gene {

    public:
        Gene();
    };
};
