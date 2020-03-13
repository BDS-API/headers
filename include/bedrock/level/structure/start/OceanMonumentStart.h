#pragma once

#include "StructureStart.h"


class OceanMonumentStart : StructureStart {

public:
    ~OceanMonumentStart(); // _ZN18OceanMonumentStartD2Ev
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN18OceanMonumentStart11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    virtual void getType()const; // _ZNK18OceanMonumentStart7getTypeEv
    OceanMonumentStart(); // _ZN18OceanMonumentStartC2Ev
    void createMonument(Dimension &, Random &, int, int); // _ZN18OceanMonumentStart14createMonumentER9DimensionR6Randomii
    OceanMonumentStart(Dimension &, Random &, int, int); // _ZN18OceanMonumentStartC2ER9DimensionR6Randomii
};
