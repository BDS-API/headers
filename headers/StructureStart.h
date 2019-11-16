#pragma once

class StructureStart {

    virtual void ~StructureStart();
    virtual void ~StructureStart();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void isValid(void)const;
    virtual void getType(void)const;
}
