#pragma once

#include "../../../util/Random"
#include "../../../../unmapped/Dimension"


class BuriedTreasureStart : StructureStart {

public:
    virtual BuriedTreasureStart::~BuriedTreasureStart()
    virtual void getType()const;

    BuriedTreasureStart(void);
    BuriedTreasureStart(Dimension &, Random &, int, int);
};
