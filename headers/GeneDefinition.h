#pragma once

class GeneDefinition {

public:

    void addGeneticVariant(GeneticVariant const&);
    void GeneDefinition(void);
    void GeneDefinition(GeneDefinition const&);
    void GeneDefinition(GeneDefinition&&);
};
