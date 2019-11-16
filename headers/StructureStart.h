#pragma once

class StructureStart {

    virtual ~StructureStart();
    virtual ~StructureStart();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void isValid(void)const;
    virtual void getType(void)const;
}
