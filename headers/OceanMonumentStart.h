#pragma once

class OceanMonumentStart : StructureStart {

    virtual void ~OceanMonumentStart();
    virtual void ~OceanMonumentStart();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void isValid(void)const;
    virtual void getType(void)const;
}
