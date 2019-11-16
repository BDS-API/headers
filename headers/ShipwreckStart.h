#pragma once

class ShipwreckStart : StructureStart {

    virtual void ~ShipwreckStart();
    virtual void ~ShipwreckStart();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void isValid(void)const;
    virtual void getType(void)const;
}
