#pragma once

#include "../../../../unmapped/BiomeSource.h"
#include "../../../util/Random.h"
#include "StructureStart.h"


class ShipwreckStart : StructureStart {

public:
    ~ShipwreckStart();
    virtual void getType()const;
    ShipwreckStart();
    ShipwreckStart(BiomeSource &, Random &, int, int);
};
