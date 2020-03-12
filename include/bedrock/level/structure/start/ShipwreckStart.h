#pragma once

#include "StructureStart.h"


class ShipwreckStart : StructureStart {

public:
    ~ShipwreckStart();
    virtual void getType()const;
    ShipwreckStart();
    ShipwreckStart(BiomeSource &, Random &, int, int);
};
