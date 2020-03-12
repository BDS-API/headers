#pragma once

#include <string>


class GeneticsComponent {

public:
    class Gene;

    static long INVALID_ALLELE_VALUE;
    static std::string GENE_ARRAY;
    static std::string MAIN_ALLELE;
    static std::string HIDDEN_ALLELE;

    void fireGeneEvents(Actor &)const;
    ~GeneticsComponent();
    void findGene(std::string const&);
    void _matchesGeneticVariant(GeneticsComponent::Gene const&, GeneticVariant const&)const;
    void initializeGenesFromParents(Actor &, Actor &, Actor &);
    bool hasMatchingGeneValues(unsigned long, int, int)const;
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    bool isCompatible(GeneticsComponent::Gene const&, GeneDefinition const&)const;
    void buildDebugInfo(std::string &)const;
    GeneticsComponent(GeneticsComponent &&);
    void _createRandomAllele(GeneDefinition const&);
    void _createRandomGene(GeneDefinition const&);
    void _shouldMutate();
    void addAdditionalSaveData(CompoundTag &)const;
    void _crossParentGenes(GeneDefinition const&, GeneticsComponent::Gene &, GeneticsComponent::Gene &);
    GeneticsComponent();
    class Gene {

    public:
        Gene();
    };
};
