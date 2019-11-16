#pragma once

class ShipwreckStart : StructureStart {

    virtual ~ShipwreckStart();
    virtual ~ShipwreckStart();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void isValid(void)const;
    virtual void getType(void)const;
}
