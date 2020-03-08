#pragma once

#include "../../../../unmapped/Dimension"
#include "../../../util/Random"


class BuriedTreasureStart : StructureStart {

public:
    BuriedTreasureStart::~BuriedTreasureStart()
    virtual void getType()const;

    BuriedTreasureStart(void);
    BuriedTreasureStart(Dimension &, Random &, int, int);
};
