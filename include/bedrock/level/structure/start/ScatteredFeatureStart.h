#pragma once

#include "../../../../unmapped/BiomeSource.h"
#include "StructureStart.h"


class ScatteredFeatureStart : StructureStart {

public:
    ~ScatteredFeatureStart();
    virtual void getType()const;
    ScatteredFeatureStart(int, int);
    ScatteredFeatureStart(BiomeSource &, int, int);
    ScatteredFeatureStart();
};
