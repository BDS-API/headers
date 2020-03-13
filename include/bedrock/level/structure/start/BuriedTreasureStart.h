#pragma once

#include "StructureStart.h"


class BuriedTreasureStart : StructureStart {

public:
    ~BuriedTreasureStart(); // _ZN19BuriedTreasureStartD2Ev
    virtual void getType()const; // _ZNK19BuriedTreasureStart7getTypeEv
    BuriedTreasureStart(); // _ZN19BuriedTreasureStartC2Ev
    BuriedTreasureStart(Dimension &, Random &, int, int); // _ZN19BuriedTreasureStartC2ER9DimensionR6Randomii
};
