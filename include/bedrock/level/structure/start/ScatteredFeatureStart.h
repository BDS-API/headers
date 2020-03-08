#pragma once

#include "../../../../unmapped/BiomeSource"


class ScatteredFeatureStart : StructureStart {

public:
    ScatteredFeatureStart::~ScatteredFeatureStart()
    virtual void getType()const;

    ScatteredFeatureStart(void);
    ScatteredFeatureStart(int, int);
    ScatteredFeatureStart(BiomeSource &, int, int);
};
