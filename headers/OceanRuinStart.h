#pragma once

class OceanRuinStart : StructureStart {

    virtual void ~OceanRuinStart();
    virtual void ~OceanRuinStart();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void isValid(void)const;
    virtual void getType(void)const;
}
