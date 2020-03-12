#pragma once



class GeneDefinition {

public:
    ~GeneDefinition();
    GeneDefinition(GeneDefinition &&);
    void addGeneticVariant(GeneticVariant const&);
    GeneDefinition(GeneDefinition const&);
    GeneDefinition();
};
