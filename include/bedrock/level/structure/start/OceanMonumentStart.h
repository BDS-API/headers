#pragma once

#include "StructureStart.h"


class OceanMonumentStart : StructureStart {

public:
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    ~OceanMonumentStart();
    virtual void getType()const;
    OceanMonumentStart(Dimension &, Random &, int, int);
    void createMonument(Dimension &, Random &, int, int);
    OceanMonumentStart();
};
