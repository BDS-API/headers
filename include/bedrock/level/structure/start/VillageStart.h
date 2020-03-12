#pragma once

#include "../../../block/unmapped/BlockSource.h"
#include "../../../../unmapped/BiomeSource.h"
#include "../../../../unmapped/Dimension.h"
#include "../../../../unmapped/BoundingBox.h"
#include "../../../util/Random.h"
#include "StructureStart.h"


class VillageStart : StructureStart {

public:
    ~VillageStart();
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual bool isValid()const;
    VillageStart(Dimension &, BiomeSource &, Random &, int, int);
};
