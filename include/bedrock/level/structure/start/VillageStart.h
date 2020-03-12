#pragma once

#include "StructureStart.h"


class VillageStart : StructureStart {

public:
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual bool isValid()const;
    ~VillageStart();
    virtual void getType()const;
    VillageStart(Dimension &, BiomeSource &, Random &, int, int);
};
