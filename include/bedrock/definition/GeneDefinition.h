#pragma once

class GeneDefinition {

public:

    void addGeneticVariant(GeneticVariant const&);
    GeneDefinition(void);
    GeneDefinition(GeneDefinition const&);
    GeneDefinition(GeneDefinition&&);
};
