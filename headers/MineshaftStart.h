#pragma once

class MineshaftStart : StructureStart {

    virtual ~MineshaftStart();
    virtual ~MineshaftStart();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void isValid(void)const;
    virtual void getType(void)const;
}
