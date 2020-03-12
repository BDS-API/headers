#pragma once

#include "StructureStart.h"


class ScatteredFeatureStart : StructureStart {

public:
    ~ScatteredFeatureStart();
    virtual void getType()const;
    ScatteredFeatureStart();
    ScatteredFeatureStart(BiomeSource &, int, int);
    ScatteredFeatureStart(int, int);
};
