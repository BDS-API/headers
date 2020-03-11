#pragma once

#include "../../../../unmapped/Dimension.h"
#include "./StructureStart.h"
#include "../../../util/Random.h"


class BuriedTreasureStart : StructureStart {

public:
    virtual ~BuriedTreasureStart();
    virtual void getType()const;

    BuriedTreasureStart();
    BuriedTreasureStart(Dimension &, Random &, int, int);
};
