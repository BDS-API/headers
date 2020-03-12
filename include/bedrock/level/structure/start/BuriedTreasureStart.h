#pragma once

#include "../../../../unmapped/Dimension.h"
#include "../../../util/Random.h"
#include "StructureStart.h"


class BuriedTreasureStart : StructureStart {

public:
    ~BuriedTreasureStart();
    virtual void getType()const;
    BuriedTreasureStart();
    BuriedTreasureStart(Dimension &, Random &, int, int);
};
