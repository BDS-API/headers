#pragma once

class NetherFortressStart : StructureStart {

    virtual ~NetherFortressStart();
    virtual ~NetherFortressStart();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void isValid(void)const;
    virtual void getType(void)const;
}
