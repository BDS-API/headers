#pragma once

class BuriedTreasureStart : StructureStart {

    virtual ~BuriedTreasureStart();
    virtual ~BuriedTreasureStart();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void isValid(void)const;
    virtual void getType(void)const;
}
