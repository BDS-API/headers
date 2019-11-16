#pragma once

class NetherFortressStart : StructureStart {

    virtual void ~NetherFortressStart();
    virtual void ~NetherFortressStart();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void isValid(void)const;
    virtual void getType(void)const;
}
