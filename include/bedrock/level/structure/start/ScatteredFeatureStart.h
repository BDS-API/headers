#pragma once

#include "../../../../unmapped/BiomeSource"


class ScatteredFeatureStart : StructureStart {

public:
    virtual ScatteredFeatureStart::~ScatteredFeatureStart()
    virtual void getType()const;

    ScatteredFeatureStart(void);
    ScatteredFeatureStart(int, int);
    ScatteredFeatureStart(BiomeSource &, int, int);
};
