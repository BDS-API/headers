#pragma once

#include "../../../../unmapped/BoundingBox"
#include "../../../util/Random"
#include "../../../../unmapped/Dimension"
#include "../../../block/unmapped/BlockSource"


class OceanMonumentStart : StructureStart {

public:
    OceanMonumentStart::~OceanMonumentStart()
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void getType()const;

    OceanMonumentStart(void);
    void createMonument(Dimension &, Random &, int, int);
    OceanMonumentStart(Dimension &, Random &, int, int);
};
