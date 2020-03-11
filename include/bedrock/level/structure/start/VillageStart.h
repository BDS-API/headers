#pragma once

#include "../../../../unmapped/Dimension.h"
#include "./StructureStart.h"
#include "../../../util/Random.h"
#include "../../../block/unmapped/BlockSource.h"
#include "../../../../unmapped/BoundingBox.h"
#include "../../../../unmapped/BiomeSource.h"


class VillageStart : StructureStart {

public:
    virtual ~VillageStart();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual bool isValid()const;
    virtual void getType()const;

    VillageStart(Dimension &, BiomeSource &, Random &, int, int);
};
