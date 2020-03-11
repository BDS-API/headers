#pragma once

#include "./StructureStart.h"
#include "../../../util/Random.h"
#include "../../../../unmapped/BiomeSource.h"


class ShipwreckStart : StructureStart {

public:
    virtual ~ShipwreckStart();
    virtual void getType()const;

    ShipwreckStart();
    ShipwreckStart(BiomeSource &, Random &, int, int);
};
