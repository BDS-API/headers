#pragma once

class OceanRuinStart : StructureStart {

    virtual ~OceanRuinStart();
    virtual ~OceanRuinStart();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void isValid(void)const;
    virtual void getType(void)const;
}
