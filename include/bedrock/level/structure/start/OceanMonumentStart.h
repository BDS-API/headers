#pragma once

#include "../../../block/unmapped/BlockSource.h"
#include "../../../../unmapped/Dimension.h"
#include "../../../../unmapped/BoundingBox.h"
#include "../../../util/Random.h"
#include "StructureStart.h"


class OceanMonumentStart : StructureStart {

public:
    virtual void getType()const;
    ~OceanMonumentStart();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    void createMonument(Dimension &, Random &, int, int);
    OceanMonumentStart(Dimension &, Random &, int, int);
    OceanMonumentStart();
};
