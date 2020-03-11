#pragma once

#include "./StructureStart.h"
#include "../../../../unmapped/BiomeSource.h"


class ScatteredFeatureStart : StructureStart {

public:
    virtual ~ScatteredFeatureStart();
    virtual void getType()const;

    ScatteredFeatureStart();
    ScatteredFeatureStart(int, int);
    ScatteredFeatureStart(BiomeSource &, int, int);
};
