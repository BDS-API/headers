#pragma once

#include "./GeneDefinition.h"
#include "../../unmapped/GeneticVariant.h"


class GeneDefinition {

public:

    void addGeneticVariant(GeneticVariant const&);
    GeneDefinition();
    ~GeneDefinition();
    GeneDefinition(GeneDefinition const&);
    GeneDefinition(GeneDefinition &&);
};
