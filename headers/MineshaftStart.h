#pragma once

class MineshaftStart : StructureStart {

    virtual void ~MineshaftStart();
    virtual void ~MineshaftStart();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void isValid(void)const;
    virtual void getType(void)const;
}
