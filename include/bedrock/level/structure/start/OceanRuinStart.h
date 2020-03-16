#pragma once

#include "StructureStart.h"


class OceanRuinStart : public StructureStart {

public:
    virtual ~OceanRuinStart(); // _ZN14OceanRuinStartD2Ev
    virtual void __fake_function0(); // fake
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN14OceanRuinStart11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    virtual void getType()const; // _ZNK14OceanRuinStart7getTypeEv
    OceanRuinStart(); // _ZN14OceanRuinStartC2Ev
    OceanRuinStart(Dimension &, OverworldGenerator &, Random &, int, int, Biome const&); // _ZN14OceanRuinStartC2ER9DimensionR18OverworldGeneratorR6RandomiiRK5Biome
    void createRuin(Dimension &, OverworldGenerator &, Random &, int, int); // _ZN14OceanRuinStart10createRuinER9DimensionR18OverworldGeneratorR6Randomii
};
