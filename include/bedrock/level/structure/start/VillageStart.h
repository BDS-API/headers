#pragma once

#include "StructureStart.h"


class VillageStart : public StructureStart {

public:
    virtual ~VillageStart(); // _ZN12VillageStartD2Ev
    virtual void __fake_function0(); // fake
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN12VillageStart11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    virtual bool isValid()const; // _ZNK12VillageStart7isValidEv
    virtual void getType()const; // _ZNK12VillageStart7getTypeEv
    VillageStart(Dimension &, BiomeSource &, Random &, int, int); // _ZN12VillageStartC2ER9DimensionR11BiomeSourceR6Randomii
};
