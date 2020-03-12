#pragma once

#include "../../unmapped/GeneticVariant.h"


class GeneDefinition {

public:
    ~GeneDefinition();
    GeneDefinition();
    GeneDefinition(GeneDefinition &&);
    GeneDefinition(GeneDefinition const&);
    void addGeneticVariant(GeneticVariant const&);
};
