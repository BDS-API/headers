#pragma once

#include "../../../../unmapped/Dimension.h"
#include "./StructureStart.h"
#include "../../../util/Random.h"
#include "../../../block/unmapped/BlockSource.h"
#include "../../../../unmapped/BoundingBox.h"


class OceanMonumentStart : StructureStart {

public:
    virtual ~OceanMonumentStart();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void getType()const;

    OceanMonumentStart();
    void createMonument(Dimension &, Random &, int, int);
    OceanMonumentStart(Dimension &, Random &, int, int);
};
