#pragma once

class OceanMonumentStart : StructureStart {

    virtual ~OceanMonumentStart();
    virtual ~OceanMonumentStart();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void isValid(void)const;
    virtual void getType(void)const;
}
