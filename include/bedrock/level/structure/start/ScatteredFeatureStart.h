#pragma once

#include "StructureStart.h"


class ScatteredFeatureStart : public StructureStart {

public:
    virtual ~ScatteredFeatureStart(); // _ZN21ScatteredFeatureStartD2Ev
    virtual void __fake_function0(); // fake
    virtual void getType()const; // _ZNK21ScatteredFeatureStart7getTypeEv
    ScatteredFeatureStart(); // _ZN21ScatteredFeatureStartC2Ev
    ScatteredFeatureStart(int, int); // _ZN21ScatteredFeatureStartC2Eii
    ScatteredFeatureStart(BiomeSource &, int, int); // _ZN21ScatteredFeatureStartC2ER11BiomeSourceii
};
