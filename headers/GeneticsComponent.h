#pragma once

class GeneticsComponent {

public:
    static long GeneticsComponent::INVALID_ALLELE_VALUE;


    void _createRandomGene(GeneDefinition const&);
    void GeneticsComponent(void);
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
    void _shouldMutate(void);
    void _createRandomAllele(GeneDefinition const&);
    void GeneticsComponent(GeneticsComponent&&);
};
