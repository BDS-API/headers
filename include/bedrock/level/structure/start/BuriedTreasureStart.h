#pragma once

#include "StructureStart.h"


class BuriedTreasureStart : StructureStart {

public:
    virtual void getType()const;
    ~BuriedTreasureStart();
    BuriedTreasureStart(Dimension &, Random &, int, int);
    BuriedTreasureStart();
};
