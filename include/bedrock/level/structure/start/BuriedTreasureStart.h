#pragma once

class BuriedTreasureStart : StructureStart {

public:
    virtual BuriedTreasureStart::~BuriedTreasureStart();
    virtual void getType(void)const;

    BuriedTreasureStart(void);
    BuriedTreasureStart(Dimension &, Random &, int, int);
};
