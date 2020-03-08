#pragma once

#include "../../../../unmapped/BiomeSource"
#include "../../../util/Random"


class ShipwreckStart : StructureStart {

public:
    ShipwreckStart::~ShipwreckStart()
    virtual void getType()const;

    ShipwreckStart(void);
    ShipwreckStart(BiomeSource &, Random &, int, int);
};
