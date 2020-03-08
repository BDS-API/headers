#pragma once

#include "../../../../unmapped/BiomeSource"
#include "../../../../unmapped/BoundingBox"
#include "../../../util/Random"
#include "../../../../unmapped/Dimension"
#include "../../../block/unmapped/BlockSource"


class VillageStart : StructureStart {

public:
    VillageStart::~VillageStart()
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual bool isValid()const;
    virtual void getType()const;

    VillageStart(Dimension &, BiomeSource &, Random &, int, int);
};
