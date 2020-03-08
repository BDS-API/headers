#pragma once

#include "../../../util/Random"
#include "../../../../unmapped/BiomeSource"


class ShipwreckStart : StructureStart {

public:
    virtual ShipwreckStart::~ShipwreckStart()
    virtual void getType()const;

    ShipwreckStart(void);
    ShipwreckStart(BiomeSource &, Random &, int, int);
};
