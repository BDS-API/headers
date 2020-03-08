#pragma once

#include "../../../util/Random"
#include "../../../block/unmapped/BlockSource"
#include "../../../../unmapped/Dimension"
#include "../../../../unmapped/BoundingBox"
#include "../../../../unmapped/BiomeSource"


class VillageStart : StructureStart {

public:
    virtual VillageStart::~VillageStart()
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual bool isValid()const;
    virtual void getType()const;

    VillageStart(Dimension &, BiomeSource &, Random &, int, int);
};
