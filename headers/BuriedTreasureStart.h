#pragma once

class BuriedTreasureStart : StructureStart {

public:
    virtual ~BuriedTreasureStart();
    virtual void getType(void)const;

    void BuriedTreasureStart(void);
    void BuriedTreasureStart(Dimension &, Random &, int, int);
};
