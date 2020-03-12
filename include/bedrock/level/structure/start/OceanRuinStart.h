#pragma once

#include "StructureStart.h"


class OceanRuinStart : StructureStart {

public:
    ~OceanRuinStart();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void getType()const;
    OceanRuinStart();
    OceanRuinStart(Dimension &, OverworldGenerator &, Random &, int, int, Biome const&);
    void createRuin(Dimension &, OverworldGenerator &, Random &, int, int);
};
