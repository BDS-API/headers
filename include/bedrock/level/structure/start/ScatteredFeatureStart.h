#pragma once

class ScatteredFeatureStart : StructureStart {

public:
    virtual ScatteredFeatureStart::~ScatteredFeatureStart();
    virtual void getType(void)const;

    ScatteredFeatureStart(void);
    ScatteredFeatureStart(int, int);
    ScatteredFeatureStart(BiomeSource &, int, int);
};
