#pragma once

#include "../../../util/Random"
#include "../../../block/unmapped/BlockSource"
#include "../../../../unmapped/Dimension"
#include "../../../../unmapped/BoundingBox"


class OceanMonumentStart : StructureStart {

public:
    virtual OceanMonumentStart::~OceanMonumentStart()
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void getType()const;

    OceanMonumentStart(void);
    void createMonument(Dimension &, Random &, int, int);
    OceanMonumentStart(Dimension &, Random &, int, int);
};
